vector<int> breakingRecords(vector<int> scores) {
    vector<int> records(2,0);
    int menor = scores[0], maior =scores[0];
     
     
     for(int i = 1; i<scores.size();i++){
         if(maior<scores[i] ){
             records[0]++;
             maior = scores[i];
         }
         if(menor>scores[i] ){
             records[1]++;
             menor = scores[i];
         }
     }
     
    return records; 
    //Mateus Augusto
}

