
// Definition of singly linked list:
class ListNode{
  public:
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};

// insertion at start of linked lsit queston :

class Solution {
    public:
        ListNode* insertAtHead(ListNode* &head, int X) {
            ListNode* n= new ListNode(X);
            n->next=head;
            head=n;
            return head;
        }
};

// deletion of the current head 

class Solution {
public:
    ListNode* deleteHead(ListNode* &head) {
    ListNode* n = head->next;
    delete head;
    head = n;
    return head;
    }
};

// getting the lenght of a ll :)

class Solution {
public:
    int getLength(ListNode* head) {
    int count = 0;
    while (head != nullptr) {
        count++;
        head = head->next;
    }
    return count;
    }
};

// searching in ll

class Solution {
public:
    bool searchKey(ListNode* head, int key) {
        while (head != nullptr) {
        if(head->data == key){  return true ;}
        head = head->next;
    }
    return false;
    }
};

// leet 237 ( deleting a given node from the middle of a ll without head)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int data;
 *     ListNode *next;
 *     ListNode(int x) : data(x), next(NULL) {}
 * };
 */

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->data = node->next->data;
        ListNode* temp = node->next;
        node->next = node->next->next;
        delete temp;
    }
};

// inserting a given data x at the k-th position inside a linked list

class Solution {
public:
    ListNode* insertAtK(ListNode* &head, int x, int k) {
        if (k == 1) {
            ListNode* n = new ListNode(x);
            n->next = head;
            head = n;
            return head;
        }
        ListNode* temp = head;
        int count = 1;
        while (temp != nullptr && count < k - 1) {
            temp = temp->next;
            count++;
        }
        if (temp != nullptr) {
            ListNode* n = new ListNode(x);
            n->next = temp->next;
            temp->next = n;
        }
        return head;
    }
};

class DListNode{
  public:
    int data;
    DListNode *prev;
    DListNode *next;
    DListNode() : data(0), prev(nullptr), next(nullptr) {}
    DListNode(int x) : data(x), prev(nullptr), next(nullptr) {}
    DListNode(int x, DListNode *prev, DListNode *next) : data(x), prev(prev), next(next) {}
};

class Solution {
public:
    DListNode* deleteHead(DListNode* &head) {
        if (head == nullptr) return head;
        DListNode* n = head->next;
        if (n != nullptr) {
            n->prev = nullptr;
        }
        delete head;
        head = n;
        return head;
    }
};
