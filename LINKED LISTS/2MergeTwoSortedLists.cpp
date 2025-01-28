// Merge Two Sorted Lists(21)
#include<iostream>
using namespace std;
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp = new ListNode(-1);
        ListNode* ansList = temp;

        while(list1 !=NULL && list2 != NULL){
            if(list1->val <= list2->val){
                ansList->next = new ListNode(list1->val);
                list1 = list1->next;
            }
            else{
                ansList->next = new ListNode(list2->val);
                list2 = list2->next;
            }
            ansList = ansList->next;
        }
        // if still any node left either in list1 or list2
        while(list1!=NULL){
            ansList->next = new ListNode(list1->val);
            list1 = list1->next;
            ansList = ansList->next;
        }
        while(list2!=NULL){
            ansList->next = new ListNode(list2->val);
            list2 = list2->next;
            ansList = ansList->next;
        }
        ListNode* Head = temp->next;
        delete temp;
        return Head;
    }
};