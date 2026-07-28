#include<bits/stdc++.h>
using namespace std;
vector<int> generateFibonacciNumbers(int n) {
    if (n <= 0) return {};
    if (n == 1) return {0};
    if (n == 2) return {0, 1};
    
    int prev1 = 1;
    int prev2 = 0;
    int curr;
    vector<int> ans;
    ans.push_back(0);
    ans.push_back(1);
    for(int i = 2; i < n; i++) {
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
        ans.push_back(curr);
    }
​
    return ans;
}