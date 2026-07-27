void f(int curr, int x, vector<int> &ans) {
    if(curr == x) {
        ans.push_back(curr);
        return;
    }
    ans.push_back(curr);
    f(curr + 1, x, ans);
}
​
vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> ans;
    f(1, x, ans);
    return ans;
}