// Check if a Linked List is a Palindrome
// Uses the fast/slow pointer technique.
// Time: O(n), Extra Space: O(1)

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;

    while (curr != nullptr) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

bool isPalindrome(Node* head) {
    if (head == nullptr || head->next == nullptr)
        return true;

    Node* slow = head;
    Node* fast = head;

    // Find the middle.
    while (fast->next != nullptr && fast->next->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse the second half.
    Node* secondHalf = reverseList(slow->next);

    Node* first = head;
    Node* second = secondHalf;

    bool palindrome = true;

    while (second != nullptr) {
        if (first->data != second->data) {
            palindrome = false;
            break;
        }

        first = first->next;
        second = second->next;
    }

    // Restore the original list.
    slow->next = reverseList(secondHalf);

    return palindrome;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(1);

    cout << (isPalindrome(head) ? "Palindrome" : "Not Palindrome") << endl;

    return 0;
}
