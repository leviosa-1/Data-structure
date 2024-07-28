#include<iostream>
using namespace std;

class array
{ private : int i, arr[50],n;
  public : void create();
           void insert(int ele,int pos);
           void del(int dele);
           void search(int key);
           void min_max();
};
void array:: create()
{
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"elements of an array"<<endl;
    for(int i=0;i<n;i++)
       cin>>arr[i];
    cout<<"array is created of size"<<n<<endl;
}
void array :: insert(int ele,int pos)
{
  for(int i=n;i>=pos;i--) 
      arr[i]=arr[i-1];
      arr[i]=ele;
      n++;
  cout<<"New array is "<<endl;
      for(int i=0;i<=n;i++)
         cout<<arr[i]<<" ";
}
void array :: search(int key)
{
    int found=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
       {found=1;
        break;
       }
    }
    if(found==1)
      cout<<"element found"<<endl;
    else
      cout<<"element not found"<<endl;
}
void array :: del(int dele)
{
    int i;
    for(i=0;i<n;i++)
      { if(arr[i]==dele)
          break; 
      }
      if(i<n)
      {
        n=n-1;
        for(int j=i;j<n;j++)
           arr[j]=arr[j+1];
      
      cout<<"element deleted"<<endl;
      }
      else
      cout<<"element could not delete because element not found"<<endl;

      cout<<"modified array after deletion"<<endl;
            for(int i=0;i<n;i++)
               cout<<arr[i]<<" ";
}
void array :: min_max()
{
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(max<arr[i])
          max=arr[i];
        if(min>arr[i])
          min=arr[i];
    }
    cout<<"max element :"<<max<<endl;
    cout<<"min element :"<<min<<endl;
}
int main()
{
    array a;
    int choice ,se,de,e,p;
    do
    {
        cout<<"1. create an array"<<endl;
        cout<<"2. insert an element in array"<<endl;
        cout<<"3. delete an element in array"<<endl;
        cout<<"4. search an element in array"<<endl;
        cout<<"5. find min/max element in an array"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: a.create();
                    break;
            case 2: cout<<"enter the element to insert in array"<<endl;
                    cin>>e;
                    cout<<"enter the position of new array to be inserted"<<endl;
                    cin>>p;
                    a.insert(e,p);
                    break;
            case 3: cout<<"enter the element to delete"<<endl;
                    cin>>de;
                    a.del(de);
                    break;
            case 4:  cout<<"enter the element to search"<<endl;
                    cin>>se;
                    a.search(se);
                    break;
            case 5: a.min_max();
                    break;
            default : cout<<"invalid choice !!"<<endl;
                      break;
            
        }
        
    }
      while (choice !=6);
}