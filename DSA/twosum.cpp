//  Given an array of integers arr[] and an integer target.

// 1st variant: Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.

// 2nd variant: Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.

#include <bits/stdc++.h>
using namespace std;

// string twoSum(int n, vector<int> &arr, int target) {
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] + arr[j] == target) return "YES";
//         }
//     }
//     return "NO";
// }

// int main()
// {
//     int n = 5;
//     vector<int> arr = {2, 6, 5, 8, 11};
//     int target = 14;
//     string ans = twoSum(n, arr, target);
//     cout << "This is the answer for variant 1: " << ans << endl;
//     return 0;
// }

pair<int,int> twoSum(vector<int> &A, int target) {
   pair<int, int> indicesOfSum;
   for (int i = 0; i < A.size(); i++) {
       for (int j = i + 1; j < A.size(); j++) {
           if(A[i] + A[j] == target) {
               return {i, j};
           }
       }
   }
}