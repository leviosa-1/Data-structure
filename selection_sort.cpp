#include<iostream>
using namespace std;

 int main()
 {
    int n;
    cin>>n;

    int arr[n],temp;

    cout<<"enter the elements of array<<"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    cout<<"sorted array :-"<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
 }