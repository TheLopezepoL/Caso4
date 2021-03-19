
#include "Pattern.cpp"


int main() {
    Pattern *pattern = new Pattern(720, 1020);
    pattern->generatorJson(pattern);
    //Correr el segundo ejemplo despues por la actualizacion del json
    //El json pasa la ancho y altura, ademas de un arreglo de puntos con cordenadas X , Y ademas que un numero que es el ancho del punto	
	//revisar el json para ver los puntos
	 
    //Pattern *patron = new Pattern(13, 13);
    //patron->generatorJson(pattern);
    
    
    return 0;
}


