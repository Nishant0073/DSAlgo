class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
       map<int,int>mp;
        int n=nums.size();
        
        for(auto it=nums.begin();it!=nums.end();it++)
        {
            mp[*it]++;
        }
        
        int ans=0;
        
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>1)
            {
                ans=it->first;
                break;
            }
        }
        
        return ans;
    
}
};

//https://leetcode.com/problems/find-the-duplicate-number/submissions/
