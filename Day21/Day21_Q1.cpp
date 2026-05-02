// Problem: Create and Traverse Singly Linked List

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the result

// Example:
// Input:
// 5
// 10 20 30 40 50
#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
};


Node* createList(int n) {
    Node *head = NULL, *temp = NULL;
    int value;

    for (int i = 0; i < n; i++) {
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
    return head;
}


void traverseList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    int n;
    cin >> n;


    Node* head = createList(n);


    traverseList(head);

    return 0;
}