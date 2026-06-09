class Solution 
{ 
    public: 
int l=0; 
int r=0; 
int len=0;
int freq=0;
int max_len=0; 
map <char,int> m; 

int characterReplacement(string s, int k) { 
    while(l<=r && r<s.size()){ 
        m[s[r]]++;
        len=r-l+1;
        freq=0;
        for(auto it : m){
            freq=max(it.second,freq);
        }
        if(len-freq>k){
            m[s[l]]--;
            l++;
            m[s[r]]--;
        
        }
        else{
          max_len= max(max_len,len);
          r++;
        }

        }
        return max_len;

        
    } 
    
 };
