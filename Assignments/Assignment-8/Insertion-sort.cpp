
void insertion_sort(int n , vector<int>&arr)
{   
    int j; 
    for(int i =1; i<n; i++)
   {

      int temp = arr[i];

    for( j = (i-1); j>=0 ; j--)
    {
        if(arr[j] > temp)
        {
            //shift
            arr[j+1] = arr[j];
        }
        else{
            break;
        }
    }
    arr[j+1] = temp;
 

   }
}
