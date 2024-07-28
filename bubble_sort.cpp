#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    int  a[n],i,j,temp;

    cout<<"enter elements in an array"<<endl;
    for(i=0;i<n;i++)
       cin>>a[i];
    
    //bubble_sort
     for(i=0;i<=n-1;i++)
     {
        for(j=0;j<=n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
     }

     cout<<"sorted array are as follows :-"<<endl;
     for(i=0;i<n;i++)
     cout<<a[i]<<" ";

}