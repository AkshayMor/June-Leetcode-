class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0,two=nums.size()-1,cur=0;
        while(cur<=two){
            if(nums[cur]==0){
                swap(nums[zero++],nums[cur++]);
            }
            else if(nums[cur]==2){
                swap(nums[two--],nums[cur]);
            }
            else{
                cur++;
            }
        }
    }
};