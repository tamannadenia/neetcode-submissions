class Solution {
public:

    
    map<int,int> mpp;
    int target=0;
    vector<vector<int>> ans;

    void two_sum(int i, int j,vector<int>& nums){
        target=-(nums[i]+nums[j]);
        if(mpp.find(target)!=mpp.end() && mpp[target]!=i  && mpp[target] != j){
            vector<int> sub;
            sub.push_back(target);
            sub.push_back(nums[i]);
            sub.push_back(nums[j]);
            sort(sub.begin(),sub.end());
            ans.push_back(sub);

        }
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        for(int j=0; j<nums.size(); j++){
            mpp[nums[j]]=j;
        }
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                two_sum(i,j,nums);
            }
        }
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;      
    }
};
