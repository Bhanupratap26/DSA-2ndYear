a
b c
d e f
g h i j
k l m n o


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
   char alphabet = 'a';
   for(int i =1 ; i<=n ;i++)
   {
       for(int j =1 ; j<=i ; j++)
       {
           cout<<alphabet;
           cout<<" ";
           alphabet++;
       }
       cout<<"\n";
   }
    return 0;
}
