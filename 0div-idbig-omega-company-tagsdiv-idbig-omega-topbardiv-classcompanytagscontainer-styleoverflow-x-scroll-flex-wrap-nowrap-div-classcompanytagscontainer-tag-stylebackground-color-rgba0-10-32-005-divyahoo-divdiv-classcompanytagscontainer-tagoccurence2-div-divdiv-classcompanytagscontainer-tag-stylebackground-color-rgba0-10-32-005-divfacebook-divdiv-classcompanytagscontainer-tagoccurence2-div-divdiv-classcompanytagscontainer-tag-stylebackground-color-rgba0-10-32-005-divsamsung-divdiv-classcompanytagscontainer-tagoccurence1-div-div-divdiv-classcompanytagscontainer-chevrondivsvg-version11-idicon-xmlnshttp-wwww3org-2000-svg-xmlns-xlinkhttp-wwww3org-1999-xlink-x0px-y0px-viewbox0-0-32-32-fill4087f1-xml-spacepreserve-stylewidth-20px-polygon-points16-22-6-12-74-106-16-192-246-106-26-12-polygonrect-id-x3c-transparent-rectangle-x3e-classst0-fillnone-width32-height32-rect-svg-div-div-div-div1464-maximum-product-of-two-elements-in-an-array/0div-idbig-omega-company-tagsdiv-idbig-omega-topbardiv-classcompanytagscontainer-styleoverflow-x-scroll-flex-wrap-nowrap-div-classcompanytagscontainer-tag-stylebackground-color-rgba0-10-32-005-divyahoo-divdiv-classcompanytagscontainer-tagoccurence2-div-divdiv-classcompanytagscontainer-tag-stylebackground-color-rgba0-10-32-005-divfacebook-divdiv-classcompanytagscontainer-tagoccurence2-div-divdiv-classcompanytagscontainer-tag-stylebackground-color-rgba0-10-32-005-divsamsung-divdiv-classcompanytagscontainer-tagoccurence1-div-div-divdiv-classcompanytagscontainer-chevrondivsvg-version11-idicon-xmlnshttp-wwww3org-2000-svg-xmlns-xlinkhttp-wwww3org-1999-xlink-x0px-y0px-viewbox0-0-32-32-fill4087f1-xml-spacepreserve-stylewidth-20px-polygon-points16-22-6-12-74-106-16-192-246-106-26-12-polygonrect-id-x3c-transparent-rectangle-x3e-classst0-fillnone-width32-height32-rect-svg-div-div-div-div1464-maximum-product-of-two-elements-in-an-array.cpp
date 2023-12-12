class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int max = n-1;
        int sec_max = n-2;
   
        sort(nums.begin(),nums.end());
        return (nums[max]-1)*(nums[sec_max]-1);
        
    }
};