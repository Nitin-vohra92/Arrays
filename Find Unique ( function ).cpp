int FindUnique(int * arr, int size)
{
    int i,j;
    
    for(i=0; i<size; i++)
    {
      for(j=0; j<size; j++)
      {
        if(i==j)
        {
          continue;
        }
        
        else if(arr[i] == arr[j])
        {
          break;
        }
        
      }
      if(j==size)
      {
        return arr[i];
      }
    }

}

    


