class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sl= s.length();
        int tl= t.length();
        int i,j;
        if(sl>tl) return false;
        for(i=0,j=0;i<sl && j<tl;j++){
            if(s[i]==t[j])i++;
        }
        return i==sl;
    }
};