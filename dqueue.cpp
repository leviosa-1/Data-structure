#include<iostream>
using namespace std;
#define max 10
// input retricted
class queue
{
    private : int q[max], f , r;
    public : queue()
             {f=r=-1;}
             void insert_ele(int ele);
             void del_ele_front();
             void del_ele_rare();
             void display();
             int count_ele();
             void check();
};
void queue :: insert_ele(int ele)
{
    if(r==max-1)
      cout<<"queue is full"<<endl;
    else
       {
        if(f==-1 && r==-1)
           f=0;
        r++;
        q[r]=ele;
        cout<<"element inserted in the queue"<<endl;
       }
}
void queue :: del_ele_front()
{
    if(f==-1 && r==-1)
      cout<<"queue is empty"<<endl;
    else
    {
        cout<<"deleted element :"<<q[f]<<endl;
        if(f==r)
          f=r=-1;
        else
           f++;
    }
}
void queue :: del_ele_rare()
{
     if(f==-1 && r==-1)
      cout<<"queue is empty"<<endl;
    else
    {
        cout<<"deleted element from rare :"<<q[r]<<endl;
         if(r==f)
           f=r=-1;
        else 
           r--;
    }
}
void queue :: display()
{
    if(f==-1 && r==-1)
     cout<<"queue is empty"<<endl;
    else
    {
        for(int i=f;i<=r;i++)
          cout<<q[i]<<" ";
    }
}
int queue :: count_ele()
{
    if(f==-1 && r==-1)
     cout<<"queue is empty"<<endl;
    else
    {
        int c=0;
        for(int i=f;i<=r;i++)
           c++;
        return c;
    }
}
void queue :: check()
{
    if(f==-1 && r==-1)
     cout<<"queue is empty"<<endl;
     else if(r==max-1)
       cout<<"queue is full"<<endl;
    else
       cout<<"There is some space available"<<endl;
}
int main()
{
    queue q;
    int n,choice;
    do
    {
        cout<<"1. Insert element in queue"<<endl;
        cout<<"2. Delete element from front of queue"<<endl;
        cout<<"3. Delete element from rare of queue"<<endl;
        cout<<"4. Display elements of queue"<<endl;
        cout<<"5. Count number of elements in queue"<<endl;
        cout<<"6. Check the queue"<<endl;
        cout<<"7. Exit"<<endl;
        cout<<"Enter your choice :";
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"enter the element to insert in queue"<<endl;
                    cin>>n;
                    q.insert_ele(n);
                    break;
            case 2: q.del_ele_front();
                    break;
            case 3: q.del_ele_rare();
                    break;
            case 4: q.display();
                    break;
            case 5: cout<<"Number of elements is queue :"<<q.count_ele()<<endl;
                    break;
            case 6: q.check();
                    break;
            default: cout<<"Invalid choice!!"<<endl;
                     break;
        }
    } while (choice!=7);
    
}