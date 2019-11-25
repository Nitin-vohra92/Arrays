// input1 - first array
// size1 - size of first array
// input2 - second array
// size2 - size of second array
// output - array in which sum is to be stored

void sumOfTwoArrays(int input1[], int size1, int input2[], int size2, int output[])
{   
  if(size1>=size2)
  {
  int sum=0,k=size1,i=0,j=0;
	k=size1; 
    for( i=size1-1,j=size2-1;i>=0&&j>=0;--i,--k,--j)
  {
    output[k]=input1[i]+input2[j]+sum;
    sum=0;
    if(output[k]>=10)
    {
      output[k]=output[k]%10;
      sum=1;
    }
    
   }
   
  for(;k>0;k--)
  {
    output[k]=input1[i]+sum;
    sum=0;
     if(output[k]>=10)
    {
      output[k]=output[k]%10;
      sum=1;
    }
    
    i--;
  }
    if(sum==1)
 {
   output[k]=1;
 }
 else
 {
   output[k]=0;
 }
 
  }

else if(size2>size1)
{ 
int sum=0,k=size2,i=0,j=0; 
    for( i=size1-1,j=size2-1;i>=0&&j>=0;--i,--k,--j)
  {
    output[k]=input1[i]+input2[j]+sum;
    sum=0;
    if(output[k]>=10)
    {
      output[k]=output[k]%10;
      sum=1;
    }
    
   }
   
  for(;k>0;k--)
  {
    output[k]=input2[j]+sum;
    sum=0;
     if(output[k]>=10)
    {
      output[k]=output[k]%10;
      sum=1;
    }
    
    j--;
  }
 if(sum==1)
 {
   output[k]=1;
 }
 else
 {
   output[k]=0;
  }
 }
}

  
