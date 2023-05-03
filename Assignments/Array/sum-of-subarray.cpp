/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n = 3;
    int sum = 0;
    
    int a[n];
    for(int i =0 ;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i =0;i<n;i++)
    {
         cout<<i<<"th subarray"<<endl;
         int curr = 0;
      for(int j =i;j<n;j++)
      {
          curr+=a[j];
         cout<<curr<<" ";
          sum+=curr;
      }
      cout<<endl;
    }
     cout<<sum;
    

    return 0;
}
