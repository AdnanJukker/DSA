class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> res;


        for (int i=0;i<n-2;i++)
        {
            //skip duplicates 
            if(i>0 and nums[i] == nums[i-1]){
                continue;
            }
            int left = i+1;
            int right = n-1;

            while(left < right)
            {
                int s = nums[i] + nums[left] + nums[right];
                if(s == 0)
                {
                    res.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    
                    //skip duplicates
                    while(left<n and nums[left] == nums[left-1])
                    {
                        left++;
                    }
                    //skips duplicates
                    while(right>n and nums[right]==nums[right+1])
                    {
                        right--;
                    }
                }
                else if(s<0)
                {
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return res;
    }
};
