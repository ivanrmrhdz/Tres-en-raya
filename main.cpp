//Carlos Ivan Romero Hernandez RH18030

//Librerías 
#include <iostream>
#include <stdlib.h>//para control de procesos
#include <time.h>//para el tiempo en srand


using namespace std;

//Declaracion de funciones
void ejecutar(char tablero[3][3]);//Recopila las demás funciones en un orden especificado
void tabInicio(char tablero[3][3]);//valores de inicio del tablero
void tab(char tablero[3][3]);//Muestra el tablero
void introFicha(char tablero[3][3]);//Funcion para que el usuario coloque su ficha, por defecto X
void introIA(char tablero[3][3]);//Se genera una posicion para O aleatoria
int ganador(char tablero[3][3]);//Comprueba quien ha ganado
void l();//limpiar pantalla

int main() {
	
	//matriz tablero
	char tablero[3][3];

 //llama a ja funcion ejecutar
 ejecutar(tablero);
    
    

	system("pause");
}
void ejecutar(char tablero[3][3]){
	
	//variables
	int i=0;//contador, hasta 9 intentos
	int j;//igualdad a funcion ganador
	
	
	//Se ejecutan los valores iniciales del tablero
	tabInicio(tablero);
	
	//Ciclo para determinar el turno de juego
	do{
		 l();//se limpia la pantalla
		 tab(tablero);//muestra el tablero 
		 
		 
		 if(i % 2==0)//si el modulo de 2 es 0, es el turno del usuario
		 {
		 	//el usuario juega su turno
		 	introFicha(tablero);
		 	
		 }else{
		 	
		 	//se genera una posicion para "la maquina"
		 	introIA(tablero);
		 }
		 //Muestra el tablero
		 tab(tablero);
		 j = ganador(tablero);//cada ves que se juega un turno se comprueba si alguien ah ganado
		 i++;//contador
		 		
	}while(i<=9 && j==2);//se ejecuta hasta que se acabe los turnos o hasta que ganador retorne 2
		
	
	l();//limpia pantalla
	tab(tablero);//mustra tablero
	
	//Dependiendo de el valor retornado por la funcion valor se muestra el texto indicado
	if(j == 0){
		cout<<" "<<endl;
		cout<<"Has Ganado!"<<endl;
	}else if(j == 1){
		cout<<" "<<endl;
		cout<<"Has Perdido :("<<endl;
	}else{
		cout<<" "<<endl;
		cout<<"Has Empatado :|"<<endl;
	}
	
}
//Valores iniciales del tablero
void tabInicio(char tablero[3][3]){
	
	char aux;//varieble auxiliar, hasta llenar todas la posiciones de la matriz
	
	aux='1';//se inicializa en 1
	
		for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			
			tablero[i][j]=aux++;//se llenan las posiciones desde 1 hasta 9
			
							
			}
	
	
	}
	
}
//mustra el tablero en pantalla
void tab(char tablero[3][3]){
		
		//ciclos para recorrer todas la posiciones
		for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			
			
			//configuraciones para la parte grafica del tablero
			if(j<2){
			
			cout<<tablero[i][j]<<" | ";
			}else{
				
				cout<<""<<tablero[i][j];
			}
		}
		if(i<2);
		cout<<endl;
	    cout<<"----------";
		  
	cout<<endl;
		}
	}
//Funcion para que el usuario juegue si turno	
void introFicha(char tablero[3][3]){
	
	char aux;//variable auxiliar
	int k;//variable para el ciclo do while
	
		//ciclo do while principal
		do{
			k=0;//se inicializa k en 0, esto permite que el ciclo se repita
		    //Ciclio anidado para el ingreso correcto de la posicion a seleccionar
			do{ 
		    
			cout<<"Ingresa tu ficha al numero deseado: ";
		    cin>>aux;
		    
		    }while(aux < '1' || aux > '9');//Solo adimite valores entre 1 y 9
		
		//Comprueba si la posicion seleccionada esta ocupada 	
		switch(aux){
			
			/*
			Para cada posicion de la matriz se comprueba si tiene X o O, si tiene un 
			valor de los antes mencionados indica que la casilla esta ocupada y reincia el do while principal.
			Esto se comprueba para los 9 casos posibles 
			
			*/
			case '1': {
				
				if(tablero[0][0]=='X' || tablero[0][0]=='O'){
					k=1; 
             
                   cout<<"Esta casilla esta ocupada, prueba con otra posicion"<< endl; 
					
				}else{
					tablero[0][0]='X';
					
				}
				
				break;
			}
			
			case '2': {
				
				if(tablero[0][1]=='X' || tablero[0][1]=='O'){
					k=1; 
             
                   cout<<"Esta casilla esta ocupada, prueba con otra posicion"<< endl; 
					
				}else{
					tablero[0][1]='X';
					
				}
				
				break;
			}
			case '3': {
				
				if(tablero[0][2]=='X' || tablero[0][2]=='O'){
					k=1; 
             
                   cout<<"Esta casilla esta ocupada, prueba con otra posicion"<< endl; 
					
				}else{
					tablero[0][2]='X';
					
				}
				
				break;
			}
			case '4': {
				
				if(tablero[1][0]=='X' || tablero[1][0]=='O'){
					k=1; 
             
                   cout<<"Esta casilla esta ocupada, prueba con otra posicion"<< endl; 
					
				}else{
					tablero[1][0]='X';
					
				}
				
				break;
			}
			case '5': {
				
				if(tablero[1][1]=='X' || tablero[1][1]=='O'){
					k=1; 
             
                   cout<<"Esta casilla esta ocupada, prueba con otra posicion"<< endl; 
					
				}else{
					tablero[1][1]='X';
					
				}
				
				break;
			}
			case '6': {
				
				if(tablero[1][2]=='X' || tablero[1][2]=='O'){
					k=1; 
             
                   cout<<"Esta casilla esta ocupada, prueba con otra posicion"<< endl; 
					
				}else{
					tablero[1][2]='X';
					
				}
				
				break;
			}
			case '7': {
				
				if(tablero[2][0]=='X' || tablero[2][0]=='O'){
					k=1; 
             
                   cout<<"Esta casilla esta ocupada, prueba con otra posicion"<< endl; 
					
				}else{
					tablero[2][0]='X';
					
				}
				
				break;
			}
			case '8': {
				
				if(tablero[2][1]=='X' || tablero[2][1]=='O'){
					k=1; 
             
                   cout<<"Esta casilla esta ocupada, prueba con otra posicion"<< endl; 
					
				}else{
					tablero[2][1]='X';
					
				}
				
				break;
			}
			case '9': {
				
				if(tablero[2][2]=='X' || tablero[2][2]=='O'){
					k=1; 
             
                   cout<<"Esta casilla esta ocupada, prueba con otra posicion"<< endl; 
					
				}else{
					tablero[2][2]='X';
					
				}
				
				break;
			}
		
		}
		
		 
    
}while(k==1);//condicion para salir del ciclo
}

