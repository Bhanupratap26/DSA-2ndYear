https://www.hackerrank.com/challenges/diagonal-difference/submissions/code/294963315


#include <iostream>

using namespace std;
 
int main()
{
    int SIZE,t;
    cin>>SIZE;
  int matrix[SIZE][SIZE];
  int sum_left =0, sum_right = 0;
 

  //Taking input into the Matrix and 
  //Adding if they are diagonal elements
  for(int i=0; i<SIZE ; i++){
    for(int j=0; j<SIZE; j++){
      cin >> matrix[i][j];
      if(i==j)
        sum_left += matrix[i][j];
      if((i+j) == SIZE-1)
        sum_right += matrix[i][j];
    }
  }
   t=abs(sum_left-sum_right);
  cout << t<< endl;


  return 0;
}
