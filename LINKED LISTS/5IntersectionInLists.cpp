// Intersection in Y shaped lists (geeksforgeeks)
#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        if(head1==NULL)
            return head2;
        if(head2==NULL)
           return head1;
          
        Node* temp1 = head1;
        Node* temp2 = head2;
        
        while(temp1!=temp2){
            if(temp1==NULL)
               temp1 = head1; // or head2
            else
               temp1 = temp1->next;
            if(temp2==NULL)
               temp2 = head2; // or head1
            else
               temp2 = temp2->next;
        }
        return temp2; // or temp1
    }
};