//Funcion para el turno de la maquina
void introIA(char tablero[3][3]){
	//se declaran i y j como variables globales en la funcion para generar un valor aleatorio
	int i;
	int j;
	//variable usada para repetir o no el ciclo
	int k;
	
	srand(time(NULL));//se genera un numero aleatorio cada vez que se ejecuta la funcion
	
	do{
		//numeros aleatorios entre 0 y 2, que son las posiciones de la matriz
		i= rand()%3;
		j=rand()%3;
		
		k=0;
		//Determina si es posicion está ocupada, si no ingresa la ficha por defecto: O
		if(tablero[i][j]=='X' || tablero[i][j]=='O'){
			
			k=1;
		}else{
			tablero[i][j]='O';
		}
	}while(k==1);
	
}

//limpia la pantalla
void l(){
	
	cout<<endl;
	system("cls");
}	

//Determina el ganador 
int ganador(char tablero[3][3]){
	
	
	/*
	1 | 2 | 3
	4 | 5 | 6
	7 | 8 | 9 
	
	Casos en que alguien gana: 
	
	Desde la posicion central [2][2] o 5
	
	(1)(5)(9)= gana
	(2)(5)(3)= gana
	(7)(5)(3)= gana
	(4)(5)(6)= gana
	
	Desde la posicion 1 [0][0]
	
	(1)(2)(3)= gana
	(1)(4)(7)= gana
	
	Desde la posicion 9 [2][2]
	
	(7)(8)(9)= gana
	(3)(6)(9)= gana
	
	*/
	 //ficha inicial(1)
 if (tablero[0][0] == 'X' || tablero[0][0] == 'O'){
  if (tablero[0][0] == tablero[0][1] && tablero[0][0] == tablero[0][2]){
   if (tablero[0][0] == 'X'){
    return 0;
   }
   else {
    return 1;
   }
  }
  if (tablero[0][0] == tablero[1][0] && tablero[0][0] == tablero[2][0]){
   if (tablero[0][0] == 'X'){
    return 0;
   }
   else{
    return 1;
   }
  }
 }
 //Ficha central(5)
 if (tablero[1][1] == 'X' || tablero[1][1] == 'O'){
  //fichas 1 5 9
  if (tablero[1][1] == tablero[0][0] && tablero[1][1] == tablero[2][2]){
   if (tablero[1][1] == 'X'){
    return 0;
   }
   else{
    return 1;
   }
  }
  //fichas 2 5 8
  if (tablero[1][1] == tablero[0][1] && tablero[1][1] == tablero[2][1]){
   if (tablero[1][1] == 'X'){
    return 0;
   }
   else{
    return 1;
   }
  }
  //Fichas 4 5 6
  if (tablero[1][1] == tablero[1][0] && tablero[1][1] == tablero[1][2]){
   if (tablero[1][1] == 'X'){
    return 0;
   }
   else{
    return 1;
   }
  }
  //fichas 7 5 3
  if (tablero[1][1] == tablero[2][0] && tablero[1][1] == tablero[0][2]){
   if (tablero[1][1] == 'X'){
    return 0;
   }
   else{
    return 1;
   }
  }
 }
 //Ficha final (9)
 else if(tablero[2][2] == 'X' || tablero[2][2] == 'O'){
  if (tablero[2][2] == tablero[1][2] && tablero[2][2] == tablero[0][2]){
   if (tablero[2][2] == 'X'){
    return 0;
   }
   else{
    return 1;
   }
  if (tablero[2][2] == tablero[2][1] && tablero[2][2] == tablero[2][0]){
   if (tablero[2][2] == 'X'){
    return 0;
   }
   else{
    return 1;
   }
   }
  }
 }
 return 2;
	
}
