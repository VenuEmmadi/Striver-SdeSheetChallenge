#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    long long int profit = 1000000000;
   int maxProfit = 0;
   for(int i=0;i<prices.size();i++)
   {
       if(prices[i]<profit)
       {
           profit = prices[i];
       }
       else if(prices[i]-profit>maxProfit)
           {
               maxProfit = prices[i] - profit;
           }
       
   }
   return maxProfit;
}
