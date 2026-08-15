class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        //int n=intervals.size(); 
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> p;
        p.push_back(intervals[0]);

        if(intervals.empty()){   return {};  }
    
        for(int i=1;i<intervals.size();i++)
        {
            if(p.back()[1] >= intervals[i][0])
            {
                p.back()[1] = max(p.back()[1], intervals[i][1]);
            }
            else
            {
                p.push_back(intervals[i]);
            }
          
        }

        return p;
    }
};