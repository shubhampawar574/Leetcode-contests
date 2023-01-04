class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int cnt=0, n;
        for(int i=0; i<nums.size(); i++){
            n=nums[i];
            for(int j=i; j<nums.size(); j++){
                n=__gcd(n, nums[j]);
                if(n==k) cnt++;
            }
        }

        return cnt;
    }
};
