class Solution {
public:
    int k = 0;
    bool isSubsequence(string s, string t) {
	   // iterate s in t
        for(int i = 0; i < t.length(); i++){
		// check for matching charaacters
            if(t[i] == s[k])
                k++;
        }
        
		// if cnt == length of s it is subsequence
        if(k == s.length()){
            return true;
        }
       
       return false;
        
    }
};