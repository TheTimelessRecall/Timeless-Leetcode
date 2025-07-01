class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector <string> result;
        for (int  i = 0 ; i <  words.size() ; i++){
            for (int  j =  0; j < words.size() ; j++){
                if (words[i].find(words[j]) != string::npos && i != j){
                    if (std::find(result.begin(), result.end(), words[j]) == result.end()){
                          result.push_back(words[j]);
                    }
                }
            }
        }
        return result;
    }
};