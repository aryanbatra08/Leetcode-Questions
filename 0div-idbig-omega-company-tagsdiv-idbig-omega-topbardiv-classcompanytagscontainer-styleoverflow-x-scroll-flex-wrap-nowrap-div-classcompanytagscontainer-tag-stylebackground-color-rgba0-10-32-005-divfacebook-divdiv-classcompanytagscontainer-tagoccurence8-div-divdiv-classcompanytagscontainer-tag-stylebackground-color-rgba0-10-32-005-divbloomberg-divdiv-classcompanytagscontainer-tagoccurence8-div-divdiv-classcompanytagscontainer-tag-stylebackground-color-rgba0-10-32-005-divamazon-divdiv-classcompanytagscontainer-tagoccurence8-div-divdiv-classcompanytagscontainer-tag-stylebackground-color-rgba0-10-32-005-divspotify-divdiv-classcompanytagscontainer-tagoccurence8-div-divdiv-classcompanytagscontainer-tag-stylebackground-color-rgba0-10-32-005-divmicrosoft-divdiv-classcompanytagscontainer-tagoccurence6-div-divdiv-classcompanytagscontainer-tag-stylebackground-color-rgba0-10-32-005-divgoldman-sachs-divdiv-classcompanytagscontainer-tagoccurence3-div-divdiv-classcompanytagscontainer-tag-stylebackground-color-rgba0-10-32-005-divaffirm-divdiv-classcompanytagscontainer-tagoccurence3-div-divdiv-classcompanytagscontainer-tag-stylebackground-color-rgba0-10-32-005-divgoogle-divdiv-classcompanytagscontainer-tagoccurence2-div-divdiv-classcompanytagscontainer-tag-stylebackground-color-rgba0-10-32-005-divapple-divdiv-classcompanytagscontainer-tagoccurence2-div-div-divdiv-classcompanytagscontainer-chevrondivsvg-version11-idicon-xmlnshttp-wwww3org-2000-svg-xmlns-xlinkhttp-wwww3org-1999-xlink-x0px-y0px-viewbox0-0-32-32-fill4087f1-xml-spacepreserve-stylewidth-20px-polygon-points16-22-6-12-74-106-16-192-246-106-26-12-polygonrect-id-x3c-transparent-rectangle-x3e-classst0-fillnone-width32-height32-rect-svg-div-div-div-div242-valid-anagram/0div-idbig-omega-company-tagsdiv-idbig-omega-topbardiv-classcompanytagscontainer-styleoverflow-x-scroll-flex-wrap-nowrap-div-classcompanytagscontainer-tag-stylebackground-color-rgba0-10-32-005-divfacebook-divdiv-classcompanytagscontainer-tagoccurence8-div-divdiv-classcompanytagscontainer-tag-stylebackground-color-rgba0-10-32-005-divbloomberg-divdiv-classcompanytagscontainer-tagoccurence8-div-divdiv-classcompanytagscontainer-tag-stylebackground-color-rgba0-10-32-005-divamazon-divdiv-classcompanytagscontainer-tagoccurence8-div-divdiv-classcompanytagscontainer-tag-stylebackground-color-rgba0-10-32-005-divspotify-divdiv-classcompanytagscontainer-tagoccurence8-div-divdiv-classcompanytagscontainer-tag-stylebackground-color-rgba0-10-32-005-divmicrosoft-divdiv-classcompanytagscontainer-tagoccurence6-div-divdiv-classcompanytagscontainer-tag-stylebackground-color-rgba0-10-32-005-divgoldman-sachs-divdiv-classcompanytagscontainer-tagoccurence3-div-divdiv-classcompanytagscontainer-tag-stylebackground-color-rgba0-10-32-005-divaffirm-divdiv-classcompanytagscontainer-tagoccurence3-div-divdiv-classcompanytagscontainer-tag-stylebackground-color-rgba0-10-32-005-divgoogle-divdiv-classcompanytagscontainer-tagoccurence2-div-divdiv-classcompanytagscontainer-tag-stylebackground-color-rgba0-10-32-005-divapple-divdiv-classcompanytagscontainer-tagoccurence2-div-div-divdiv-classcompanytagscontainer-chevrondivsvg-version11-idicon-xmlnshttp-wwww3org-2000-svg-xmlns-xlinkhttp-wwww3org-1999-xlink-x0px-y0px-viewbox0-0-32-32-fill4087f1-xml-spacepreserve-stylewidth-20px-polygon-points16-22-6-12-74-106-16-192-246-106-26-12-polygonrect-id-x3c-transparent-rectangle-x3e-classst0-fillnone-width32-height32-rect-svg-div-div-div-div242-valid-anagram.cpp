class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[256] = {0};
        int s1 = s.length();
        int s2 = t.length();
        int ans ; 
        if(s1!=s2)
        {
            return false;
        }
        for(int i = 0 ; i<s1;i++)
        {
            count[s[i]]++;
        }
         for(int i = 0 ; i<s2;i++)
        {
            count[t[i]]--;
        }
        for(int i = 0 ; i<256;i++)
        {
            if(count[i]!=0)
            {
                return false;
            }
            
        }return true;

    }

};
        






