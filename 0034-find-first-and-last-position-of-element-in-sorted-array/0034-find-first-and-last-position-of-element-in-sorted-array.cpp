class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n=nums.size();        
        int low=0;
        int high=n-1;
        int firstindex = -1;
        int lastindex = -1;

        while(low<=high)
        {  
            int mid=(low+high)/2;

            if(nums[mid] == target)
            {
               firstindex=mid;
               high=mid-1;
            }
            else if(nums[mid] > target)
            {   
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }  
        }  
        
        low=0, high=n-1;
         while(low<=high)
        {  
            int mid=(low+high)/2;

            if(nums[mid] == target)
            {
               lastindex=mid;
               low=mid+1;
            }
            else if(nums[mid] > target)
            {   
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }  
        }  

            
        return {firstindex, lastindex};
    }
};