#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"size of array"<<endl;
    cin>>n;
    int  a[n],i,key;
    int found=0;
    cout<<"enter the elements of an array"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];

    cout<<"enter the search element"<<endl;
    cin>>key;

    for(i=0;i<n;i++)
    {
        if(a[i]==key)
          {
            found=1;
            break;
          }
    }
     if(found==1)
       cout<<"element found"<<endl;
    else
       cout<<"element not found"<<endl;
}