class Solution {
public:
    vector<int> twoSum(vector<int>& a, int t)
    {
        int n=a.size();
        vector<int> res(2,0);
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]+a[j]==t)
                {
                    res[0]=i;
                    res[1]=j;
                    return res;
                }
            }
        }
        return res;
    }
};