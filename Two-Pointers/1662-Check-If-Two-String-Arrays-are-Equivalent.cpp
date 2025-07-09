class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1;
        string str2;

        for (auto val : word1) str1 += val;
        for (auto val : word2) str2 += val;

        return (str1 == str2) ? true : false;
    }
};