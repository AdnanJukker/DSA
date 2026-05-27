class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
      sort(nums.begin(),nums.end());
      int n = nums.size();
      double diff = INFINITY;  
      int res = 0;

      for(int i = 0;i<n-2;i++)
      {
        int left = i+1;
        int right = n-1; 

        while(left < right)
        {
            int total = nums[i] + nums[left] + nums[right];
            int d = abs(target - total);

            if(diff > d)
            {
                diff =d;
                res = total;
            }
            if(target == total)
            {
                return res;
            }
            if(target < total)
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
