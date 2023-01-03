class Solution {
public:
    bool isCircularSentence(string sentence) {
        if(sentence[0]!=sentence[sentence.size()-1]) return false;

        bool res=true;
        for(int i=0; i<sentence.size(); i++){
            if(sentence[i]==' '){
                if(sentence[i-1]!=sentence[i+1]){
                    res=false;
                    break;
                }
            }
        }

        return res;
    }
};
