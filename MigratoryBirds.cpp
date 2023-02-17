int migratoryBirds(vector<int> arr) {
   vector <int> numbers;
   vector <int> r;
   numbers.push_back(arr[0]);
   
   vector<int>result;
   
   int cont = 0;
   
   for(int i = 1; i<arr.size();i++){
       for(int j = 0; j<numbers.size();j++){
           if(numbers[j] == arr[i]){
               cont++;
           }
       }
        
        if(cont == 0){
            numbers.push_back(arr[i]);
        }
        
        cont = 0;
   } 
    
    cont =0;
    
    for(int i = 0; i<numbers.size();i++){
        for(int j = 0; j<arr.size();j++){
           if(arr[j] == numbers[i]){
               cont++;
           } 
        }
        
        r.push_back(cont);
        
        cont=0;
    }
    
    cont=0;
    
    for(int i = 0; i<r.size();i++){
        if(r[i]>cont){
            cont = r[i];
        }
    }
    
    for(int i = 0; i<r.size();i++){
       if(r[i] == cont){
           result.push_back(numbers[i]);
       } 
    }
    
    cont = 0;
    
    for(int i = 0; i<result.size();i++){
       if(result[i]>cont){
           cont = result[i];
       } 
    }
    
    for(int i=0; i<result.size();i++){
       if(result[i]<cont){
           cont = result[i];
       } 
    }
    
   return cont;
   //Mateus Augusto
}
