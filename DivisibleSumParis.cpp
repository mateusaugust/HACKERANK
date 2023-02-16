int divisibleSumPairs(int n, int k, vector<int> ar) {
    
    int result = 0;
    
    for(int i = 0; i<ar.size();i++){

        for(int j =0;j<ar.size();j++){
            int sum = ar[i] + ar[j];
            
            if(sum%k == 0 && i<j){
                result++;
            }
        }
    }
    
    return result;
    //Mateus Augusto da Silva
}
