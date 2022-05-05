// Max Number of K-Sum Pairs:
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) 
    {
        //USING TWO POINTER:
//         sort(nums.begin() , nums.end());
//         int ans = 0;
//         int n = nums.size();
//         int i =0 , j = n-1;
        
//         while(i<j)
//         {
//             if (nums[i] + nums [j] < k)
//             {
//                 i += 1;
//             }
//             else if (nums[i] + nums [j] > k)
//             {
//                 j -= 1;
//             }
//             else
//             {
//                 ans += 1;
//                 i += 1;
//                 j -= 1;
//             }
//         }
//         return ans;
        
        
        
        
        //USING HASHMAP:
        unordered_map<int,int>mp;
        for (int i =0 ;i<nums.size() ;i++)
        {
            mp[nums[i]]++;
        }
        int ans = 0;
        for (int i = 0 ;i<nums.size();i++)
        {
            if (mp.find(nums[i]) != mp.end() and mp[nums[i]] > 0)
            {
                mp[nums[i]] -=1;
                if (mp.find(k-nums[i]) != mp.end() and mp[k-nums[i]] > 0)
                {
                    ans += 1;
                    mp[k-nums[i]] -=1;
                }
                else
                {
                    mp[nums[i]] += 1;
                }
            }
        }
        return ans;
        
