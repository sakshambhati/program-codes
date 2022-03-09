class Solution {
public:
    int maxPower(string s) {
        int count = 1, ans = 0;
        for(int i = 1; i<s.length(); i++)
        {
            if(s[i] == s[i-1])
            {
                count = count + 1;
            }
            else
            {
                ans = max(ans, count);
                count = 1;  //count reset
            }
    
        }
        return  max(ans, count);
    }
};