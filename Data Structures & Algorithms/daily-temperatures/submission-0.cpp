class Solution {
public:
vector<int> ans;
int a=0;
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        for(int i=0; i<temperatures.size(); i++){
            a=0;
            for(int j=i+1; j<temperatures.size(); j++){
                if(temperatures[j]>temperatures[i]){
                    ans.push_back(j-i);
                    break;
                }
            }
            if(ans.size()<i+1){
                ans.push_back(a);
            }

        }
        return ans;
        
        
    }
};
