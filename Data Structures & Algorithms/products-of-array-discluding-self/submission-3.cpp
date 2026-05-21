class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product =1;
        bool has_zero=false;
        bool all_zero=true;
        int no_of_zero=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                product=product*nums[i];
                all_zero=false;
            }else{
                has_zero=true;
                no_of_zero++;
            }

        }
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(all_zero || no_of_zero>1){
                ans.push_back(0);
            }
            else if(has_zero && nums[i]!=0){
                ans.push_back(0);
            }
            else if(has_zero && nums[i]==0){
                ans.push_back(product);
            }else{
                ans.push_back(product/nums[i]);
            }
        }
        return ans;

    }
};
