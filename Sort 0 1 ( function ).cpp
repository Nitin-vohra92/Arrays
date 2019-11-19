// arr - input array
// n - size of array

void SortZeroesAndOne(int arr[], int n)
{ 
  int i,k=0,count;
  for(i=0;i<n;i++)
  {
    if(arr[i]==0)
    {
      arr[k]=arr[i];
      k++;
      count=k;
    }
 }
  for(k=count;k<n;k++)
{
  arr[k]=1;
}

}
