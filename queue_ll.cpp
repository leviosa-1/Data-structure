#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
class queue_ll
{
    private : struct node *f,*r,*temp;
    public : queue_ll()
             {f=r=NULL;}
             void insert_ele(int ele);
             void del_ele();
             void display();
             int count_ele();
};
void queue_ll :: insert_ele(int ele)
{
    temp=new node;
    temp->data=ele;
    temp->link=NULL;
    if(r==NULL)
      f=r=temp;
    else{
        r->link=temp;
        r=temp;
    }
    cout<<"Element inserted in the queue"<<endl;
}
void queue_ll :: del_ele()
{
    if(f==NULL)
      cout<<"queue is empty"<<endl;
    else{
        temp=f;
        if(r==NULL)
          f=r=NULL;
        else
          f=f->link;
        cout<<"Deleted element :"<<temp->data<<endl;
        delete temp;
    }
}
void queue_ll :: display()
{
    if(f==NULL)
      cout<<"queue is empty"<<endl;
    else{
        node *p=f;
        while(p!=NULL)
         {
            cout<<p->data<<"->";
            p=p->link;
         }

    }
}
int queue_ll ::count_ele()
{
    int           return c;

    }

}
int main()
{
    queue_ll qll;
    int n,choice;
    do
    {
        cout<<"1. Insert element in queue"<<endl;
        cout<<"2. Delete element in queue"<<endl;
        cout<<"3. Display elements of queue"<<endl;
        cout<<"4. Count number of elements in queue"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"enter the element you want to insert"<<endl;
                    cin>>n;
                    qll.insert_ele(n);
                    break;
            case 2: qll.del_ele();
                    break;
            case 3: cout<<"Elements of queue are as follows :-"<<endl;
                    qll.display();
                    break;
            case 4: cout<<"Number of elements in the queue :"<<qll.count_ele()<<endl;
                    break;
            default : cout<<"Invalid choice!!"<<endl;
                     break;
                     
        }
    }
    while(choice!=5);

    return 0;
}