class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        stack<int> high;
        int size = arr.size();

        high.push(-1); // for last element

        for (int i = size - 1; i >= 0; i--) {
            int current = arr[i]; // save original value

            arr[i] = high.top(); // replace with max to the right

            // maintain max in stack
            if (current > high.top()) {
                high.push(current);
            }
        }

        return arr;
    }
};