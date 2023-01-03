class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n=skill.size();
        if(n==2) return skill[0]*skill[1];

        sort(skill.begin(), skill.end());

        int sum=skill[0]+skill[n-1];
        int product=skill[0]*skill[n-1];
        long long res=product;

        int left=1, right=n-2;
        while(left<right){
            if(skill[left]+skill[right] == sum){
                res+=skill[left]*skill[right];
            }
            else{
                res=-1;
                break;
            }
            left++;
            right--;
        }

        return res;
    }
};
