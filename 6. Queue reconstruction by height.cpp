class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>>rearrange;
        sort(people.begin(),people.end(),[](const vector<int>a, const vector<int>b){
            if(a[0]!=b[0]) return a[0]>b[0];
            else return a[1]<b[1];});
        for(auto person:people)
            rearrange.insert(rearrange.begin()+person[1],person);
        return rearrange;
    }
};