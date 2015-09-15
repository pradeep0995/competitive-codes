#include<iostream>
using namespace std;
# define max_size 5
class queued
{
private:
    int a[max_size];
    int first,last;
public:
    queued()
    {
        first=-1;
        last=-1;
    }
    bool isempty()
    {
        return(first==-1 && last==-1);
    }
    bool isfull()
    {
        return((last+1)%max_size==first?true:false);
    }
    void enqueue(int x)
    {
        if(isfull()){
            cout<<"unable to perform this operation";
            return;
        }
        else if(isempty())
        {
            last=first=0;
        }
        else
            last=(last+1)%max_size;
        a[last]=x;
    }
    void dequeue()
    {
        if(isempty())
        {
            cout<<"sorry nothing to remove";
            return;
        }
        else if(first == last)
        {
            first=last=-1;
        }
        else first=(first+1)%max_size;
    }
    void print()
    {
        int coutn=(last-first+max_size)%max_size+1;
        for(int i=0;i<coutn;i++)
        {
            int index=(first+i)%max_size;
            cout<<a[index]<<" ";
        }
        cout<<"\n";
    }
};
int main()
{
    queued q;
    q.enqueue(5);q.print();
    q.enqueue(7);q.print();
    q.enqueue(8);q.print();
    q.enqueue(10);q.print();
    q.enqueue(15);q.print();
    q.enqueue(6);q.print();
    q.dequeue();q.print();

    return 0;
}






