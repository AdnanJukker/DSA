class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int>left,right;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                left.push_back(arr[i]);
            }
            else
            {
                right.push_back(arr[i]);
            }
        }
        left.insert(left.end(), right.begin(), right.end());
        arr =left;
    }
};
