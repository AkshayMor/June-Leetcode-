class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        if(nums.empty()){
            return {};
        }
        int size = nums.size();
        vector<int> dp(size,0);
        vector<int> last(size,-1);
        vector<int> result;
        int max = -1 , start =0;
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i < size;++i){
            for(int j = i -1 ; j >=0; j--){
                if(( nums[i]% nums[j])==0){
                    if(dp[i] < 1+dp[j]){
                        dp[i] = 1+dp[j];
                        last[i] = j;
                    }
                }
            }
        }
        for(int i = 0; i <size; ++i){
            if(max < dp[i]){
                max=dp[i];
                start=i;
            }
        }
        while(last[start]!=-1){
            result.push_back(nums[start]);
            start = last[start];
        }
        result.push_back(nums[start]);
        return result;
    }
};
Copyright © 2020 LeetCodeHelp Center  |  Jobs  |  Bug Bounty  |  Terms  |  Privacy Policy      United States
