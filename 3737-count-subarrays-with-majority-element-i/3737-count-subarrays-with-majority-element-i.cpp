class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        
        int n = nums.size();
        int result = 0;

        for(int i=0;i<n;i++)
        {
            int targetcnt = 0;
            for(int j=i;j<n;j++)
            {
                if(nums[j] == target)
                {
                    targetcnt++;
                }

                int len = j - i + 1;
                if(2 * targetcnt > len)
                {
                    result++;
                }
            }
        }
        return result;
    }
};