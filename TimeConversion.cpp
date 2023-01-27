
string timeConversion(string s) {
   char a[2] = {s[0], s[1]},o = s[8];
   int c = atoi(a);
   
   if(o == 'P' && c!=12){
       c += 12;
       string l = to_string(c);
       
       s[0] = l[0];
       s[1] = l[1];
       s.erase(8);
   }else if(o == 'A' && c!=12){
        s.erase(8);
   }else if(c == 12 && o == 'P') {
        s.erase(8);
   }else if(c == 12 && o == 'A'){
       s[0] = '0';
       s[1] = '0';
       s.erase(8);
   }
   
    return s;
    //Mateus Augusto
}

