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
    int mx = 10000;
    int mn = 10000;
    int a[n];
    for(int i =0 ;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j =0;j<n;j++)
    {
      //  mx = max(mx,a[j]);
        mn = min(mn,a[j]);
       // cout<<" max -> "<<mx<<endl;
        cout<<" min -> "<<mn<<endl;
    }
    

    return 0;
}
