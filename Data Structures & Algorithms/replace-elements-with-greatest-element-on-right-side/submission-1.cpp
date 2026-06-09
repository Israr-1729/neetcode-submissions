class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int size = arr.size();
        int maxm = arr[size-1];
        arr[size-1] = -1;
        for(int i = size-2; i>=0; i--)
        {
            int temp = arr[i];
            arr[i] = maxm;
            maxm = max(maxm, temp);
        }
        return arr;
    }
};