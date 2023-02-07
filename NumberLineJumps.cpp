string kangaroo(int x1, int v1, int x2, int v2) {
    x1 = x1+v1;
    x2 = x2+v2;
    
    for(int i = 0; i<10000;i++){
        if(x1!=x2){
            x1 +=v1;
            x2 +=v2;
        }
    }
    
    if(x1!=x2){
        return "NO";
    }else{
        return "YES";
    }
    //Mateus Augusto
}
