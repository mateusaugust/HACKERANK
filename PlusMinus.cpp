void plusMinus(vector<int> arr) {
    int siz = arr.size();
    
    double negative = 0, positive = 0, zero = 0;
    
    for(int i = 0; i<siz; i++){
        if(arr[i] == 0){
            zero++;
        }else if(arr[i]>0){
            positive++;
        }else{
            negative++;
        }
    }
    
    cout << positive/siz << endl << negative/siz << endl << zero/siz<<endl; 
    //Mateus Augusto
}

