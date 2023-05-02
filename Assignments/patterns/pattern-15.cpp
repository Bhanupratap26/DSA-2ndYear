   *
  * *
 * * *
* * * *
 * * *
  * *
   *
   
     
     
     /******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    // int m = 1;
    int n = 5;
    for(int i =1 ; i<=(2*n-1) ; i++)
    {
        if(i<=n)
        {
            for(int m =0;m<n-i;m++)
            {
                cout<<" ";
            }
            for(int j =1;j<=i;j++)
            {
                cout<<"* ";
            }
        
        }
        else
        {
            
            for(int m =0;m<(i-n);m++)
            {
                cout<<" ";
            }
            for(int j =1;j<=(2*n-i);j++)
            {
                cout<<"* ";
            }
        }
        
        cout<<endl;
        
    }

    return 0;
}

   
