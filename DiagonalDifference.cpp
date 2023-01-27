int diagonalDifference(vector<vector<int>> arr) {
   int d1 = 0, d2 =0;
   
   for(int i = 0; i<arr.size(); i++){
       d1 = d1 + (arr[i][i]); 
   }
   
    int i = 0;
    for(int j = arr.size()-1;j>=0;j--){
        d2 = d2+(arr[j][i]);
        i++; 
    }
    
    if(d1>d2){
        return d1-d2;
    }else if(d2>d1){
        return d2-d1;
    }else{
        return d1-d2;
    }
   //Mateus Augusto
}
