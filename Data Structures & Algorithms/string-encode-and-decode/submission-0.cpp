class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        string p="";
        for(int j=0; j<strs.size(); j++){
            p=strs[j];
            for(int i=0; i<p.size(); i++){
            s+=to_string(int(p[i]));
            s+="#";
            }
            s+="*";        
        }
        return s;

        
            
    }
    
    vector<string> decode(string s) {
        vector<string> ans;
        string sol="";
        string asc="";
        for(int i=0; i<s.size(); i++){
            if(s[i]=='#'){
                 sol+=char(stoi(asc));
                asc="";
                
            }
            else if(s[i]=='*'){
                ans.push_back(sol);
                sol="";

            }
            else{
               asc+=s[i];
            }
        }
        return ans;
    }
};
