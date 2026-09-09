/*
You are given an array prices where prices[i] is the price of a 
given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one 
stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. 
If you cannot achieve any profit, return 0. 
*/

#include<iostream>
using namespace std;

int main(){

    int prices[6] = {7,1,5,3,6,4}; 
    int n = sizeof(prices)/sizeof(prices[0]);

    int prevMin = prices[0] ;
    int curProfit =0 ;
    int maxProfit=0 ;

    for(int i=1; i<n; i++){

        curProfit = prices[i] - prevMin;
        
        if(curProfit > maxProfit) maxProfit = curProfit;
        
        if(curProfit<0) prevMin = prices[i]; 
    }

    cout<<maxProfit;

    return 0;
}