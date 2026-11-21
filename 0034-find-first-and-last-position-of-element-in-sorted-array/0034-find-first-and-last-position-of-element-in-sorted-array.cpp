class Solution {
public:
    int firstOccur(vector<int> &nums,int target){
        int low = 0; 
        int high = nums.size() - 1;
        int res1 = -1;

        while(low <= high){
            int mid = (low+high) / 2;
            if(nums[mid] < target){
                low = mid + 1;
            }else if(nums[mid] > target){
                high = mid - 1;
            }else{
                res1 = mid;
                high = mid - 1;
            }
        }
        return res1;
    }
    int lastOccur(vector<int> &nums,int target){
        int low = 0; 
        int high = nums.size() - 1;
        int res2 = -1;

        while(low <= high){
            int mid = (low+high) / 2;
            if(nums[mid] < target){
                low = mid + 1;
            }else if(nums[mid] > target){
                high = mid - 1;
            }else{
                res2 = mid;
                low = mid + 1;
            }
        }
        return res2;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int res1,res2;
        res1 = firstOccur(nums,target);
        res2 = lastOccur(nums,target);

        return {res1, res2}; 
    }
};