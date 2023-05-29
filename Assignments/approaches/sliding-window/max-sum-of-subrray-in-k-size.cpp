
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v = {1,2,3,4,5,6,7,8,9,10,11,12};
    int k = 4;
    int i =0,j=0;
    int n = v.size();
    int sum = 0,ans = INT_MIN;
    
    while(j<n)
    {
        sum+=v[j];
        
        if(j-i+1<k)
        {
            j++;
        }
        
        else if(j-i+1 == k)
        {
            ans = max(ans,sum);
            sum-=v[i];
            i++;
            j++;
        }
        
    }
    
    cout<<ans;

    return 0;
}
