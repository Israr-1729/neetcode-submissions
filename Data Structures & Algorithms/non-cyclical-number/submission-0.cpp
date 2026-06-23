class Solution {
public:
    unordered_set<int> isSeen;
    bool isHappy(int n) {

        if(n==1)
        return true;

        if(isSeen.find(n)!=isSeen.end())
        return false;

        else
        isSeen.insert(n);
        int sum = 0;
        while(n!=0)
        {
            sum += (n%10)*(n%10);
            n/=10;
        }
        return isHappy(sum);
    }
};
