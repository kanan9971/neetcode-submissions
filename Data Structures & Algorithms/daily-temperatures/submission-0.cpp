class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result (n,0);
        vector<int> data;
        for(int i =0; i<n;i++){
            while(!data.empty()&&temperatures[i]>temperatures[data.back()]){
                int prev = data.back();
                data.pop_back();
                result[prev] = i- prev;

            }

            data.push_back(i);

        }

        return result;
        
        
        
    }
};
