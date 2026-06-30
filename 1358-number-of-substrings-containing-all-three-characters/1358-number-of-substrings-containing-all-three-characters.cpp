class Solution {
public:
    int numberOfSubstrings(string s) {
    
    int n = s.length();
    vector<int> ans(3, -1);
    int cnt = 0;
    int mini = INT_MAX;
    for(int i=0;i<n;i++)
    {   ans[s[i] - 'a'] = i;
        if (ans[0] != -1 && ans[1] != -1 && ans[2] != -1)
        {
           mini = min({ans[0], ans[1], ans[2]});
           cnt += (mini + 1);
        }
    }
    return cnt;   
    }
};