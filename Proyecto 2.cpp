#include <iostream>
#include <stdlib.h>  // contiene la funcon para utilizar el system ("cls")
#include <conio.h>  // permite usar el _gtech para esperara a que el usuario presione una tecla
#include <time.h>   // permine generar numeros aleatorios 
#include <iomanip> // permine utilizar el setw para alinear y dar tabulacion a las matrices y asi lograr que se vean mas ordenadas
#include <string.h> // permite el uso de funcones de cadenas
#include <sstream>  // permite contar palabras 
#include <algorithm> // permite el uso de algoritmos como sort 
using namespace std;
int main(){
	// declaracion de variables que se utilizaran en el codigo, matrix[100][100] se utiliza para dar el maximo de filas y columnas que permitira la matriz
	int opcion, opcion1, opcion2, opcion3, matrix1 [100][100], matrix2 [100][100], matrixr[100][100], rows1, column1, rows2, column2, sn, opc, opc1, fila, columna, dato;
	bool encuentra=false; // se utilizara para encontrar datos en una matriz, se inicia en falso ya que cambiara a true cuando encuentre el valor que buscamos en la matriz
	string oracion, oracion1, oracion2, oracion3;
	do{ // menu principal
		cout << "___________________________________________" << endl;
		cout << "|Bienvenido /n.n/ seleccione una opcion:  |" << endl;
		cout << "|1. Matrices                              |" << endl;
		cout << "|2. String                                |" << endl;
		cout << "|3. Salir                                 |" << endl;
		cout << "|_________________________________________|" << endl;
		cin >> opcion;	
		while (cin.fail() || opcion<1 || opcion>3 ){ // indicara el rango de valores que seran validados en el menu
						cout << "Debe ingresar un valor indicado en el menu" << endl;
					cin.clear(); // limpiara los valores para que sean ingresados nuevamente
					cin.ignore(1000, '\n'); // ignora los caracteres o letras el 1000 significa que pueden haber hasta 1000 caracteres juntos y se ignoraran, tambien aplica ignorar enter con '\n'
					cin >> opcion;  // volvera a leer el valor que se ingrese y se almacenara en opcion
					}
	system ("cls"); // limpia la pantalla al seleccionar una opcion
	
			switch (opcion){
				case 1:
					cout << "Ingrese las filas de la matriz m" << endl;
					cin >> rows1;
					while (cin.fail()){
					cout << "Debe ingresar solo valores numericos"<< endl;
					cin.clear();
					cin.ignore(1000, '\n');
					cin >> rows1;
					       }
					cout << "Ingrese las columnas de la matriz m" << endl;
					cin >> column1;
					while (cin.fail()){
					cout << "Debe ingresar solo valores numericos" << endl;
					cin.clear();
					cin.ignore(1000, '\n');
					cin >> column1;
					}
						for (int i=0; i<rows1; i++){
							for (int j=0; j<column1; j++){
								}
							}
					cout << "Ingrese las filas de la matriz n" << endl;
					cin >> rows2;
					while (cin.fail()){
					cout << "Debe ingresar los valores numericos"<< endl;
					cin.clear();
					cin.ignore(1000, '\n');
					cin >> rows2;
					}
					cout << "Ingrese las columnas de la matriz n" << endl;
					cin >> column2;
					while (cin.fail()){
					cout << "Debe ingresar los valores numericos"<< endl;
					cin.clear();
					cin.ignore(1000, '\n');
					cin >> column2;
					}
						for (int i=0; i<rows2; i++){
							for (int j=0; j<column2; j++){
								}
							}
					cout << "____________________________________________" << endl;
					cout << "| 1. Desea ingresar los datos manualmente  |" << endl;
					cout << "| 2. Desea generar los datos aleatoriamente|" << endl;
					cout << "| 3. Regresar al menu anterior...          |" << endl;
					cout << "|__________________________________________|" << endl;
					cin >> opcion1;
					while (cin.fail() || opcion1<1 || opcion1>3 ){
						cout << "Debe ingresar un valor indicado en el menu" << endl;
					cin.clear();
					cin.ignore(1000, '\n');
					cin >> opcion1;
					}
					system ("cls");
					if (opcion1==1){ // ingreseo manual de las matrices
						system ("cls");
							cout << "Ingrese los datos de la matriz m" << endl;
								for (int i=0; i<rows1; i++){
									for (int j=0; j<column1; j++){
										cout << "Ingrese el numero [" <<i+1<<"]["<<j+1<<"]: ";
										cin >> matrix1[i][j];
										while (cin.fail()){
										cout << "Debe ingresar los valores numericos"<< endl;
										cin.clear();
										cin.ignore(1000, '\n');
										cin >> matrix1[i][j];
										}
										}
									}
							cout << "Ingrese los datos de la matriz n" << endl;
								for (int i=0; i<rows2; i++){
									for (int j=0; j<column2; j++){
										cout << "Ingrese el numero [" <<i+1<<"]["<<j+1<<"]: ";
										cin >> matrix2[i][j];
										while (cin.fail()){
										cout << "Debe ingresar los valores numericos"<< endl;
										cin.clear();
										cin.ignore(1000, '\n');
										cin >> matrix2[i][j];
										}
										}
									}
							cout << "Los datos de la matriz m son:" << endl; // se muestra la matriz m
								for (int i=0; i<rows1; i++){
									for (int j=0; j<column1; j++){
										cout << setw (3)<< matrix1 [i] [j] << " ";
										}
										cout << "\n";
									}
							cout << "Los datos de la matriz n son:" << endl; // se muestra la matriz n
								for (int i=0; i<rows2; i++){
									for (int j=0; j<column2; j++){
										cout << setw (3)<< matrix2 [i][j] << " ";
										}
										cout << "\n";
									}
							
							cout << "Desea buscar un valor en la matriz: " << endl; // buscamos un valor en las matrices que ingresamos
							cout << "1. Si" << endl;
							cout << "2. No" << endl;
							cin >> opc;
							while (cin.fail() || opc<1 || opc >2 ){
								cout << "Ingrese los valores indicados en el menu" << endl;
							cin.clear();
							cin.ignore(1000, '\n');
							cin >> opc;
							}
							if (opc==1){
								cout << "En que matriz?" << endl; // seleccionamos la matriz en la que desamos buscar datos
								cout << "1. Matriz m" << endl;
								cout << "2. Matriz n" << endl;
								cin >> opc1;
								while(cin.fail() || opc1<1 || opc1>2 ){
									cout << "Ingrese los valores indicados en el menu" << endl;
								cin.clear();
								cin.ignore(1000, '\n');
								cin >> opc1;
								}
								if (opc1==1){
									if (opc1==1){
									do{
									cout << "Que dato de la matriz m desea buscar?" << endl;
									cin >> dato; // dato ingresado por el usuario que quiere buscar
									while (cin.fail()){
										cout << "Debe ingresar los valores numericos"<< endl;
										cin.clear();
										cin.ignore(1000, '\n');
										cin >> dato;
										}
									encuentra=false; // reinicia el buscador para que no tenga error
									for (int i=0; i<rows1; i++){
										for (int j=0; j<column1; j++){
											if (dato==matrix1[i][j]){
											fila= i;
											columna= j;
											encuentra = true; // encuentra cambia a true cuando encontramos el dato que buscamos
										
											}
										}
										if (encuentra) break;
									}
									if (encuentra==true){
										cout<< "El dato " << dato << " esta en la columna " << columna+1 << " y en la fila " << fila+1 << endl; // mostrara en que fila y columna esta en dato que el usuario busca
									} else {
										cout << "El dato no se encuentra en la matriz" << endl; // si el dato no esta en la matriz indicara este mensaje
										cout << "Intente de nuevo" << endl;
									}
									} while (!encuentra);
									
						 			}
									 	
								} else if (opc1==2){
									do{
									cout << "Que dato de la matriz n desea buscar?" << endl;
									cin >> dato;
									while (cin.fail()){
										cout << "Debe ingresar los valores numericos"<< endl;
										cin.clear();
										cin.ignore(1000, '\n');
										cin >> dato;
										}
									encuentra=false;
									for (int i=0; i<rows2; i++){
										for (int j=0; j<column2; j++){
											if (dato==matrix2[i][j]){
											fila= i;
											columna= j;
											encuentra = true;
												
											}
										}
										if (encuentra);
										_getch ();
									}
									if (encuentra==true){
										cout<< "El dato " << dato << " esta en la columna " << columna+1 << " y en la fila " << fila+1 << endl;
									} else {
										cout << "El dato no se encuentra en la matriz" << endl;
										cout << "Intente de nuevo" << endl;
									}
									} while (!encuentra);
								}
										
							}
								
					}else if (opcion1==2) {
						system ("cls");
							srand(time(NULL)); // creamos una semilla para generar datos de forma aleatoria con el srand
								for(int i=0; i<rows1; i++){
									for(int j=0; j<column1; j++){
									matrix1 [i][j]=rand()%100;
									}
								}
						
									for(int i=0; i<rows2; i++){
										for(int j=0; j<column2; j++){
										matrix2 [i][j]=rand()%100;
									}
								}
								
								cout << "La matriz m es: " << endl;
									for (int i=0; i<rows1; i++){
										for (int j=0; j<column1; j++){
										cout << setw (3)<< matrix1 [i][j] << " ";
									}
								cout << "\n";
								}
							
								cout << "La matriz n es: " << endl;
								for (int i=0; i<rows2; i++){
									for (int j=0; j<column2; j++){
									cout << setw (3)<< matrix2 [i] [j] << " ";
									}
								cout << "\n";	
								}	
							
								cout << "Desea buscar un valor en la matriz: " << endl;
								cout << "1. Si" << endl;
								cout << "2. No" << endl;
								cin >> opc;
								if (cin.fail()|| opc<1 || opc>2){
									cout << "Ingrese los valores indicados en el menu" << endl;
								cin.clear();
								cin.ignore(1000, '\n');
								cin >> opc;
								}
									if (opc==1){
									cout << "En que matriz?" << endl;
									cout << "1. Matriz m" << endl;
									cout << "2. Matriz n" << endl;
									cin >> opc1;
										if (opc1==1){
											do{
											cout << "Que dato de la matriz m desea buscar?" << endl;
											cin >> dato;
											while (cin.fail()){
											cout << "Debe ingresar los valores numericos"<< endl;
											cin.clear();
											cin.ignore(1000, '\n');
											cin >> dato;
											}
											encuentra=false;
											for (int i=0; i<rows1; i++){
												for (int j=0; j<column1; j++){
													if (dato==matrix1[i][j]){
													fila= i;
													columna= j;
													encuentra = true;
														
													}
												}
												if (encuentra) break;
											}
										if (encuentra==true){
											cout<< "El dato " << dato << " esta en la columna " << columna+1 << " y en la fila " << fila+1 << endl;
											} else {
												cout << "El dato no se encuentra en la matriz" << endl;
												cout << "Intente de nuevo" << endl;
												}
											} while (!encuentra);
						 	
										} else if (opc1==2){
										do{
											cout << "Que dato de la matriz n desea buscar?" << endl;
											cin >> dato;
											while (cin.fail()){
											cout << "Debe ingresar los valores numericos"<< endl;
											cin.clear();
											cin.ignore(1000, '\n');
											cin >> dato;
											}
											encuentra=false;
											for (int i=0; i<rows2; i++){
												for (int j=0; j<column2; j++){
												if (dato==matrix2[i][j]){
												fila= i;
												columna= j;
												encuentra = true;
												break;	
												}
											}
											if (encuentra) break;
											_getch ();
											}
											if (encuentra==true){
												cout<< "El dato " << dato << " esta en la columna " << columna+1 << " y en la fila " << fila+1 << endl;
											} else {
												cout << "El dato no se encuentra en la matriz" << endl;
												cout << "Intente de nuevo" << endl;
											}
											} while (!encuentra);
										}
												
									}
									
							
					} else if (opcion1==3){
						cout << "Volviendo al menu anterior..." << endl;
						_getch();
						system ("cls");
						continue;
						}
						
						do {
					
							cout << "Que operacion desea hacer con las matrices: " << endl;
							cout << "1. suma" << endl;
							cout << "2. multiplicacion" << endl;
							cout << "3. transpuesta" << endl;
							cout << "4. Regresar al menu principal" << endl;
							cin >> opcion2;
							while(cin.fail()|| opcion2<1 || opcion1>4){
								cout<< "Ingrese los valores indicados en el menu" << endl;
							cin.clear();
							cin.ignore(1000, '\n');
							cin >> opcion2;
							}
							system ("cls");
								
							switch (opcion2){ // realizara la suma
								case 1:
									if (rows1==rows2 && column1==column2){ // se indica la concidion que filas y columnas deben ser iguales para realizar la operacion
									for (int i=0; i<rows1; i++){
									for (int j=0; j<column1; j++){
										matrixr [i][j]= matrix1[i][j]+matrix2[i][j];
										}
									}
									cout << "La suma es: \n";
									for (int i=0; i<rows2; i++){
									for (int j=0; j<column2; j++){
									cout << setw (3)<< matrixr [i][j] << " ";
										}
										cout << "\n";
									}
									} else {
									cout << "Solo se pueden sumar matrices que tengan las mismas dimensiones u.u" << endl;
									}
										cout << "Desea buscar un valor en la matriz: " << endl;
										cout << "1. Si" << endl;
										cout << "2. No" << endl;
										cin >> opc;
										while (cin.fail()|| opc<1 || opc>2){
										cout << "Ingrese la opcion indicada en el menu";
										cin.clear();
										cin.ignore(1000, '\n');
										cin >> opc;
										}
										if (opc==1){
												do{
												cout << "Que dato de la matriz m+n desea buscar?" << endl;
												cin >> dato;
											while (cin.fail()){
											cout << "Debe ingresar los valores numericos"<< endl;
											cin.clear();
											cin.ignore(1000, '\n');
											cin >> dato;
											}
												encuentra=false;
												for (int i=0; i<rows1; i++){
													for (int j=0; j<column1; j++){
														if (dato==matrixr[i][j]){
														fila= i;
														columna= j;
														encuentra = true;
														break;	
														}
													}
													if (encuentra) break;
												}
										if (encuentra==true){
											cout<< "El dato " << dato << " esta en la columna " << columna+1 << " y en la fila " << fila+1 << endl;
											} else {
											cout << "El dato no se encuentra en la matriz" << endl;
											cout << "Intente de nuevo" << endl;
											}
											} while (!encuentra);
									 	}
									break;
									_getch ();
								case 2: // multiplicacion
									int i, j, k, matrixmn[100][100];
									if (column1==rows2){ // establece que las columnas de la matriz m debe ser igual a las filas de la matriz n
										for (i=0; i<rows1; i++){
											for(j=0; j<column2; j++){
												matrixmn[i][j]=0;
												for (k=0; k<column1; k++)
											{
												matrixmn[i][j]+=matrix1 [i][k]*matrix2[k][j];
												}
											}
										}
										cout << "La matriz mxn resultante es: " << endl;
										for (i=0; i<rows1; i++){
											for(j=0; j<column2; j++){
												cout<< setw (3) << matrixmn [i][j]<< " ";
											}
											cout << "\n";
										}
									}else 	{
										cout << "El numero de columnas de m debe ser igual al de filas de n u.u"<< endl;
									}
										cout << "Desea buscar un valor en la matriz: " << endl;
										cout << "1. Si" << endl;
										cout << "2. No" << endl;
										cin >> opc;
										while (cin.fail()|| opc<1 || opc>2){
											cout << "Ingrese la opcion indicada en el menu";
										cin.clear();
										cin.ignore(1000, '\n');
										cin >> opc;
										}
										if (opc==1){
												do{
												cout << "Que dato de la matriz mxn desea buscar?" << endl;
												cin >> dato;
												while (cin.fail()){
												cout << "Debe ingresar los valores numericos"<< endl;
												cin.clear();
												cin.ignore(1000, '\n');
												cin >> dato;
												}
												encuentra=false;
												for (int i=0; i<rows1; i++){
													for (int j=0; j<column1; j++){
														if (dato==matrixmn[i][j]){
														fila= i;
														columna= j;
														encuentra = true;
														break;	
														}
													}
													if (encuentra) break;
													}
												if (encuentra==true){
													cout<< "El dato " << dato << " esta en la columna " << columna+1 << " y en la fila " << fila+1 << endl;
												} else {
													cout << "El dato no se encuentra en la matriz" << endl;
													cout << "Intente de nuevo" << endl;
													}
													} while (!encuentra);
									 	}
									break;
									_getch ();
								case 3:
									int opcion3;
									cout << "___________________________________________"<< endl;
									cout << "| 1. Hacer la transpuesta de la matriz m    |" << endl;
									cout << "| 2. Hacer la transpuesta de la matriz n    |" << endl;
									cout << "| 3. Hacer la transpuesta de la matriz m y n|" << endl;
									cout << "| 4. Regresar al menu                       |" << endl;
									cout << "|___________________________________________|" << endl;
									cin >> opcion3;
									while (cin.fail()|| opcion3<1 || opcion3>4){
									cout << "Ingrese una de las opciones indicadas en el menu" << endl;
									cin.clear();
									cin.ignore(1000, '\n');
									cin >> opcion3;
									}
									if (opcion3==1){
										cout << "La transpuesta de la matriz m es: " << endl;
										for (j=0; j<column1; j++){
											for (i=0; i<rows1; i++){
												cout << matrix1 [i][j] << " ";
											}
											cout << "\n";
										}
										cout << "Desea buscar un valor en la matriz: " << endl;
										cout << "1. Si" << endl;
										cout << "2. No" << endl;
										cin >> opc;
										while (cin.fail()|| opc<1 || opc>2){
											cout << "Ingrese un valor indicado en el menu" << endl;
										cin.clear();
										cin.ignore(1000, '\n');
										cin >> opc;
										}
										if (opc==1){
												do{
												cout << "Que dato de la matriz m desea buscar?" << endl;
												cin >> dato;
												while (cin.fail()){
												cout << "Debe ingresar los valores numericos"<< endl;
												cin.clear();
												cin.ignore(1000, '\n');
												cin >> dato;
												}
												encuentra=false;
												for (int j=0; j<rows1; j++){
													for (int i=0; i<column1; i++){
														if (dato==matrix1[i][j]){
														fila= i;
														columna= j;
														encuentra = true;
														break;	
														}
													}
													if (encuentra) break;
													_getch ();
													}
													if (encuentra==true){
													cout<< "El dato " << dato << " esta en la columna " << columna+1 << " y en la fila " << fila+1 << endl;
													} else {
														cout << "El dato no se encuentra en la matriz" << endl;
														cout << "Intente de nuevo" << endl;
													}
													} while (!encuentra);
												}
									 			break;
										} else if (opcion3==2){
											cout << "La transpuesta de la matriz n es: " << endl;
											for (j=0; j<column2; j++){
												for (i=0; i<rows2; i++){
													cout << matrix2 [i][j] << " ";
												}
												cout << "\n";
											}
											cout << "Desea buscar un valor en la matriz: " << endl;
											cout << "1. Si" << endl;
											cout << "2. No" << endl;
											cin >> opc;
											while (cin.fail()|| opc<1 || opc>2){
											cout << "Ingrese la opcion indicada en el menu";
											cin.clear();
											cin.ignore(1000, '\n');
											cin >> opc;
										}
											if (opc==1){
												do{
												cout << "Que dato de la matriz m+n desea buscar?" << endl;
												cin >> dato;
												while (cin.fail()){
												cout << "Debe ingresar los valores numericos"<< endl;
												cin.clear();
												cin.ignore(1000, '\n');
												cin >> dato;
												}
												for (int j=0; j<rows2; j++){
													for (int i=0; i<column1; i++){
														if (dato==matrix2[i][j]){
														fila= i;
														columna= j;
														encuentra = true;
														break;	
														}
													}
													if (encuentra) break;
													_getch ();
													}
													if (encuentra==true){
														cout<< "El dato " << dato << " esta en la columna " << columna+1 << " y en la fila " << fila+1 << endl;
													} else {
													cout << "El dato no se encuentra en la matriz" << endl;
													cout << "Intente de nuevo" << endl;
													}
													} while (!encuentra);
									 			}
									 			break;
										} else if (opcion3==3){
											cout << "La transpuesta de la matriz m es: " << endl;
												for (j=0; j<column1; j++){
													for (i=0; i<rows1; i++){
													cout << matrix1 [i][j] << " ";
													}
													cout << "\n";
												}	
									
											cout << "La transpuesta de la matriz n es: " << endl;
												for (j=0; j<column2; j++){
													for (i=0; i<rows2; i++){
													cout << matrix2 [i][j] << " ";
													}
													cout << "\n";
												}
										}while (opcion2 !=0);	
										break;
										default:
										cout << "Opcion invalida" << endl;
										_getch ();
										system ("cls");
								}
								break;
							case 4:
								cout << "Regresando al menu principal..." << endl;
								break;
							default: 
								cout << "Opcion invalida" << endl;
					
					
				}while (opcion2 !=0);
				break;
				case 2:
						cin.ignore();
						cout << "Escriba una oracion" << endl;
						getline(cin, oracion); // get line nos servira para poder escribir una oracion y que sea el cin para realizar las opciones del menu
					
						cout << "______________________________________________________" << endl;
						cout << "| Que opcion dese realizar con la oracion ingresada: |" << endl;
						cout << "| 1. Contar las palabras que contiene la oracion     |" << endl;
						cout << "| 2. Ordenar alfabeticamente los caracteres          |" << endl;
						cout << "| 3. Detectar una subcadena                          |" << endl;
						cout << "| 4. Verificar palindromo                            |" << endl;
						cout << "|____________________________________________________|" << endl;
						cin >> opcion3;
						while(cin.fail()||opcion3<1 || opcion3>4){
							cout << "Ingrese una opcion indicada en el menu" << endl;
						cin.clear();
						cin.ignore(1000, '\n');
						cin>>opcion3;
								}
						system ("cls");
						if (opcion3==1){ // cotaremos palabras
							stringstream ss(oracion); // divide la cadena por espacios
							string palabra;
							int contador =0; // utilizamos el contador para ver la posicion, las palabras que se extraigan haran aumentar el contador
							while (ss >> palabra){
								contador++;
							}
							cout << "La oracion \"" << oracion << "\" tiene " << contador << " palabras" << endl;
							cout << "Presione cualquier tecla para regresar al menu principal" << endl;
							_getch();
							system ("cls");
						} else if (opcion3==2){ // ordenar la palabra
						system ("cls");
						oracion1=oracion;
						sort(oracion1.begin(), oracion1.end()); // ordena los caracteres alfabeticamente de nuestra oracion
						
							cout << "La oracion ordendad alfabeticamente es: " << endl;
							cout << oracion1 << endl;
							cout << "Presione cualquier tecla para regresar al menu principal" << endl;
							_getch();
							system ("cls");
						} else if (opcion3==3){ // subcadena
							cin.ignore();
							cout << "Ingrese la subcadena que desea buscar" << endl;
							
							getline(cin, oracion2);
						size_t pos=oracion.find(oracion2); // busca la subcadena y find() devuelve la posicion donde esta se encuentre
						if (pos != string :: npos) {
							cout << "La subcadena \"" << oracion2; 
							cout << "\" esta en la posicion " << pos + 1 << endl;
							cout << "Presione enter para regresar al menu" << endl;
						} else {
							cout << "La subcadena no es parte de la oracion" << endl;
							cout << "Presione enter para regresar al menu" << endl;
						}
						_getch ();
						system ("cls");
						} else if (opcion3==4){ // palindromos
						oracion3=oracion;
							transform(oracion3.begin(), oracion3.end(), oracion3.begin(), :: tolower);
						string sinespacio;
						sinespacio = "";
						for (int i=0; i<oracion.size(); i++){
							if (oracion [i] != ' '){
								sinespacio += oracion[i]; // elimina los espacion y reacomoda la oracion para verificar si es un palindromo
							}
						}
						
						bool palindromo = true;
						int n= sinespacio.size();
						
						for (int i=0; i<n/2; i++) {
							if (sinespacio [i] != sinespacio[n-1-i]){
								palindromo=false;
								break;
							}
						}
						if (palindromo){
							cout << "La oracion: " << oracion << endl;
							cout << "Si es un palindromo." << endl;
							cout << "Presione enter para regresar al menu";
						}else{
							cout << "La oracion: " << oracion << endl;
							cout << "No es un palindromo" << endl;
							cout << "Presione enter para regresar al menu" << endl;
						}
						_getch();
						system("cls");
						}	
					break;
				case 3:
					cout << "Hasta luego u.u" << endl;
					
					break;
					cout << "Opcion invalida" << endl;
			}
		}while (opcion !=3);
			 
	return 0;
	
	}
