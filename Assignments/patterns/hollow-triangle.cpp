* * * *
*     *
*     *
* * * *


/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n =4;
   for(int i =1;i<=4;i++)
   {
       for(int j =1;j<=4;j++)
       {
           if(i==1||i==n||j==1||j==n)
           {
               cout<<"*"<<" ";
           }
           else
           {
               cout<<" "<<" ";
           }
       }
       
       cout<<endl;
   }
    return 0;
}


