//Write a program to count total number of negative elements in an array.
#include<iostream>
using namespace std;
int main()
{
  int a[100],i,n,neg=0;
  
 cout<<"Enter The Size of An Array :\n";
  cin>>n;

  cout<<"Enter The Element :\n";
  for(i=0;i<n;i++)
  {
   cin>>a[i];
  }
  
  for(i=0;i<n;i++)
  {
   if(a[i]<0)
   neg++;
   
  }
  
  cout<<"\nNegative No. is = "<<neg;

 return 0;

}
