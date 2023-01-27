void miniMaxSum(vector<int> arr) {
    vector<long>sum;
    long sum2 = 0;
    
    for(int i = 0; i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            if(i!=j){
               sum2 += arr[j]; 
            }
        }
        sum.push_back(sum2);
        sum2 = 0;
    }
    
    long max = sum[0], min = sum[0];
    
    for(int i= 1;i<sum.size();i++){
        if(max<sum[i]){
            max = sum[i];
        }
        if(min>sum[i]){
            min = sum[i];
        }
    }
    
    cout << min << ' ' << max << endl;
    //Mateus Augusto
}
