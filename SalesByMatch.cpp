 int aux;
    int soma = 0, total = 0;
    
   for (int i = 0; i < ar.size(); i++)
            {
                for (int j = 0; j < ar.size(); j++)
                {
                    if (ar[i] < ar[j])
                    {
    
                        aux = ar[i];
                        ar[i] = ar[j];
                        ar[j] = aux;
                    }
                }
            }
  
  int j = 0; soma =0;

  
for(int i = 0; i<n; i++){
    
   while(ar[i] == ar[j]){
       soma++;
       j++;
   } 
   
   if(soma%2==0){
       total += soma/2;
   }else{
       soma =soma-1;
       total += soma/2;
   }
   
   soma = 0;
}  
  return total;
  
  //Mateus Augusto da Silva
