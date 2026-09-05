class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int size_1 = s1.size();
        int left = 0;
        int right = s1.size()-1;
        sort(s1.begin(),s1.end());
        while(right < s2.size()){
           string sortedS2 ;
           for(int i = left; i <= right; i++ ){
            sortedS2.push_back(s2[i]);
           }

           sort(sortedS2.begin(),sortedS2.end());
           if(sortedS2 == s1){
            return true;
           }
           left++;
           right ++;
        }

        return false;
    }
};
