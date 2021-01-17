class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ret = 0;
        int tempArray[26] = {0};
        
        for (int i = 0; i < allowed.size(); ++i) {
            tempArray[allowed[i] - 'a'] = 1;    
        }
        
        for (int i = 0; i < words.size(); ++i) {
            bool isConsistent = true;
            string &word = words[i];
            
            for (int j = 0; j < word.size(); ++j) {
                if (tempArray[word[j] - 'a'] == 0) {
                    isConsistent = false;
                    break;
                }
            }
            
            if (isConsistent) {
                ret++;
            }
        }
        
        return ret;
    }
};
