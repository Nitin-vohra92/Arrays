/* Sample input: 1 2 2 3 4
Sample output: 2 //2 is occurring twice.

 Sample input: 1 2 3 4
 Sample output: -1 //every element is unique */

int FindDuplicate(int arr[], int size)
{   
    map<int,int>mp; //To store the frequency of elements.
    for(int i=0;i<size;i++)
    {
        mp[arr[i]]++;
    }
    for(int i=0;i<size;i++)
    {
        if(mp[arr[i]] > 1)
        {
            return arr[i];
        }
    }
    return -1; //if no such element exists.
  }
