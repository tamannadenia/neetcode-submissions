class Solution {
public:
 int left=0;
 int right=1;
 int water=0;
 int m_water =0;
    int maxArea(vector<int>& heights) {
        for(int i=0; i<heights.size(); i++){
            for(int j=i+1; j<heights.size(); j++){
                water=min(heights[i],heights[j])*(j-i);
                m_water=max(m_water,water);
            }
        }
        return m_water;
        
    }
};
