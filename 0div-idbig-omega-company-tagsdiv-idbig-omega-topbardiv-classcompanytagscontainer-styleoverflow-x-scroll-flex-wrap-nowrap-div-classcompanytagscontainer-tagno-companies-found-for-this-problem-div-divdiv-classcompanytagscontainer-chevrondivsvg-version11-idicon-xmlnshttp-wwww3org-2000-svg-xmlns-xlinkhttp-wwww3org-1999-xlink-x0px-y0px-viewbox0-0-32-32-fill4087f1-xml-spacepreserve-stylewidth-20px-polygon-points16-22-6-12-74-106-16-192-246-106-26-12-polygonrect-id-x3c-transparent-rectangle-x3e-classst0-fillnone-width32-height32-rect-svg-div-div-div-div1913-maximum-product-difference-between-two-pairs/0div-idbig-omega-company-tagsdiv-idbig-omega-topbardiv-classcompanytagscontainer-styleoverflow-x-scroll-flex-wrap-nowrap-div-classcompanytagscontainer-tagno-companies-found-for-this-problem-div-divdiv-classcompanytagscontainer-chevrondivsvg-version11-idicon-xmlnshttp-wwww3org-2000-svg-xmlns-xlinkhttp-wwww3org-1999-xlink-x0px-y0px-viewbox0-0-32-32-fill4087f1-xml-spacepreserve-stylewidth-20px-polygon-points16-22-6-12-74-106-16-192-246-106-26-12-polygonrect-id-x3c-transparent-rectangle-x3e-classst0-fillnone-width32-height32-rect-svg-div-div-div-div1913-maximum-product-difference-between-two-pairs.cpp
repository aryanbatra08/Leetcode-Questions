class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max = nums.size()-1;
        int sec_max = max-1;
        int min = 0;
        int sec_min = 1;
        return (nums[max]*nums[sec_max])-(nums[min]*nums[sec_min]);
       
        
    }  
};