class Solution {
public:
    int maxScore(vector<int>& cards, int k) {
        int n = cards.size();
        int lSum=0,rSum=0,rIndex=n-1;
        int maxVal=0;
        for(int i =0;i<k;i++)
        {
            lSum+=cards[i];
        }
        maxVal=lSum;
        for(int i=k-1;i>=0;i--)
        {
            lSum-=cards[i];
            rSum+=cards[rIndex];
            rIndex--;

            maxVal= max(maxVal,(lSum+rSum));
        }
        
        return maxVal;
    }
};