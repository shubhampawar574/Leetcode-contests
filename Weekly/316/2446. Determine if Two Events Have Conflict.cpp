class Solution {
public:
    int tomin(string str){
        int min = ((str[0]-'0')*10 + (str[1]-'0'))*60 + ((str[3]-'0')*10 + (str[4]-'0'));
        return min;
    }
    
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        
        vector<int> range1(2);
        vector<int> range2(2);
        
        range1[0]=tomin(event1[0]);
        range1[1]=tomin(event1[1]);
        if(range1[1]==0)
            range1[1]=1440;
        
        range2[0]=tomin(event2[0]);
        range2[1]=tomin(event2[1]);
        if(range2[1]==0)
            range2[1]=1440;
        

        //return true for intersection, else false
        // if(range2[0]>=range1[0] && range2[0]<=range1[1])
        //     return true;
        // if(range1[0]>=range2[0] && range1[0]<=range2[1])
        //     return true;
        
        // return false;

        //return false for non-intersection, else true
        if(range1[1]<range2[0] || range2[1]<range1[0])
            return false;
        return true;
    }
};
