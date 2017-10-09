#include <iostream>


struct Node {
  int data;
  Node * next;
};

Node * reverse( Node * head ) {
    Node *tmp = head;
    Node *t = tmp;
    while (t->next != 0)
        t = t->next;

    head = t;

    while (t != tmp) {
        t = tmp;
        while (t->next->next != 0) {
            t = t->next;
        }
        t->next->next = t;
        t->next = 0;
    }
}




int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}