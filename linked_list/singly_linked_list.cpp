#include <iostream>

struct Node {
    int key;
    Node* next;
    
    Node(int key) : key(key), next(nullptr) {}
};


class LinkedList {
    private:
        Node* header;

    public:
        LinkedList() : header(nullptr) {}

        void insertFront(int val) {
            Node* newNode = new Node(val);
        }


}