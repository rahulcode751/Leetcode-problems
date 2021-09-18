class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int r = items.size();
        int count = 0;

        if(ruleKey == "type"){
            for(int i=0; i<r; i++){
                if(items[i][0] == ruleValue){
                    count++;
                }
            }
            return count;
        }
        else if(ruleKey == "color"){
            for(int i=0; i<r; i++){
                if(items[i][1] == ruleValue){
                    count++;
                }
            }
            return count;
        }
        else if(ruleKey == "name"){
             for(int i=0; i<r; i++){
                if(items[i][2] == ruleValue){
                    count++;
                }
             }
            return count;
        }
        return 0;
    }
};
