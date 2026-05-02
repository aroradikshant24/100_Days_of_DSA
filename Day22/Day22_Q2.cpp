// Given the head of a singly linked list, reverse the list, and return the reversed list.


// Example 1:
// Input: head = [1,2,3,4,5]
// Output: [5,4,3,2,1]


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};


Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* current = head;
    Node* nextNode;

    while (current != NULL) {
        nextNode = current->next;  
        current->next = prev;     
        prev = current;            
        current = nextNode;        
    }

    return prev;  
}


void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    int n;
    cin >> n;

    Node* head = NULL;
    Node* temp = NULL;


    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;

        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    head = reverseList(head);

    display(head);

    return 0;
}