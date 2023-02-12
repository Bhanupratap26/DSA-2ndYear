/*
	Count Sort Algorithm
	**Time Complexity: O(n)
	**Space Complexity: O(max_number-min_number)
*/

#include <bits/stdc++.h>
using namespace std;

//a function that will print the vector passed to it, elements seprated by space
void printVector(vector<int>A)
{
	//traverse all the element and print them
	for(int i=0;i<A.size();i++)
	{
		cout<<A[i]<<" ";	
	}
	cout<<"\n";
}

//the vector A will be sorted inplace and that's why passed with refrence
void sort(vector<int>&A)
{
	//finding max element
	int max = *max_element(A.begin(), A.end());
	
	//creating count array with zero initailization
	vector<int> count(max+1, 0);
	
	//incrementing the corresponding index in the count array
	for (int i = 0; i < A.size(); i++) {
		count[A[i]]++;
	}
	
	int i = 0; //counter for count array
	int j = 0; //counter for given array
	
	while(i <= max) {
		if (count[i] > 0) {
			A[j] = i;
			j++;
			count[i]--;
		}
		else {
			i++;
		}
	}
}

int main() {
	vector<int>A= {6,1,2,3,4,6,1,5,3,4,8};
	// your code goes here
	sort(A);
	cout<<"sorted vector: ";
	printVector(A);
	
	return 0;
}
