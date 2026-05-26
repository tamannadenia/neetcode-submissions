

class Solution {
    public:
        vector<int> twoSum(vector<int>& numbers, int target) {
            map<int,int> mp;
            vector<int> sol;
            for(int i=0; i<numbers.size(); i++){
                mp[numbers[i]]=i;
            }
            for( int i=0; i<numbers.size(); i++){
                if(mp.find(target-numbers[i]) != mp.end()){
                    sol.push_back(i+1);
                    sol.push_back(mp[target-numbers[i]]+1);
                                sort(sol.begin(),sol.end());
            return sol;
                }
            }
            
        }
    };
    