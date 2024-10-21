class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return WithSum(nums,goal)-WithSum(nums,goal-1);
    }
    int WithSum(vector<int>& nums, int goal)
    {
         int l=0,r=0,maxLen=0;
        int n = nums.size();
        int sum=0;
        if(goal<0)
        {
            return 0;
        }
        while(r<n)
        {
            sum+=nums[r];
            while(sum>goal)
            {
                sum-=nums[l];
                ++l;
            }
            maxLen+=(r-l+1);
            ++r;
        }
       return maxLen;
    }
};