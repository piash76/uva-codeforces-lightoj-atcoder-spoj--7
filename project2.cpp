#include<bits/stdc++.h>
using namespace std;

int a[50],b[50];
int n;

struct node    ///self referential structure
{
    int data;
    struct node *next;  ///pointing to next node
};

struct node *head1,*head2,*head3,*last1,*last2,*last3;


void creation1()
{
    head1=new node;
    head1->data=a[0];
    head1->next=NULL;
    last1=head1;

    for(int i=1;i<n;i++)
    {
        struct node *t=new node;
        t->data=a[i];
        t->next=NULL;

        last1->next=t;
        last1=t;
    }
}

void creation2()
{
    head2=new node;
    head2->data=b[0];
    head2->next=NULL;
    last2=head2;

    for(int i=1;i<n;i++)
    {
        struct node *t=new node;
        t->data=b[i];
        t->next=NULL;

        last2->next=t;
        last2=t;
    }
}


void display(struct node *h)
{

   struct node *p=new node;
    p=h;

    cout<<"ELEMENTS "<<endl;

    while(p)
    {
        printf("%d\n",p->data);
        p=p->next;
    }


}


void fun()
{
    struct node *cur1=head1;
    while (head2!= nullptr)
        {
     if (cur1->next == nullptr) {
      cur1->next = head2;
        head2 = nullptr;
        }
else if (head2->data < cur1->next->data) {
struct node *temp2 = head2;
head2 = head2->next;
temp2->next = cur1->next;
cur1->next = temp2;
} else
 {
cur1 = cur1->next;
}

}

}







int main()
{
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    creation1();creation2();

    fun();
    display(head1);

}
