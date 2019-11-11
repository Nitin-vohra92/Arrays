#include<iostream>
using namespace std;

int main()
{
  int input[10000],i,n;
  int sum;
cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>input[i];
    
  }
  for(i=0;i<n;i++)
  {
    sum=sum+input[i];
  }
  cout<<sum;

return 0;
}


