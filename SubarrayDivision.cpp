int birthday(vector<int> s, int d, int m) {
    int t = 1, sum = 0, result = 0;
    
    for(int i = 0; i<s.size();i++){
        sum = s[i];
        t = 1;
        
        while(t<=m-1){
            sum += s[i+t];
            t++;
        } 
        
        if(sum == d){
            result++;
        }
    }
    return result;
    //Mateus Augusto
}

