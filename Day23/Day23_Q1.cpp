// Problem: Merge Two Sorted Linked Lists - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n
// - Second line: n space-separated integers (first list)
// - Third line: integer m
// - Fourth line: m space-separated integers (second list)

// Output:
// - Print the merged linked list elements, space-separated


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};


Node* insert(Node* head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
        return newNode;

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}


Node* mergeLists(Node* head1, Node* head2) {
    Node* dummy = new Node();
    Node* tail = dummy;
    dummy->next = NULL;

    while (head1 != NULL && head2 != NULL) {
        if (head1->data < head2->data) {
            tail->next = head1;
            head1 = head1->next;
        } else {
            tail->next = head2;
            head2 = head2->next;
        }
        tail = tail->next;
    }

    if (head1 != NULL)
        tail->next = head1;
    else
        tail->next = head2;

    return dummy->next;
}


void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    int n, m, value;
    Node* head1 = NULL;
    Node* head2 = NULL;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> value;
        head1 = insert(head1, value);
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> value;
        head2 = insert(head2, value);
    }

    Node* mergedHead = mergeLists(head1, head2);

    display(mergedHead);

    return 0;
}