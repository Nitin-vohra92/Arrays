long maxPathSum(int ar1[], int ar2[], int size1, int size2)
{
    long max=0;
  int s1=0,s2=0,i=0,j=0;
  while(i<size1 && j<size2)
  {
    // comparison
    if(ar1[i] < ar2[j])
    {
    s1=s1+ar1[i];
    i++; 
    }
    else if (ar1[i]>ar2[j])
    {
      s2=ar2[j]+s2;
      j++;
    
  }
    else if (ar1[i]==ar2[j])
    { 
      s1=s1+ar1[i];
      s2=ar2[j]+s2;

      if(s1>s2)
    {
      max=s1+max;
      s1=0;
        s2=0;
      i++;
      j++;
    }
     else
     {
       max=s2+max;
       s2=0;
       s1=0;
       i++;
       j++;
     }
    }
  }
   
  while(i< size1)
     { 
     s1=s1+ar1[i];
     i++;
     }
  while(j< size2)
  { 
  s2=s2+ar2[j];
  j++;
  }
    if(s1>s2)
    {
      max =max+s1;
    }
    
  else
  {
  max=max+s2;
  }
  return max;
  }
 
    
    

