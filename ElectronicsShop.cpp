int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    vector<int> prices;
    int result = 0;
    
    
    for(int i = 0;i<keyboards.size();i++){
        for(int j = 0; j<drives.size();j++){
            int sum = 0;
            sum = keyboards[i]+drives[j];
            
            if(sum<=b){
               prices.push_back(sum); 
            } 
        }
    }

    for(int i = 0; i<prices.size();i++){
        if(prices[i]<= b && prices[i]>result){
            result = prices[i];    
        }
    }
    
    if(result == 0){
        result = -1;
    }
    
    return result;
}
