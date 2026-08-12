// LRU Cache using HashMap + Doubly Linked List
// Time: O(1) average for get() and put()

#include <iostream>
#include <unordered_map>
using namespace std;

class Node {
public:
    int key, value;
    Node* prev;
    Node* next;

    Node(int k, int v) : key(k), value(v), prev(nullptr), next(nullptr) {}
};

class LRUCache {
private:
    int capacity;
    unordered_map<int, Node*> cache;
    Node* head;
    Node* tail;

    void remove(Node* node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

    void insertAtFront(Node* node) {
        node->next = head->next;
        node->prev = head;
        head->next->prev = node;
        head->next = node;
    }

public:
    LRUCache(int cap) {
        capacity = cap;
        head = new Node(0, 0);
        tail = new Node(0, 0);
        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {
        if (cache.find(key) == cache.end())
            return -1;

        Node* node = cache[key];
        remove(node);
        insertAtFront(node);

        return node->value;
    }

    void put(int key, int value) {
        if (cache.find(key) != cache.end()) {
            Node* node = cache[key];
            node->value = value;
            remove(node);
            insertAtFront(node);
            return;
        }

        if ((int)cache.size() == capacity) {
            Node* leastUsed = tail->prev;
            cache.erase(leastUsed->key);
            remove(leastUsed);
            delete leastUsed;
        }

        Node* newNode = new Node(key, value);
        cache[key] = newNode;
        insertAtFront(newNode);
    }
};

int main() {
    LRUCache cache(2);

    cache.put(1, 100);
    cache.put(2, 200);

    cout << cache.get(1) << endl;

    cache.put(3, 300);

    cout << cache.get(2) << endl; // -1
    cout << cache.get(3) << endl; // 300

    return 0;
}
