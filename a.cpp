#include <iostream>

using namespace std;

class Array
{   private :  int i,a[50],n;
     public:
  
   

   void create();
   void display();
   void insert();
   void del();
   void search();
   void findmax();
   void findmin();
   

};

void Array :: create()
{int size,a[size];

    cout<<"\nEnter the size of Array "<<endl;
        cin>>size;
        
    cout<<"Enter the elements of Array:"<<endl;
    for(int j=0; j<size;j++)
       cin>>a[j];
       
    cout<<"Element of array are:"<<endl;
    for(int j=0; j<size;j++)
       cout<<a[j]<<" ";
}

void Array :: display()
{ int j;

    cout<<"elements of the array are:"<<endl;
    for(j=0;j<n;j++)
    cout<<a[j]<<" ";
}

void Array :: insert()
{ if(i=n)
    cout<<"\nArray is Full cannot insert";
  else
    { cin>>a[i];
       i++;}
  
}

void Array :: del()
{ if(i=0)
    cout<<"\nArray is empty cannot delete";
  else
 { cout<<"deleted element "<<a[i]<<endl;
  i--;
 }
}

void Array :: search()
{ int j,key,found;
  cout<<"Enter the key element";
  cin>>key;
  
  for(j=0;j<n;j++)
  {
    if(a[j]=key)
      {
        found=1;
        break;
      }
  }
  if(found=1)
  cout<<"Element found"<<endl;
  else
  cout<<"Element not found"<<endl;
}

void Array :: findmax()
{ int j,max;
  max= a[0];
  
  for(j=0;j<n;j++)
  {
    if(a[j]>max)
       max=a[i];
  }
  cout<<"Maximum Element of Array is "<<max<<endl;
}

void Array :: findmin()
{ int j,min;
  min = a[0];
  
  for(j=0;j<n;j++)
  {
    if(a[j]<min)
       min=a[i];
  }
  cout<<"Maximum Element of Array is "<<min<<endl;
}

int main()
{  Array a;
   int ch;
  
  cout<<"Menu driven program for operations on Array"<<endl;
  
  do
  {
    cout<<"Enter your choice"<<endl;
    cout<<"1.Create  2.Diplay 3.Insert  4.Delete 5.Findmax 6.Findmin 7.Exit"<<endl;
    cin>>ch;
    switch(ch){
                case 1:a.create();
                       break;
                case 2:a.display();  
                       break;
                case 3:a.insert();
                       break;
                case 4:a.del();
                       break;
                case 5:a.findmax();
                       break;
                case 6:a.findmin();
                       break;
                case 7: 
                       break;
                default:cout<<"\nPlease enter a valid choice:"<<endl;
            }
  }
  while(ch!=7);
    

    return 0;
}