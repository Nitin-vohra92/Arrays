// arr - input array
// n - size of array

void PushZeroesEnd(int arr[], int n)
{ 
  int count=0,j=0;
  for(int i=0;i<n;i++)
       {
         if(arr[i]==0)
            {
              count++;
            }
       }
  for(int i=0;i<n;i++)
  {
    if(arr[i]!=0)
    {
      arr[j]=arr[i];
      j++;
    }
  }
  
for(;j<n;j++)
{
   arr[j]=0;
}

}
