// arr - input array
// size - size of array
// x - sum of triplets

void FindTriplet(int a[], int n, int x)
{   
  for(int i = 0; i<n; i++)
  {
        for(int j = i + 1; j<n; j++)
        {
            int sum = 0;
            for(int k = j+1; k<n; k++)
            {
                sum = a[i] + a[j] + a[k];
                if(sum == x)
                {
                    if(a[i] < a[j])
                    {
                        if((a[i] < a[k]))
                          {
                            cout<<a[i]<<" ";
                            if(a[k] > a[j])
                                cout<<a[j]<<" "<<a[k]<<endl;
                            else
                                cout<<a[k]<<" "<<a[j]<<endl;
                          }
                     }    
                      
                      else
                            cout<<a[k]<<" "<<a[i]<<" "<<a[j]<<endl;
                 }
                 else
                 {
                        if((a[j] < a[k]))
                        {
                            cout<<a[j]<<" ";
                            if(a[k] > a[i])
                                cout<<a[i]<<" "<<a[k]<<endl;
                            else
                                cout<<a[k]<<" "<<a[i]<<endl;
                        }
                        else
                            cout<<a[k]<<" "<<a[j]<<" "<<a[i]<<endl;
                 }
              }
           }
        }
     }
    }
