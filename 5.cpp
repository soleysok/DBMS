#include<iostream>
using namespace std;
void fibonacci(int n,int j,int i,int m)
{
     if(j==n)
     {
        j = i+m;
        cout<<j;
     }
     else if(j<n)
     {
         cout<<j<<" ";
         fibonacci(n,j+i,j,i);
     }
}
int main()
{
    int n;
    cout<<"input number: ";
    cin>>n;
    cout<<"The Fibonacci series: "<<endl;
    fibonacci(n,0,1,0);
}
