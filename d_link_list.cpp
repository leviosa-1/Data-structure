#include<iostream>
using namespace std;
struct node 
{
    int data;
    struct node *prev;
    struct node *next;
};
class d_link_list
{
    private : struct node *start,*p,*q,*temp;
    public : d_link_list()
            {start=NULL;}
            void insert_at_first(int ele);
            void insert_at_last(int ele);
            void insert_by_search(int key,int ele);
            void display_forward();
            void display_backward();
            int count();
            void search(int key);
            void del_by_search(int key);
};
void d_link_list :: search(int key)
{
    int found=0;
    if(start==NULL)
       cout<<"list is empty"<<endl;
    else
    {
        p=start;
        while(p!=NULL)
        {
            if(p->data==key)
            {
                found=1;
                break;
            }
            p=p->next;
        }
        if(found==0)
          cout<<"element not found"<<endl;
        else
          cout<<"element found"<<endl;
    }
}
void d_link_list::insert_at_first(int ele)
{
    temp=new  struct node;
    temp->data=ele;
    temp->prev=NULL;
    if(start==NULL)
      temp->next=NULL;
    else
    {
        temp->next=start;
        start->prev=temp;
    }
    start=temp; 
    cout<<"element is inserted at first"<<endl;
}
void d_link_list :: insert_at_last(int ele)
{
     temp=new struct node;
     temp->data=ele;
     temp->next=NULL;
     if(start==NULL)
      { temp->prev=NULL;
        start=temp;
      }
    else
    {
        p=start;
        while(p->next!=NULL)
             p=p->next;
        p->next=temp;
        temp->prev=p;
    }
    cout<<"element is inserted"<<endl;  

}
void d_link_list :: insert_by_search(int key,int ele)
{
    if(start==NULL || start->next==NULL)
       cout<<"insertion is not possible"<<endl;
    else 
    {
        p=start;
        while(p!=NULL)
            {
                if(p->data==key)
                  break;
                p=p->next;
            }
           
    }
     if(p==NULL)
              cout<<"searched element not found , such that insertion is not possible"<<endl;
            else if(p->next==NULL)
               cout<<"element found at last position , such that insertion is not possible"<<endl;
    else
    {
        temp=new struct node;
        temp->data=ele;
        temp->next=p->next;
        temp->prev=p;
        p->next->prev=temp;
        p->next=temp;
        cout<<"element inserted"<<endl;
    }
}
void d_link_list :: display_forward()
{
    if(start==NULL)
      cout<<"List is empty"<<endl;
    else
    {
        p=start;
        while(p!=NULL)
        {
            cout<<p->data<<"  ";
            p=p->next;
        }
    }
}
void d_link_list :: display_backward()
{
     if(start==NULL)
      cout<<"List is empty"<<endl;
    else
    {
        p=start;
        while(p->next!=NULL)
            p=p->next;
        while(p!=NULL)
        {
            cout<<p->data<<"  ";
            p=p->prev;
        }
    }
    
}
int d_link_list :: count()
{
    int c=0;
    if(start==NULL)
      cout<<"List is empty"<<endl;
    else
    {
        p=start;
        while(p!=NULL)
        {
            c++;
            p=p->next;
        }
        return c;
    }
}
void d_link_list :: del_by_search(int key)
{
     if(start==NULL|| start->next==NULL || start->next->next==NULL )
       cout<<"Deletion is not possible"<<endl;
    else
    {
        p=start;
        while(p!=NULL)
        {
            if(p->data==key)
              break;
            q=p;
            p=p->next;
        }
        if(p==NULL)
          cout<<"searched element not found"<<endl;
        else if(p->next==NULL || p==start)
        cout<<"element found at first and last of the list,such that deletion is not possible "<<endl;
        else
        {
            q->next=p->next;
            q->next->prev=q;
            cout<<"deleted element :"<<p->data<<endl;
        }

    }
}
int main()
{
    d_link_list dll;
    int n,s,choice;
    do 
    {
        cout<<"1. Insert at first."<<endl;
        cout<<"2. Insert at last."<<endl;
        cout<<"3. Insert at middle by searching."<<endl;
        cout<<"4. Count the number of elements"<<endl;
        cout<<"5. Display the elements forward."<<endl;
        cout<<"6. Display the elements backward."<<endl;
        cout<<"7. Delete by searching"<<endl;
        cout<<"8. search element"<<endl;
        cout<<"9. Exit"<<endl;   
        cout<<"enter your choice"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"enter the element you want to insert"<<endl;
                    cin>>n;
                    dll.insert_at_first(n);
                    break;
            case 2: cout<<"enter the element you want to insert"<<endl;
                    cin>>n;
                    dll.insert_at_last(n);
                    break;
            case 3: cout<<"enter the search elemeent after which you want to insert"<<endl;
                    cin>>s;
                    cout<<"enter the ealement you want you insert after searched element"<<endl;
                    cin>>n;
                    dll.insert_by_search(s,n);
                    break;
            case 4: cout<<"Number of elements in list :-"<<dll.count()<<endl;
                    break;
            case 5: cout<<"forward elements are as follows :-"<<endl;
                    dll.display_forward();
                    break;
            case 6: cout<<"reverese elements of list are as follows"<<endl;
                    dll.display_backward();
                    break;
            case 7: cout<<"enter the element you want to delete"<<endl;
                    cin>>s;
                    dll.del_by_search(s);
            case 8: cout<<"enter the element you want to search"<<endl;
                    cin>>s;
                    dll.search(s);
                    break;
            default : cout<<"Invalid choice"<<endl;
                      break;
            
        }
    }
    while(choice!=9);
}
