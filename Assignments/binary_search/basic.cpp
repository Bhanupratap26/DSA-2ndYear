/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int binarysearch(int arr[] , int size , int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + ((e-s)/2);
    while(s<=e)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        if(arr[mid]<key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid-1;
        }
        
        mid = (s+e)/2;
        
    }
    
    return -1;
    
}

int main()
{
    int even[6] = {1,2,3,4,5,6};
    int odd[5] = {3,6,10,11,25};
    
    int index = binarysearch(odd , 5 , 21);
    
    cout<<"index - "<<index<<endl;

    return 0;
}
