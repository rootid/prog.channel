
 vector<string> wordBreak(string s, unordered_set<string> &dict) {
        string path;
        vector<string> result;

        // skip unbreakable words; otherwise TLE
        if (!isWordBreakable(s, dict))   return result;

        wordBreakHelper(s, 0, dict, path, result);
        return result;
    }

void wordBreakHelper(string &s, int k, unordered_set<string> &dict, string path, vector<string> &result) {
    if (k >= s.size()) {
        result.push_back(path.substr(0, path.size() - 1));
        return;
    }
    for (int i = k; i < s.size(); i++) {  //For each step k there are (s.size() - k) candidates
        auto str = s.substr(k, i - k + 1);
        if (dict.find(str) != dict.end()) {
            wordBreakHelper(s, i + 1, dict, path + str + " ", result);
        }
    }
}
