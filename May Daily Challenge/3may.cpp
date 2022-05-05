//Shortest Unsorted Continuous Subarray
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) 
    {
        SORTING:
        vector<int>res;
        res = nums;
        sort(res.begin(),res.end());
        
        int i = 0 , j = 0;
        int n = nums.size();
        int m = res.size();
        int f_index = 0;
        
        while (i < n and j < m)
        {
            if (nums[i] != res[j])
            {
                f_index = i;
                break;
            }
            i += 1;
            j += 1;
        }
        //cout<<f_index<<endl;
        
        i = n-1;
        j = m-1;
        int l_index = 0;
        
        while (i >=0 and j>= 0)
        {
            if (nums[i] != res[j])
            {
                l_index = i;
                break;
            }
            i -= 1;
            j -= 1;
        }
        //cout<<l_index<<endl;
        
        if (l_index == 0 and f_index == 0)
        {
            return 0;
        }
        return (l_index - f_index + 1);
    }
};

