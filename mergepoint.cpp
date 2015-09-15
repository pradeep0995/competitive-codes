#include<iostream>
#include<stdio.h>
using namespace std;

struct Node()
{
    int num;
    Node *link;
};
int length(Node *temp)
{
    int len=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    return len;
}
int FindMergeNode(Node *headA, Node *headB)
{
    // brute force approach
    int m=length(headA);
    int n=length(headB);
    node *head2=headB;
    for(int i=0;i<m;i++)
    {
        headB=head2;
        for(int j=0;j<n;j++)
        {
            if(headB==headA)return b->num;
            headb=headb->link;
        }
        headA=headA->link;
    }
}

