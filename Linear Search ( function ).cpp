// Function to find an element using linear search
// arr - input array
// n - size of array
// val - element to be searched

int linearSearch(int arr[], int n ,int val){
  
  int i,z=-1;
  for(i=0;i<n;i++)
  {
    if(val==arr[i])
    {
      return i;
    } 
}
  return z;
}
