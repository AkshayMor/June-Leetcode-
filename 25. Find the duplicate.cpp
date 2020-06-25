class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       
        unordered_set<int>hash;
        for(int i=0;i<nums.size();i++){
            if(hash.find(nums[i])!=hash.end()) return nums[i];
            else hash.insert(nums[i]);
        }
    return 0;
    }
};