#include<iostream>
using namespace std;
struct snode
{
  int data;
  struct snode *link;
};
class stack_ll
{
    snode *temp,*tos;
    public : stack_ll()
             {tos=NULL;}
             void push(int ele);
             void pop();
             void display();
};
void stack_ll :: push(int ele)
{
    temp=new snode;
    temp->data=ele;
    temp->link=tos;
    tos=temp;
    cout<<"element has been pushed"<<endl;
}
void stack_ll :: pop()
{
    temp=tos;
    if(tos==NULL)
      cout<<"the stack is empty"<<endl;
    else
    {
        tos=tos->link;
        cout<<"poped element :"<<temp->data<<endl;
        delete temp;
    }
}
void stack_ll :: display()
{
    if(tos==NULL)
      cout<<"the stack is empty"<<endl;
    else
    {
        temp = tos;
        while(temp!=NULL)
            {
                cout<<temp->data<<endl;
                temp=temp->link;
            }
    }
}
int main()
{
    stack_ll sl;
     int choice,n;
    do
    {
        cout<<"1. push"<<endl;
        cout<<"2. pop"<<endl;
        cout<<"3. display"<<endl;
        cout<<"4.exit"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1: cout<<"enter the element to push in stack"<<endl;
                cin>>n;
                sl.push(n);
                break;
        case 2: sl.pop();
                break;
        case 3: sl.display();
                break;
        default: cout<<"invalid choice"<<endl;
               break;
        }
    }
    while(choice!=4);

}