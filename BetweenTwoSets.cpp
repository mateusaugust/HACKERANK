int getTotalX(vector<int> a, vector<int> b) {
    
    vector<int> result;
    int resultFinal = 0;
    
    
    for(int i = a[0];i<=b[0];i++){
        
        int cont = 0;
        
        for(int j = 0; j<a.size();j++){
            if(i%a[j] ==0){
                cont++;
            }
        }
        
        if(cont == a.size()){
           result.push_back(i); 
        }
    }
    
    
    for(int i = 0; i<result.size(); i++){
        
        int cont = 0;
        
        for(int j = 0; j<b.size();j++){
            if(b[j]%result[i] == 0){
                cont++;
            }
        }
        
        if(cont == b.size()){
            resultFinal++;
        }
    }
    
    
    return resultFinal;
    //Mateus Augusto
}

