#include<string.h>;
#include<iostream>;
#include<stdio.h>;
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

// doubly nlinked list format 
class DListNode{
  public:
    int data;
    DListNode *prev;
    DListNode *next;
    DListNode() : data(0), prev(nullptr), next(nullptr) {}
    DListNode(int x) : data(x), prev(nullptr), next(nullptr) {}
    DListNode(int x, DListNode *prev, DListNode *next) : data(x), prev(prev), next(next) {}
};

// doubly linked list , deleting head
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

//reversing a dll 
class Solution {
public:
    DListNode* Dllreverse(DListNode* &head) {
        if (head == nullptr) return head;
        DListNode* n = head;
        DListNode* temp = nullptr;
        while (n != nullptr) {
            temp = n->next;
            n->next = n->prev;
            n->prev = temp;
            head = n;       
            n = n->prev;      
        }
        return head;
    }
};

// leet 876 - count pass + return pass 
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int ct=0;
        ListNode* n =  head ;
        while (n != nullptr) {
            ct++;
            n = n->next;
        }
        ct=ct/2;
        while (ct != 0) {
        ct--;
        head = head->next;
    }
    return head;
    }
};

// leet 876 slow poitner and fast pointer sollution 
class Solution {
public:
    ListNode* middleNode2(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

// leet 206 - reversing a ll
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* n = head;
        while (n != nullptr) {
            ListNode* temp = n->next; 
            n->next = prev;            
            prev = n;                  
            n = temp;               
        }
        return prev; 
    }
};   

//leet-141 (detect if loop exists in ll)
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head== nullptr){return false;}
        if(head->next==nullptr ){return false;}
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast){return true;}
        }
        return false;
    }
};

//leet 142 brute force
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       if(head== nullptr){return nullptr;}
        if(head->next==nullptr ){return nullptr;}
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast){
                int count=0;
                ListNode* stop=slow;
                while(true){
                    if(slow==head){return head;}
                    slow=slow->next;
                    if (slow==stop){
                        head=head->next;
                        count+=1;
                    }
                }
            }
        } 
        return nullptr;
    }
};
// leet 142 solution - 1stpart is same but 2nd p[art mmopdify to reduce time complexity]
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == nullptr || head->next == nullptr)
            return nullptr;

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                // FIXED PART
                slow = head;
                while (slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;  
            }
        }
        return nullptr;
    }
};

// leet 234 (pallindrome check of ll( string convert methord)
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        std::string s = "";
        while (head != nullptr) {
            s += std::to_string(head->data);
            head = head->next;
        }

        int l = 0, r = s.size() - 1;
        while (l < r) {
            if (s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};

//leet 234 half reverse methord ( same time but o(1) space)
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return true;

        // Step 1: Find middle
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse second half
        ListNode* prev = nullptr;
        ListNode* curr = slow;

        while (curr != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        // Step 3: Compare both halves
        ListNode* firstHalf = head;
        ListNode* secondHalf = prev;

        while (secondHalf != nullptr) {
            if (firstHalf->data != secondHalf->data)
                return false;

            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }

        return true;
    }
};

// leet 328 seperating odd and even in order
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
    if (!head || !head->next) return head;

ListNode* even = head->next;
ListNode* odd = head;
ListNode* temp = head->next;

while (even && even->next) {
    odd->next = even->next;
    odd = odd->next;

    even->next = odd->next;
    even = even->next;
}

odd->next = temp;
return head;
      }
};