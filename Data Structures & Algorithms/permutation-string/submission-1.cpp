class Solution {
public:
int l=0;
int r=0;
int len=0;
map<char,int> m;
bool check(int l, int r,string s1, string s2 ){
    while(l<=r && r<s2.size()){
        if(m.find(s2[r])!=m.end() && m[s2[r]]>0){
            m[s2[r]]--;
            if(r-l+1<s1.size()){
                r++;
            }
            else{
                return true;
            }
        }
        else{
        return false;
        }
    }
    return false;
}
    bool checkInclusion(string s1, string s2) {
        for(int i=0; i<s1.size(); i++){
            m[s1[i]]++;
        }
        for(int i=0; i<s2.size(); i++){
            if(m.find(s2[i])!=m.end()){
                l=i;
                r=i;
                if(check(l,r,s1,s2)) return true;
                else{
                    m.clear();
                    for(int j=0; j<s1.size(); j++){
                        m[s1[j]]++;
                        }
                    
                }
            }
        }
        return false;
        
        
        
    }
};
