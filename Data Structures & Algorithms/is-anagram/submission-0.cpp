class Solution {
public:
    bool isAnagram(string s, string t) {
        int a=s.size();
        int b=t.size();
        if(a!=b) return 0;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<a;i++){
            if(s[i]!=t[i]) return 0;
        }
        return 1;
    }
};
