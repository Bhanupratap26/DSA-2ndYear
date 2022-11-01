https://www.hackerrank.com/challenges/plus-minus/submissions/code/295114220

#include <bits/stdc++.h>

using namespace std;

void plusMinus(vector<int> arr) {
    float count_positive = 0, count_negative = 0, count_zero = 0;
    for (int i = 0; i < arr.size(); i ++){
        if (arr[i] > 0){
            count_positive++;
        }
        else if (arr[i] == 0){
            count_zero++;
        }
        else {
            count_negative++;
        }
    }
    printf("%f\n%f\n%f", count_positive/arr.size(), count_negative/arr.size(), count_zero/arr.size());
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    plusMinus(arr);

    return 0;
}

