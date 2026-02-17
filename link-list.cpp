
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