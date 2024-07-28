# include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
class circular_ll
{
    private : struct node *last,*temp,*p,*q;
    public: circular_ll()
            {last=NULL;}
             void insert_at_first(int ele);
             void insert_at_last(int ele);
             void del_ele(int key);
             void display();
             int count_ele();
};
void circular_ll :: insert_at_first(int ele)
{
    temp=new node;
    temp->data=ele;
   if(last==NULL) 
        temp->next=temp;
     else
     {
        temp->next=last;
        last->next=temp;
     }
     last = temp;
     cout<<"element inserted"<<endl;

}
void circular_ll :: insert_at_last(int ele)
{
    temp = new node;
    temp->data=ele;
    if(last==NULL)
      {
        last=temp;
        last->next=last;
      }
      else
      {
        p=last;
        while(p->next!=last)
           p=p->next;
        p->next=temp;
        temp->next=last;
        }
}
void circular_ll :: del_ele( int key)
{
    if(last==NULL)
      cout<<"list is empty"<<endl;
    else
    {
        p=last->next;
        while(p!=last)
             {
                if(p->data==key)
                  break;

                  q=p;
                  p=p->next;
             }
             if(p==last)
               cout<<"element not found"<<endl;
            else if(p==p && p->next==last)
                cout<<"element found at last or first position"<<endl;
            else
            {
                cout<<"delted element = "<<p->data<<endl;
                q->next=last;
                delete p;
            }
    }
}
void circular_ll :: display()
{
    if(last==NULL)
      cout<<"list is empty"<<endl;
    else
    {
         p=last;
         while(p->next!=last)
         {
            cout<<p->data<<"->";
            p=p->next;
         } 

    }
}
int circular_ll :: count_ele()
{
    int c=0;
    if(last==NULL)
      cout<<"list is empty"<<endl;
    else
    {
            p=last->next;
            while(p!=last)
            {
                c++;

                p=p->next;

            }
            return c;
    }
}


int main()
{
    circular_ll cll;
    int n , choice;
    do 
    {
        
    cout<<"1. Insert at first"<<endl;
    cout<<"2. Insert at last"<<endl;
    cout<<"3. delete element"<<endl;
    cout<<"4. display the list"<<endl;
    cout<<"5. count the number of element"<<endl;
    cout<<"6. exit"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1: cout<<"enter element"<<endl;
                cin>>n;
                cll.insert_at_first(n);
                break;
        case 2: cout<<"enter element"<<endl;
                cin>>n;
                cll.insert_at_last(n);
                break;
        case 3: cout<<"enter the delete element"<<endl;
                cin>>n;
                cll.del_ele(n);
                break;
        case 4: cout<<"linked list elements are as follows:-"<<endl;
                cll.display();
                break;
        case 5: cout<<"number of elements in list :-"<<cll.count_ele()<<endl;
                break;
        default : cout<<"invalid choice"<<endl;
                  break;
    }

    }   
    while(choice!=6);
}