class Solution {
public:
    int i=0;
    int j=0;
    map<int,int> mpp;
    int size=0;
    int max_size=0;
    int lengthOfLongestSubstring(string s) {
        while(i<=j && j<s.size()){
            if(mpp.find(s[j])==mpp.end()){
                mpp[s[j]]=j;
                size=j-i+1;
                max_size=max(max_size,size);
                j++;
            }else{
                mpp.erase(s[i]);
                i++;
            }
        }
        return max_size;
        
    }
};
