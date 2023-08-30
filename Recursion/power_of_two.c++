/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int power(int n)
{
    //base case
    if(n == 0)
    {
        return 1;
    }
    
    //recursive relation
    return 2*power(n-1);
}

int main()
{
    int n;
    cin>>n;
    
    int ans = power(n);
    
    cout<<"ans -> "<<ans;
}
