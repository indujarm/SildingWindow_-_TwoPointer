class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int ls[3]={-1,-1,-1};
        int m =3;
        int count=0;
        for(int i =0;i<n;i++)
        {
            ls[s[i]-'a']=i;
            if(ls[0]!=-1 &&ls[1]!=-1 &&ls[2]!=-1)
            {
                count+=(1+*min_element(ls,ls+m));
            }
        }
        return count;
    }
};