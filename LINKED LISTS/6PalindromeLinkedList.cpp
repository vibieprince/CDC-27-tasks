// Palindrome Linked List (geeksforgeeks)
#include<iostream>
using namespace std;
//{ Driver Code Starts
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <ios>
#include <iostream>
#include <random>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        // First reverse half of the linked list
        Node* slow = head;
        Node* fast = head;
        while(fast!=NULL && fast->next !=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        // Now slow pointer is at the middle of the linked list
        // Reverse it from here
        Node* prev = nullptr;
        while(slow!=NULL){
            fast = slow->next;
            slow->next = prev;
            prev = slow;
            slow = fast;
        }
        // now iterate from starting of the original and the reverse list
        while(head!=NULL && prev!=NULL){
            if(head->data!=prev->data)
               return false;
            head = head->next;
            prev = prev->next;
        }
        return true;
    }
};