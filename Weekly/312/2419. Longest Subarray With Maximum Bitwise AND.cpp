class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        //first find max number in array
        int maxi=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>maxi) maxi=nums[i];
        }

        //now find longest length of that max element
        int res=1, cnt=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==maxi) cnt++;
            else{
                if(cnt>res) res=cnt;
                cnt=0;
            }
        }
        if(cnt>res) res=cnt;
        return res;
    }
};
