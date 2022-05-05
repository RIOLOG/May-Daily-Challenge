//Sort Array By Parity
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        //INPLACE:
        int res = 0;
        for (int i = 0 ;i < nums.size() ;i++)
        {
            if (nums[i] % 2 == 0)
            {
                swap(nums[i],nums[res]);
                res += 1;
            }
        }
        return nums;
    }
};
