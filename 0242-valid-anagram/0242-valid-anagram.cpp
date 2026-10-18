// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.size()!= t.size())
//             return false;
//         unordered_map<char,int> s1;
//         unordered_map<char,int> t1;
        
//         for(char ch : s){
//             s1[ch]++;
//         }

//         for(char ch : t){
//             t1[ch]++;
//         }

//         return s1 == t1;
//     }
// };

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!= t.size())
            return false;
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        return s == t;
    }
};