class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int max_c = 0 ;
        for(int i = 0 ;i<n;i++)
        {
            if(nums[i]==1)
            {
                count++;
                max_c = max(max_c, count);
            }
            else
            {
                count = 0 ;
            }
        }return max_c;
    }
};


   