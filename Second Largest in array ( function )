//Function to find the second largest element in an array
// arr - input array
// n - size of array

int FindSecondLargest(int arr[], int n)
{  
  int max=arr[0],j=0,i=0;
  for(i=0;i<n;i++)
  {
    if(max<arr[i])
    {
      max=arr[i];
    }
  }
  for( i=0;i<n;i++)
  { 
  if(arr[i]==max)
    arr[i]=-100000;
  }
    int smax=-100000;
    for( j=0;j<n;j++)
  {
    if(smax<arr[j])
    {
      smax=arr[j];
    }
  }
 return smax;
   
  }
