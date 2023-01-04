class Solution {
public:
    // static bool comp(pair<int, string> p1, pair<int, string> p2){
    //     return p1.first>p2.first;
    // }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> vec(names.size());

        for(int i=0; i<names.size(); i++){
            vec[i].first=heights[i];
            vec[i].second=names[i];
        }

        // sort(vec.begin(), vec.end(), comp);

        // vector<string> ans;
        // for(auto i: vec){
        //     ans.push_back(i.second);
        // }

         sort(vec.rbegin(), vec.rend());

        vector<string> ans;
        for(auto i: vec){
            ans.push_back(i.second);
        }

        return ans;
    }
};
