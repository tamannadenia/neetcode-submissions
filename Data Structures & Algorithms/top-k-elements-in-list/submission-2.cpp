class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        map<int,vector<int>> m;
        int rep=0;
        for(int i=0; i<nums.size(); i++){
            if(i==0){
                rep++;
            }
            else if(nums[i]==nums[i-1]){
                rep++;
            }
            else{
                m[rep].push_back(nums[i-1]);
                rep=1;
            }

        }
        m[rep].push_back(nums[nums.size()-1]);
        vector<int> ans;
        int fre=k;
        for(auto it=m.rbegin(); it!=m.rend(); it++){
            if(fre>0){
                for(auto i:it->second){
                    ans.push_back(i);
                    fre--;
                }
            }

        }
        return ans;
    }
};
