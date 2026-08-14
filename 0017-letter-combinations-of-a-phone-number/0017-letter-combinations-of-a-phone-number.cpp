class Solution {
public:
    
    void fun(string &digits, int n, int idx, string &dairy, vector<string> &ans, unordered_map<char, string> &f)
    {
        if(idx == n)
        {
           ans.push_back(dairy);
           return;
        }

        string choice = f[digits[idx]];

        for(int i=0;i<choice.size();i++)
        {
            dairy.push_back(choice[i]);
            fun(digits, n, idx + 1, dairy, ans, f);
            dairy.pop_back();
        }
        return;
    }
    
    vector<string> letterCombinations(string digits) {
        
        int n = digits.size();
        unordered_map<char, string> f;
        f['2'] = "abc";
        f['3'] = "def";
        f['4'] = "ghi";
        f['5'] = "jkl";
        f['6'] = "mno";
        f['7'] = "pqrs";
        f['8'] = "tuv";
        f['9'] = "wxyz";
        
        string dairy = "";
        vector<string> ans;

        fun(digits, n, 0, dairy, ans, f);
        return ans;
    }
};