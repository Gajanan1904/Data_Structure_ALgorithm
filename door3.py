import urllib.request
import json
import base64

DOOR3_URL = "https://workwithus.staging.scalerailabs.com/g/pqjHleHZVy8F4BOQdxr5"

BEGIN_TOKEN = "eyJjbGVhcmVkIjozLCJleHAiOjE3ODY2ODcxMjAsImlhdCI6MTc4NjUxODE3OCwicmVmIjoiYTZhOGM3OTVlMWQ5NTcyZiJ9.vdkETPTUSCiqO-1kmhPmFA"
DOOR2_TOKEN = "eyJjbGVhcmVkIjozLCJleHAiOjE3ODY2ODcxMjAsImlhdCI6MTc4NjUxNzQ5OCwicmVmIjoiYTZhOGM3OTVlMWQ5NTcyZiJ9.RB4UIR9yCJ5J57I_YxNc0A"


def b64url_decode(segment: str) -> bytes:
    # Base64url may omit padding; pad it back out to a multiple of 4
    padding = "=" * (-len(segment) % 4)
    return base64.urlsafe_b64decode(segment + padding)


def main():
    # 1. GET Door 3 using DOOR2_TOKEN
    get_req = urllib.request.Request(
        DOOR3_URL,
        headers={"Authorization": f"Bearer {DOOR2_TOKEN}"},
        method="GET",
    )
    with urllib.request.urlopen(get_req) as resp:
        get_body = resp.read().decode("utf-8")

    data = json.loads(get_body)
    trivia_token = data["token"]
    print("Fresh trivia token received.")

    # 2. Split token, decode first segment (the JWT-style payload header part)
    first_segment = trivia_token.split(".")[0]
    decoded_bytes = b64url_decode(first_segment)
    payload = json.loads(decoded_bytes)

    # 3. Extract answers
    answers = payload["a"]
    print("Decoded answers:", answers)

    # 4. POST immediately using BEGIN_TOKEN
    post_body = json.dumps({"token": trivia_token, "answers": answers}).encode("utf-8")
    post_req = urllib.request.Request(
        DOOR3_URL,
        data=post_body,
        headers={
            "Authorization": f"Bearer {BEGIN_TOKEN}",
            "Content-Type": "application/json",
        },
        method="POST",
    )
    with urllib.request.urlopen(post_req) as resp:
        post_response = resp.read().decode("utf-8")

    print("Server response:")
    print(post_response)


if __name__ == "__main__":
    main()