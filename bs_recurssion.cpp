#include<iostream>
using namespace std;
binary_search(int arr[], int l, int r ,int x )
{
    if(r>=l)
    { int mid = l+(r-1)/2;
      
      if(arr[mid]==x)
        return mid;
      
      if(arr[mid]>x)
        return binary_search(arr , l, mid-1 , x);

      return binary_search(arr , mid+1 , r, x);        
    }
    return -1;

}

int main()
{
int a[10],l,r,key;
int result;

cout<<"enter the elements of an array"<<endl;
for(int i=0;i<=9;i++)
   cin>>a[i];

cout<<"enter the search element"<<endl;
cin>>key;
 
result = binary_search(a,0,9,key);

if(result==-1)
cout<<"element is not present in an array"<<endl;

return 0;

}