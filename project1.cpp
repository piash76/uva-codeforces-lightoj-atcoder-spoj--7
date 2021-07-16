

#include<bits/stdc++.h>
using namespace std;


int n;

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL,*last;

void creation()
{
    int i,val;
    struct node *t;

    head=new node;

    cin>>val;
    head->data=val;
    head->next=NULL;

    last=new node;
    last=head;  ///saving head in last


    for(i=1;i<n;i++)
    {
        cin>>val;
        t=new node;

       t->data=val;
        t->next=NULL;

        last->next=t;
        last=t;
    }


}


void display()
{

    struct node *p=new node;
    p=head;

    while(p)
    {
        printf("%d\n",p->data);
        p=p->next;
    }


}

void fun()
{
    struct node *cur=head;
    while(cur)
    {
        if(cur->next!=NULL and cur->data>cur->next->data)
        {
            cur->data++;
            struct node *t=cur->next;
            cur->next=cur->next->next;
            t->next=cur;
        }
        cur=cur->next;
    }
}




int main()
{
    cin>>n;

    creation();
    display();

    cout<<"AFTER "<<endl;
    fun();
    display();



}

/*
9
10 20 40 30 90 80 70 60 100

*/

