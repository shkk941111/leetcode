class Solution {
public:
    bool isPalindrome(long x) {
        string str = to_string(x);
        int i = 0;
        int n = str.size() - 1;
        while(i<n)
        {
            if(str[i] != str[n])
            {
                return false;
            }
            n--;
            i++;
        }
        return true;
    }
};
