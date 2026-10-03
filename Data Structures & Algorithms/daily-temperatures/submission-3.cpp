class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(), 0);
        vector<int> stk;

        for (int i = 0; i < temperatures.size(); i++) {
            while (!stk.empty() &&
                   temperatures[i] > temperatures[stk.back()]) {
                int num = stk.back();
                stk.pop_back();
                result[num] = i - num;
            }

            stk.push_back(i);
        }

        return result;
    }
};