void pairSum(int input[], int n, int x) {
   
int i,j;
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(input[i]+input[j]==x)
      {    if(input[i]<=input[j])
        cout<<input[i]<<" "<<input[j]<<endl;;      
             if(input[i]>input[j])
        cout<<input[j]<<" "<<input[i]<<endl;       
      }
    }
  }
}
