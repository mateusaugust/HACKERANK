void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    
    int appleD = 0, orangeD = 0, sum =0;
    
    for(int i = 0; i<apples.size(); i++){
     
        sum = apples[i]+(a);  
       
        if(sum>=s && sum<=t){
            appleD++;
        }
    }
    
    sum =0;
    
    for(int i = 0; i<oranges.size(); i++){
        
        sum = oranges[i]+(b);  
        
        if(sum>=s && sum<=t){
            orangeD++;
        }
    }
    
   cout << appleD << endl << orangeD ;
   //Mateus Augusto
}
