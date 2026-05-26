class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
    vector<int> neg;
    vector<int> pos;

    for(int i=0;i<n;i++)
    {
        if(nums[i]<=0)
        {
            neg.push_back(nums[i]);
        }else{
            pos.push_back(nums[i]);
        }
    }
    // if all the positives
        if(neg.size() == 0)
        {
            for(int i=0;i<n;i++)
            {
                nums[i]= nums[i]*nums[i];
            }
            return nums;
        }      
    
    //if all the negatives
        if(pos.size() == 0)
        {
            for(int i=0;i<n;i++)
            {
                nums[i]= nums[i]*nums[i];
            }
                reverse(nums.begin(),nums.end());
            return nums;
        }
    int i = 0,j = 0;
    int id = 0;
    int o = neg.size();
    int m = pos.size();
    vector<int> res(o+m);

    for(int i=0;i<o;i++)
    {
        neg[i]=neg[i]*neg[i];
    }
        reverse(neg.begin(),neg.end());

    for (int i=0;i<m;i++)
    {
        pos[i]=pos[i]*pos[i];
    }

    while(i<o && j<m)
    {
        if(neg[i]<=pos[j])
        {
            res[id] = neg[i];
            id++;
            i++;
        }else{
            res[id] = pos[j];
            id++;
            j++;
        }
    }
    while(i<o)
    {
        res[id] = neg[i];
        id++;
        i++;
    }
    while(j<m)
    {
        res[id] = pos[j];
        id++;
        j++;
    }
    return res;
}
    
};
