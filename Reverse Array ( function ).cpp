// arr - input array
// size - size of array
void Reverse(int arr[],int size) 
{
     int j,x,i;
     j=size-1;

         for(i=0;i<=j;i++)
        {
          
            x=arr[i];
            arr[i]=arr[j];
            arr[j]=x;
            j=j-1;
        }     
          
 }
