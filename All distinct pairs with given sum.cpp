class Solution {
  public:
    vector<vector<int>> distinctPairs(vector<int> &arr, int target) {
        // Code here
        sort(arr.begin(),arr.end());
        int n =arr.size();
        int i=0;
        int j=n-1;
        vector<vector<int>> res;
       while(i<j)
       {
            int sum = arr[i]+arr[j];
            if(sum == target){
            res.push_back({arr[i], arr[j]});
            i++;
            j--;
        
            while(i<j && arr[i] == arr[i-1])
            {
                i++;
            }
            while(i<j && arr[j] == arr[j+1])
            {
                j--;
            }
        }
        else if(sum < target)
        {
            i++;
        }
        else{
            j--;
        }
      }
       return res;
    }
};
