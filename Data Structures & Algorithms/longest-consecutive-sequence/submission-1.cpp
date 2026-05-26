


class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    if(nums.size()==0){
        return 0;
    }
            int l = 0;
            int r = 0;
            int len = r - l + 1;
            int dou = 0;
            int dou_ind = 0;
    ;            int ans = max(0, len);
    while (l <= r && r < nums.size()-1) {
        if (nums[r + 1] - nums[r] == 1) {
            r++;
            if (dou_ind <= r && dou_ind >= l) {
                len = r - l +1- dou;
            }
            else {
                len = r - l + 1;
            }
            ans = max(ans, len);
        }
        else if (nums[r + 1] == nums[r]) {
            dou++;
            dou_ind = r;
            r++;
            if (dou_ind <= r && dou_ind >= l) {
                len = r - l +1 -dou;
            }
            else {
                len = r - l + 1;
            }
            ans = max(ans, len);
        }
        else {
            r++;
            l=r;
            len = r - l + 1;
            ans = max(ans, len);
            dou=0;
            dou_ind=0;
        }
    }
    return ans;

}
    };

