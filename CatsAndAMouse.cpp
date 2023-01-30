string catAndMouse(int x, int y, int z) {

    string result;
    int aTc = 0, bTc = 0;

    if(x>z){
        aTc = x-z;
    }else if(z>x){
        aTc = z -x;
    }

    if(y>z){
        bTc = y-z;
    }else if(z>y){
        bTc = z - y;
    }

    if(aTc>bTc){
        result = "Cat B";
    }else if(bTc>aTc){
        result = "Cat A";
    }else{
        result = "Mouse C";
    }
    
    return result;
	//Mateus Augusto
}
