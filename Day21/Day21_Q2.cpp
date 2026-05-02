// Given the head of a singly linked list, return the middle node of the linked list.

// If there are two middle nodes, return the second middle node.


// Example 1:


// Input: head = [1,2,3,4,5]
// Output: [3,4,5]
// Explanation: The middle node of the list is node 3.

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

ListNode* middleNode(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;        
        fast = fast->next->next;  
    }
    return slow; 
}


ListNode* createList(int n) {
    ListNode* head = NULL;
    ListNode* temp = NULL;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ListNode* newNode = new ListNode(x);
        
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

void printList(ListNode* node) {
    while (node != NULL) {
        cout << node->val << " ";
        node = node->next;
    }
}

int main() {
    int n;
    cin >> n;
    
    ListNode* head = createList(n);
    
    ListNode* mid = middleNode(head);
    

    printList(mid);
    
    return 0;
}