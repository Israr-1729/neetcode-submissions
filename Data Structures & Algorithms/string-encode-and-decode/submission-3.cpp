class Solution {
public:

    string encode(vector<string>& strs) {
        string res;

        for (auto &s : strs) {
            int len = s.size();

            // pad to 4 digits (or more if needed)
            string lenStr = to_string(len);
            while (lenStr.size() < 4) lenStr = "0" + lenStr;

            res += lenStr + s;
        }

        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;

        while (i < (int)s.size()) {
            int len = stoi(s.substr(i, 4));
            i += 4;

            res.push_back(s.substr(i, len));
            i += len;
        }

        return res;
    }
};