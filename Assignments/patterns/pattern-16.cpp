    1
   212
  32121
 4321234
      
      
      
      /******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n=4;
    for(int i = 1;i<=n;i++)
    {
        for(int j =(n-i);j>=1;j--)
        {
            cout<<" ";
        }
        
        for(int m = i;m>=1;m--)
        {
            cout<<m;
        }
        
        for(int x =2;x<=i;x++)
        {
            cout<<x;
        }
        
        cout<<endl;
        
        
    }

    return 0;
}
