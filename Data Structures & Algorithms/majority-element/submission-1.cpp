class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int element_size = nums.size()/2;
        int majority_element =0;

        for(int i =0; i<nums.size()/2;i++){
            mp[i]++;
            if(mp[i]>element_size){
                majority_element = mp[i];
                cout << majority_element << endl;
            }
        
        }

     return majority_element;
    }
};