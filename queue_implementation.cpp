#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

class Queue
{
public:

    struct node *Front,*Rear;
    Queue() {Front=NULL;Rear=NULL;}

    void PUSH(int x);
    int FRONT();
    void POP();
    void display();


};


void Queue::PUSH(int x)
{
    struct node *t=new node;
    if(t==NULL) cout<<"OVER FLOW"<<endl;
    else
    {
        t->data=x;
        t->next=NULL;

        if(Rear==NULL)
        {
            Front=Rear=t;
        }
        else
        {
            Rear->next=t;
            Rear=t;
        }
    }
}


int Queue::FRONT()
{
    if(Front==NULL) cout<<"QUEUE IS EMPTY"<<endl;
    else
    {
        return Front->data;
    }
}


void Queue::POP()
{
    if(Front==NULL) cout<<"QUEUE IS EMPTY"<<endl;
    else
    {
        struct node *t=new node;
        t=Front;

        int x=Front->data;
        Front=Front->next;

        delete t;
    }
}

void Queue::display()
{
    struct node *t=new node;
    t=Front;
    while(t)
    {
        cout<<t->data<<endl;
        t=t->next;
    }
}


int main()
{
    Queue q;
    q.PUSH(2);q.PUSH(3);q.PUSH(4);

    q.display();

    cout<<endl;

    int x=q.FRONT();
    q.POP();

     q.display();

    cout<<endl;


      x=q.FRONT();
    q.POP();

     q.display();

    cout<<endl;


}
