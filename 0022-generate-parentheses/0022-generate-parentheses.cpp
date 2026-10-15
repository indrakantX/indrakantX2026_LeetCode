class Solution {
public:
    void fun(int open, int close, int n, string &s, vector<string> &ans)
    {
       if(open == n && close == n)
       {
         ans.push_back(s);
         return;
       }

       if(open < n)
       {
         s.push_back('(');
         fun(open + 1, close, n, s, ans);
         s.pop_back();
       }

       if(close < open)
       {
         s.push_back(')');
         fun(open, close + 1, n, s, ans);
         s.pop_back();
       }
       return;
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s = "";
        fun(0, 0, n, s, ans);
        return ans;
    }
};