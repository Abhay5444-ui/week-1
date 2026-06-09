class Solution {
public:
    vector<int> findAnagrams(string s2, string s1) {
         int n = s2.length(), m = s1.length(); 
         unordered_map<char, int> map1;
          for (char c: s1) {
             map1[c]++;
        } 
               unordered_map<char, int> map2;
                vector<int> result; 
                for (int i = 0; i < n; i++) { 
                    map2[s2[i]]++;
                     if (i >= m) { 
                        map2[s2[i-m]]--;
                        if(map2[s2[i-m]]==0){ 
                            map2.erase(s2[i-m]); 
                            } }
                            if (map1==map2) { 
                                result.push_back(i-m+1);
                                 }}
                                return result; 
    }
};