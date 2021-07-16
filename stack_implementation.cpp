#include<bits/stdc++.h>

using namespace std;


struct node
{

    int data;
    struct node *next;
};

class Stack
{
public:
    struct node *top;
    Stack(){top=NULL;}
    void push(int x);
    int pop();
    void display();
};


void Stack::push(int x)
{
    struct node *t=new node;

    if(t==NULL) cout<<"STACK OVERFLOW"<<endl;
    else if(top==NULL)
    {
        t->data=x;
        top=t;
    }
    else
    {
        t->data=x;
        t->next=top;

        top=t;
    }
}

int Stack::pop()
{
    int x;
     struct node *t=new node;
     t=top;
    if(t==NULL) cout<<"STACK is empty"<<endl;
    else
    {
       x=t->data;
       top=t->next;

       delete t;
    }

    return x;
}

void Stack::display()
{
    struct node *t=new node;
    t=top;

    while(t)
    {
        cout<<t->data<<endl;
        t=t->next;
    }
}


int main()
{
    Stack s;
    s.push(2);

    s.display();

    cout<<endl;

    s.push(3);
     s.display();

     cout<<endl;

    s.pop();

    s.display();

}

