 #include<iostream>
using namespace std;
#define max 10
class queue
{
    private : int q[max], f , r;
    public : queue()
             {f=r=-1;}
             void insert_ele(int ele);
             int del_ele();
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
int queue :: del_ele()
{
    if(f==-1 && r==-1)
      cout<<"queue is empty"<<endl;

    int f= q[0];
    for(int i=0; i<r; i++){
        q[i]=q[i+1];
    }
    r=r-1;
    return f;
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
                    q.insert_ele(n);
                    break;
            case 2: cout<<"deleted element :"<<q.del_ele()<<endl;
                    break;
            case 3: q.display();
                    break;
            case 4: cout<<"Number of elements is queue :"<<q.count_ele()<<endl;
                    break;
            case 5: q.check();
                    break;
            default: cout<<"Invalid choice!!"<<endl;
                     break;
        }
    } while (choice!=6);
    
}