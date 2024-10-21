class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return numFind(nums,k)-numFind(nums,k-1);
        
    }

    int numFind(vector<int>& nums, int goal) {
        int l=0,r=0,maxLen=0;
        int n = nums.size();
        int sum=0;
        if(goal<0)
        {
            return 0;
        }
        while(r<n)
        {
            sum+=nums[r]%2;
            while(sum>goal)
            {
                sum-=nums[l]%2;
                ++l;
            }
            maxLen+=(r-l+1);
            ++r;
        }
       return maxLen;
    }

};