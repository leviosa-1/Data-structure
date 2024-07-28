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