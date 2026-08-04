class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for( int i =0; i < nums.size();i++ ){
           mp[nums[i]]++;

        }
        vector<vector<int>> buckets(nums.size()+1);
        for(auto& p : mp){
            int freq = p.second;
            int num = p.first;
            buckets[freq].push_back(num);
        }
        // now have a bucket with vectors inside it with larger size now need to organize for K elements from that vector
        vector < int> result;
        for (int f = nums.size(); f >= 1; f--) {
    for (int x : buckets[f]) {
        result.push_back(x);
        if ((int)result.size() == k) return result;
    }
}
return result;
         
        
    }
};
