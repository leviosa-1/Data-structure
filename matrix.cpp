#include<iostream>
using namespace std;

int main()
{
    int num,r1,c1,r2, c2,row, col, a[10][10],b[10][10],c[10][10];
    cout<<"enter row of matrix A:"<<endl;
    cin>>r1;
    cout<<"enter coloumn of matrix A:"<<endl;
    cin>>c1;
    cout<<"enter row of matrix B:"<<endl;
    cin>>r2;
    cout<<"enter coloumn of matrix B:"<<endl;
    cin>>c2;
    cout<<"enter the elements of Matrix A"<<endl;
           for(int i=0;i<r1;i++)
              for(int j=0;j<c1;j++)
                 cin>>a[i][j];
    cout<<"enter the elements of matrix B"<<endl;
             for(int i=0;i<r2;i++)
              for(int j=0;j<c2;j++)
                  cin>>b[i][j];
    cout<<"show matrix A"<<endl;
           for(int i=0;i<r1;i++)
            {
                for(int j=0;j<c1;j++)
                {
                 cout<<" "<<a[i][j];
                }
                 cout<<"\n";
            }
    cout<<"show matrix B"<<endl;
           for(int i=0;i<r2;i++)
            {
                for(int j=0;j<c2;j++)
                {
                 cout<<" "<<b[i][j];
                }
                 cout<<"\n";
            }
    cout<<"\n\t\t   MENU"<<endl;
    cout<<"press 1 for addition of two matrix"<<endl;
    cout<<"press 2 for transpose of mmatrix"<<endl;
    cout<<"press 3 for multiplication of two matrix"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>num;
    switch(num) 
  {  case 1:
         cout<<"\t\t ADDITION OF MATRIX!"<<endl;
          for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            c[i][j] = a[i][j] + b[i][j];
    cout << "Sum of matrices\n";
    for (int i = 0; i < r1; i++)
    {    for (int j = 0; j < c1; j++)
             {
                cout << c[i][j] << "  ";	
             } 
             cout << "\n";
    }
     break;
     case 2:
          cout<<"transpose of matrix A:"<<endl;
            for(int i=0;i<r1;i++)
            {
                for(int j=0;j<c1;j++)
                {
                 cout<<" "<<a[j][i];
                }
                 cout<<"\n";
            }
            cout<<"transpose of matrix B:"<<endl;
            for(int i=0;i<r2;i++)
            {
                for(int j=0;j<c2;j++)
                {
                 cout<<" "<<b[j][i];
                }
                 cout<<"\n";
            }
           break;
       
     case 3:
          cout<<"multiplication of matrix:"<<endl;
        if(r1==c2)
    {
          for(int i=0; i<r1; ++i)
      for(int j=0; j<c2; ++j) {
         c[i][j] = 0;
      }
      for(int i=0; i<r1; ++i)
      for(int j=0; j<c2; ++j)
      for(int k=0; k<c1; ++k) {
         c[i][j]+=a[i][k]*b[k][j];
      }
      cout<<"Product of the two matrices is:"<<endl;
      for(int i=0; i<r1; ++i) {
         for(int j=0; j<c2; ++j)
         cout<<c[i][j]<<" ";
         cout<<endl;
      }
    }
    else
    cout<<"matrix could not multiply!!"<<endl;
    
   
    break;
    
    default :
       cout<<"enter the choice correct!!"<<endl;
   break;
 }

  
           
}