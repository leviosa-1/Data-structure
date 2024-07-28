# include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
    int a[n],l,u,m,i,key,c=0;
    int found=0;

    cout<<"enter the elements of array"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];

    cout<<"enter the element you want to search"<<endl;
    cin>>key;

    l=0;  u=n;
    while(l<=u && found==0)
    {
        m=(u+l)/2;
        if(a[m]==key)
          found=1;
        else if(key>=a[m])
          l=m+1;
        else if(key<=a[m])
          u=m-1;
        else
          found=1;
        c++;
    }
        cout<<"iterations "<<c<<endl;
    if(found==1)
     cout<<"element found"<<endl;
    else 
      cout<<"element not found"<<endl;
    

}