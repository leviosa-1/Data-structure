#include<iostream>
using namespace std;

void show(int arr[], int size)
{
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}
int main()
{
    cout<<"ENTER ONLY SORTED ARRAY"<<endl;
    
    
    int a[5],b[5],c[10],i,j,k;
    cout<<"enter the elements of array A"<<endl;
    for(i=0;i<=4;i++)
    cin>>a[i];
    cout<<"enter the elements of array B"<<endl;
    for(i=0;i<=4;i++)
    cin>>b[i];

    i=j=k=0;
    while(i<=4 && j<=4)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
        k++;
    }

    if(i>j)
    {
        for(int l=j;l<=4;l++)
          { c[k]=b[l];
            k++;
          }
    }
    else
    {
        for(int l=i;l<=4;l++)
           { c[k]=b[l];
             k++;
           }
    }

    cout<<"sorted elements :-"<<endl;
    show(c,10);
}