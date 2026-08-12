// Clone a Linked List with Random Pointer
// Approach: Interweave cloned nodes with original nodes.
// Time: O(n), Extra Space: O(1) excluding the output list.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* random;

    Node(int value) {
        data = value;
        next = nullptr;
        random = nullptr;
    }
};

Node* cloneList(Node* head) {
    if (head == nullptr)
        return nullptr;

    Node* curr = head;

    // Step 1: Insert cloned nodes after original nodes.
    while (curr != nullptr) {
        Node* copy = new Node(curr->data);
        copy->next = curr->next;
        curr->next = copy;
        curr = copy->next;
    }

    // Step 2: Set random pointers of cloned nodes.
    curr = head;

    while (curr != nullptr) {
        if (curr->random != nullptr)
            curr->next->random = curr->random->next;

        curr = curr->next->next;
    }

    // Step 3: Separate original and cloned lists.
    Node* copyHead = head->next;
    curr = head;

    while (curr != nullptr) {
        Node* copy = curr->next;
        curr->next = copy->next;

        if (copy->next != nullptr)
            copy->next = copy->next->next;

        curr = curr->next;
    }

    return copyHead;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << "(" << head->data << ", ";

        if (head->random)
            cout << head->random->data;
        else
            cout << "NULL";

        cout << ") ";

        head = head->next;
    }

    cout << endl;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    head->random = head->next->next;
    head->next->random = head;
    head->next->next->random = head->next;

    Node* cloned = cloneList(head);

    cout << "Cloned list: ";
    printList(cloned);

    return 0;
}
