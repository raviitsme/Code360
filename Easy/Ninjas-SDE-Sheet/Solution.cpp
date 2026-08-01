bool f(int left, int right, string &str) {
    if(left >= right) {
        return true;
    }

    if(str[left] != str[right]) {
        return false;
    }

    return f(left + 1, right - 1, str);
}

bool isPalindrome(string& str) {
    // Write your code here.
    int n = str.size();
    return f(0, n - 1, str);
}
