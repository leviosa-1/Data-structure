#include<iostream>
using namespace std;
#define max 10

class cqueue
{
    private : int cq[max],f,r;
    public: cqueue()
            {f=r=-1;}
             void insert_ele(int ele);
             void del_ele();
             void display();
             int count_ele();
             void check();
};
void cqueue :: insert_ele(int ele)
{
    if(f==0 && r==max-1 || f==r+1)
      cout<<"Circular queue is full"<<endl;
    else
    {
        if(f==-1 && r==-1)
          f=0;
        r=(r+1)%max;
        cq[r]=ele;
        cout<<"Element is inserted in the circular queue"<<endl;
    }
}
void cqueue :: del_ele()
{
    if(f==-1 && r==-1)
      cout<<"circular queue is empty"<<endl;
    else
    {
        cout<<"Deleted element is :"<<cq[f]<<endl;
        if(f==r)
          f=r=-1;
        f=(f+1)%max;
    }
}
void cqueue :: display()
{
     if(f==-1 && r==-1)
      cout<<"circular queue is empty"<<endl;
    else
    {
        int i=f;
        while(1)
        {
            cout<<cq[i]<<" ";
            if(i==r)
              break;
            else
              i=(i+1)%max;
        }
    }
}
int cqueue :: count_ele()
{
     if(f==-1 && r==-1)
      cout<<"circular queue is empty"<<endl;
    else
    {
        int i=f;
        int c=0;
        while (1)
        {
            c++;
            if(i==r)
              break;
            else  
              i=(i+1)%max;
          
        }
          return c;
    }
}
void cqueue :: check()
{
     if(f==-1 && r==-1)
      cout<<"circular queue is empty"<<endl;
     else if(f==0 && r==max-1 || f==r+1)
      cout<<"Circular queue is full"<<endl;
      else
      cout<<"There is some space available in circular queue"<<endl;
}
int main()
{
    cqueue cq;
    int n,choice;
    do
    {
        cout<<"1. Insert element in queue"<<endl;
        cout<<"2. Delete element in queue"<<endl;
        cout<<"3. Display elements of queue"<<endl;
        cout<<"4. Count number of elements in queue"<<endl;
        cout<<"5. Check the queue"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter your choice :";
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"enter the element to insert in queue"<<endl;
                    cin>>n;
                    cq.insert_ele(n);
                    break;
            case 2: cq.del_ele();
                    break;
            case 3: cq.display();
                    break;
            case 4: cout<<"Number of elements is queue :"<<cq.count_ele()<<endl;
                    break;
            case 5: cq.check();
                    break;
            default: cout<<"Invalid choice!!"<<endl;
                     break;
        }
    } while (choice!=6);
    
}