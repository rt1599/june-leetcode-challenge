// Day 2 of june Leetcode challenge

// Problem 1 
// Delete a node in linked list

// Example:
//input-head = [4,5,1,9], node = 5
//output-[4,1,9]

#include<bits/stdc++.h>
using namespace std;

class LinkedList
{
	int data;
	LinkedList* left;
	
	LinkedList(int data)
	{
		this->data = data;
		left = nullptr;
	}
};
void deleteNode(ListNode* node) {
    node->val=node->next->val;
    node->next=node->next->next;
    }
