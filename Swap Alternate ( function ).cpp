/*
Sample Input 1:
6
9 3 6 12 4 32

Sample Output 1 :
3 9 12 6 32 4


Sample Input 2:
9
9 3 6 12 4 32 5 11 19

Sample Output 2 :
3 9 12 6 32 4 11 5 19
*/



void swapAlternate(int arr[],int size)
{
 
  
  int i,j;
  int temp;
  for(i=0;i<size;i=i+2)
  {
    if(i!=size-1)
    {
    
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
    
    }


  }
}
