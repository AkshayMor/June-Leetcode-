class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n = costs.size();
        vector<pair<int,int>>cmp;
        for(int i=0;i<n;i++) cmp.push_back(make_pair(costs[i][0]-costs[i][1],i));
        sort(cmp.begin(),cmp.end());
        int cost = 0;
        for(int i=0,j=n-1;i<j;i++,j--){
            cost+=(costs[cmp[i].second][0]+costs[cmp[j].second][1]);
        }
        return cost;
    }
};