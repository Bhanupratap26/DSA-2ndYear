$$$$$
 $$$$
  $$$
   $$
    $
    
    /******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n = 5;
   for(int i = n ; i>=0; i--)
   {
       for(int k = (n-i); k>0;k--)
       {
           cout<<" ";
       }
       for(int j = i;j>0;j--)
           {
               cout<<"#";
           }
       cout<<"\n";
   }

    return 0;
}
