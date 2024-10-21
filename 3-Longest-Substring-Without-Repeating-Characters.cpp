class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n= s.length();
        map<char,int>freq;
        int start=0;
        int mx=0;
        for(int i=0;i<n;i++)
        {
            if(freq[s[i]]==0)
            {
                freq[s[i]]++;
            }
            else
            {
                while(i<n && s[start]!=s[i])
                {
                    freq[s[start]]--;
                    start++;
                }
                start++;
            }
        mx = max(mx,i-start+1);
        }
        return mx;
    }
};