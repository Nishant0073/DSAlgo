class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        int fin_stock=0;
        for(int i=0;i<n;i++)
        {
            int temp1_stock=prices[i];
            int temp2_stock=prices[i];
            
            for(int j=i+1;j<n;j++)
            {
                if(prices[j]>temp2_stock)
                    temp2_stock=prices[j];
            }
            
            int ans=temp2_stock-temp1_stock;
            if(ans>fin_stock)
                fin_stock=ans;
        }
        
       return(fin_stock);
        
    }
};





//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/
