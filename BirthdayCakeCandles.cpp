int birthdayCakeCandles(vector<int> candles) {
    int max = 0, alt =0;
    
    for(int i = 0; i<candles.size();i++){
        if(candles[i]>max){
            max = candles[i];
        }
    }
    
    for(int i = 0; i<candles.size();i++){
        if(candles[i] == max){
            alt++;
        }
    }
    
    return alt;
    //Mateus Augusto
}
