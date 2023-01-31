vector<int> gradingStudents(vector<int> grades) {
   
   
   for(int i = 0 ; i<grades.size(); i++){
       int sub = 0;
       int mult = 0;
       
       while(mult<=grades[i]){
           mult =mult + 5;
       }
       
       sub = mult - grades[i];
    
       if(sub<3 && grades[i]>=38){
          grades[i] = mult;
       }
   }
   
   return grades;
   //Mateus Augusto;
}
