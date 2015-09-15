#include<iostream>
using namespace std;
struct node
{
    int num;
    node *next;
};
class queue_link
{
private:
    node *first,*last;
public:
    queue_link()
    {
        first=last=NULL;
    }
    bool isempty()
    {
        return(first==NULL && last==NULL);
    }
    void enque(int x)
    {
        node *temp=new node();
        temp->num=x;
        temp->next=NULL;
        if(isempty())
        {
            first=last=temp;
            return ;
        }
        last->next=temp;
        last=temp;
    }
    void dequee()
    {
        if(isempty())return;
        node *temp=first;
        if(first==last)
        {
            first=last=NULL;
            delete(temp);
        }
        else{
            first=first->next;
            delete(temp);
        }
    }
    int front_element()
    {
        if(isempty())return-1234;
        else return first->num;
    }
};
int main()
{
    queue_link q;
    q.enque(5);
    q.enque(7);
    q.enque(15);
    q.enque(14);
    q.enque(59);
    q.dequee();
    cout<<q.front_element();
    return 0;
}
