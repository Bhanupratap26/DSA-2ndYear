1
2 3
4 5 6 
7 8 9 10

  
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
   int count = 1;
   for(int i =1 ; i<=n ;i++)
   {
       for(int j =1 ; j<=i ; j++)
       {
           cout<<count;
           cout<<" ";
           count++;
       }
       cout<<"\n";
   }
    return 0;
}
