// Flatten a Multilevel Linked List
// Each node can have a next pointer and a child pointer.
// The child list is inserted immediately after the current node.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* child;

    Node(int value) {
        data = value;
        next = nullptr;
        child = nullptr;
    }
};

Node* flatten(Node* head) {
    if (head == nullptr)
        return nullptr;

    Node* current = head;

    while (current != nullptr) {
        if (current->child != nullptr) {
            Node* childList = current->child;
            Node* nextNode = current->next;

            current->next = childList;
            current->child = nullptr;

            Node* tail = childList;

            while (tail->next != nullptr)
                tail = tail->next;

            tail->next = nextNode;
        }

        current = current->next;
    }

    return head;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }

    cout << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    // Child list: 2 -> 7 -> 8
    head->next->child = new Node(7);
    head->next->child->next = new Node(8);

    // Child list: 4 -> 9
    head->next->next->next->child = new Node(9);

    head = flatten(head);

    cout << "Flattened list: ";
    printList(head);

    return 0;
}
