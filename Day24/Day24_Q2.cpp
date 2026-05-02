// Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.

 
// Example 1:

// Input: head = [1,2,6,3,4,5,6], val = 6

// Output: [1,2,3,4,5]

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};


Node* removeElements(Node* head, int val) {

   
    while (head != NULL && head->data == val) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    Node* current = head;

    while (current != NULL && current->next != NULL) {
        if (current->next->data == val) {
            Node* temp = current->next;
            current->next = temp->next;
            delete temp;
        } else {
            current = current->next;
        }
    }

    return head;
}

void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {

    Node* head = new Node{1, NULL};
    head->next = new Node{2, NULL};
    head->next->next = new Node{6, NULL};
    head->next->next->next = new Node{3, NULL};
    head->next->next->next->next = new Node{4, NULL};
    head->next->next->next->next->next = new Node{5, NULL};
    head->next->next->next->next->next->next = new Node{6, NULL};

    int val = 6;

    head = removeElements(head, val);

    display(head);

    return 0;
}