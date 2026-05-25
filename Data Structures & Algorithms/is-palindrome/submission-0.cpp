class Solution {
public:
    bool isPalindrome(string s) {
        string news;
        for(int i=0; i<s.size(); i++)
        {
            if(isdigit(s[i]) || isalpha(s[i]))
            news.push_back(s[i]);
        }
        int size = news.size();
        for(int i = 0; i<size/2; i++)
        {
            if(tolower(news[i])!=tolower(news[size-i-1]))
            return false;
        }
        return true;
    }
};
