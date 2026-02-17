
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