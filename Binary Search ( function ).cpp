// arr - input array
// n - size of array
// val - element to be searched

int BinarySearch(int arr[], int n, int val)
{	
  int start,end,middle,a=-1;
  start=0;
  end=n-1;
  while(start<=end)
  {
  
      middle=(start+end)/2;

    if(val==arr[middle])
    {
      return middle;
    }
    else
    {
      if(val>arr[middle])
	start=middle+1; 
     else if (val<arr[middle])
    {
      end=middle-1;
    }
      
      
    }
    
  }
return a;
}
