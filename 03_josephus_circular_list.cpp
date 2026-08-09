// Josephus Problem using Circular Linked List
// Every kth person is eliminated until one person remains.

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

int josephus(int n, int k) {
    Node* head = new Node(1);
    Node* tail = head;

    for (int i = 2; i <= n; i++) {
        tail->next = new Node(i);
        tail = tail->next;
    }

    tail->next = head;

    Node* current = head;

    while (current->next != current) {
        // Move k-1 steps.
        for (int count = 1; count < k - 1; count++)
            current = current->next;

        // Remove kth node.
        Node* eliminated = current->next;
        current->next = eliminated->next;
        delete eliminated;

        current = current->next;
    }

    int winner = current->data;
    delete current;

    return winner;
}

int main() {
    int n = 7;
    int k = 3;

    cout << "Survivor: " << josephus(n, k) << endl;

    return 0;
}
