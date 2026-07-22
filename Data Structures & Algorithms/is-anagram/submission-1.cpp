class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> anagram_1;
        unordered_map<char, int> anagram_2;

        if( s.size()!= t.size()){
            return false; 
        }

        else{
            for(int i=0; i < s.size(); i++){
                anagram_1[s[i]]++;
                anagram_2[t[i]]++;
            }

           // Loop through every key-value pair in anagram_1
            for (const auto& entry : anagram_1) {

    // The key is the current character, such as 'a'
                char character = entry.first;

    // The value is how many times that character appeared in s
                int countInFirstString = entry.second;

    // Look up the same character in anagram_2.
    // If its count is different, the strings are not anagrams.
                if (anagram_2[character] != countInFirstString) {
                    return false;
    }
}

// If no mismatched count was found, every character count matches
    return true;



        }

    }
};
