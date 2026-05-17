class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> m;
        for(int i=0;i<s.size(); i++){
            m[s[i]]++;
        }
        for(int i=0; i<t.size(); i++){
            if(m[t[i]]<=0){
                return false;
            }
            else if(m[t[i]]>1){
                m[t[i]]--;
            }
            else{
                m.erase(t[i]);
            }
        }
        if(m.size()>=1){
            return false;
        }

        return true;
        
    }
};
