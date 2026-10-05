class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result;
        vector<int> stk;

        for(int i : temperatures){
        stk.push_back(i);

        int num = stk.back();

        if(num > stk.back()){
           if(stk.size()!=0){ stk.pop_back();}
            result.push_back(stk.size());

        }

        
        }
        return result;

    }
};
