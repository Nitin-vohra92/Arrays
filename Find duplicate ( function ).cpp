
int FindDuplicate(int arr[], int size)
{   
    int i,j;
    
    for(i=0;i<size;i++)
    {
      for(j=0;j<size;j++)
      {
        
        if(i==j)
        {
          continue;
        }
        if(arr[i]==arr[j])
        {
          return arr[i];
        }
        
      }
      
    }
  }
