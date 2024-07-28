#include <iostream>
using namespace std;
#define max 5
class stack
{
    private : int st[max],tos;
    public : stack()
              {tos=-1;}
             void push(int ele);
             void pop();
             void display();
};
void stack :: push(int ele)
{
    if(tos==max-1)
         cout<<"stack is overflow"<<endl;
    else
       {
         tos++;
        st[tos]=ele;
        cout<<"element has pushed"<<endl;
       }
}
void stack :: pop()
{
    if(tos==-1)
       cout<<"stack is underflow"<<endl;
    else
       {
        cout<<"poped element"<<st[tos]<<endl;
        tos--;
       }

}
void stack :: display()
{
    if(tos==-1)
      cout<<"stack is empty"<<endl;
    else
      {
        while(tos!=-1)
         {
          cout<<st[tos]<<" ";
          tos--;
         }
      }
}
int main()
{
    stack s;
    int choice,n;
    do
    {
        cout<<"1. push"<<endl;
        cout<<"2.pop"<<endl;
        cout<<"3.display"<<endl;
        cout<<"4.exit"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1: cout<<"enter the element to push in stack"<<endl;
                cin>>n;
                s.push(n);
                break;
        case 2: s.pop();
                break;
        case 3: s.display();
                break;
        default: cout<<"invalid choice"<<endl;
               break;
        }
    }
    while(choice!=4);

}