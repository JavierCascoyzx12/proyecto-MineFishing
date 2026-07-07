#include <iostream>
#include <string>
#include "funciones.h"
#include <windows.h>


using namespace std;

int jugar = 1, comando = 0, compra = 0, opc = 0;
bool flag = true;
char navegador, respuesta, respuest;

Juego j;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    inicializarJuego (j);
    while (jugar){
        cout << "\n> Ingrese comando: ";
        cin >> comando;

        switch (comando){
                case 1:
                caso1(j);
                break;

                case 2: 
                caso2(j);
                break;

                case 3:
                caso3(j);
                break;

                case 4: 
                cout << "Bienvenido a la tienda, en este lugar encontraras los mejores items a los mejores precios.\n";
                cout << "¿Que desea comprar? (1.Gusano, 2.Pica2, 3.Cana2, 4.Linterna, 5.Vida, 6.yunque, 7.pet)\n> ";
                cin >> compra;
                cin.ignore();

                flag = true; 
                while(flag == true){
                switch (compra) {
                    case 1:
                    caso4a(j);
                    break;

                    case 2:
                    caso4b(j);
                    break;

                    case 3:
                    caso4c(j);
                    break;

                    case 4:
                    caso4d(j);
                    break;

                    case 5:
                    caso4e(j);
                    break;

                    case 6:
                    caso4f(j);
                    break;

                    case 7:
                    caso4g(j);
                    break;

                    default:
                    cout << "Opcion invalida, saliendo de la tienda." << endl;
                    break;
                    }
                    cout << "¿Desea comprar algo mas? (S/N)\n> ";                
                    cin >> respuesta;
                    if (respuesta == 'S' || respuesta == 's') {
                    cout << "¿Que desea comprar? (1.Gusano, 2.Pica2, 3.Cana2, 4.Linterna, 5.Vida, 6.yunque, 7.pet)\n> ";
                    cin >> compra;
                    cin.ignore();
                    } else if (respuesta == 'N' || respuesta == 'n') {
                    cout << "Gracias por su compra, vuelva pronto." << endl;
                    flag = false;
                    }
                    }
                    break;

                     case 5:
                    Minea(j);
                    break;

                    case 6:
                     Mineb(j);
                    break;

                    case 7:
                    Minec(j);
                    break;

                case 8:
                Pesca(j);
                break;

                case 9:
                pescaB(j);
                break;

                case 10:
                pescaC(j);
                break;

               case 11:
               cout << "escoja entre las siguientes opciones: " << endl;
               cout << "1. robar banco" << endl << "2.hackear" << endl << "3. meterse a la deep web"<< endl;
               cin >> opc;

               switch (opc){
                case 1:
                Robarbanco(j);
                 break;

                case 2:
                hackear(j);
                break;

                case 3:
                cout << "que navegador usara (solo respuesta correcta)?" << endl;
               cout << "a. tor" << endl;
               cout << "b. linux" << endl;
               cout << "c. onion browser" << endl;
               cout << "d. PabloAI" << endl;
               cin >> navegador;

               switch(navegador){
                case 'a':
                caso3crimea(j);
                break;

                case 'b':
                caso3crimeb(j);
                break;

                case 'c':
                caso3crimec(j);
                break;

                case 'd':
               caso3crimed(j);
                break;

                default:
                cout << "opcion invalida" << endl;
                break;
               }
               break;

                     default:
                    cout << "Opcion invalida" << endl; 
                    break;
               

               }
               break;

               case 12:
                cout<<"¿que buff desea activar?" <<endl;
                cout<<"1.!use gusano"<<endl;
                cout<<"2.!use linterna"<<endl;
                cout<<"3.!use vida extra"<<endl;
                cout<<"seleccione una opcion:"<<endl;
                cin>>opc;

                switch (opc)
                {
                    case 1: 
                    usecaso1(j);
                     break;

                    case 2: 
                    usecaso2(j);
                    break;

                    case 3: 
                    usecaso3(j);
                    break;


                    default:
                    cout<<"opcion invalida";
                    break;
                }

                break;

                case 13:
                while(true){
                cout<<"***Bienvenido a Yunque***" << endl;
                cout <<"Items: 1.Pica3, 2.Caña3" << endl;
                cout<<"¿Qué item desea craftear: ";
                cin>>opc;
                switch(opc){

                    case 1: //para pica3
                    yunque1(j);
                    break;

                        case 2: //para caña3
                            yunque2(j);
                            break;

                            default:
                            cout<<"Opción invalida"<<endl;
                            break;
                            }

                            cout<<"¿Deseas craftear de nuevo?(S/N): ";
                            cin>>respuesta;
                            if(respuesta == 'N' || respuesta == 'n'){
                            break;
                                }
                              break;  
                            }
                            break;

                            case 14:
                            cout << "¿que quiere jugar?" << endl;
                            cout << "a. resuelva la ecuacion" << endl << "b. adivina la contraseña" << endl;
                            cin >> respuesta;

                            switch(respuesta){
                                    case 'a':
                                    play1(j);
                                    break;

                                    case 'b':
                                    play2(j);
                                     break;

                                     default:
                                    cout << "Opcion invalida" << endl; 
                                     break;
                                    }
                                    break;

                            
                            case 15:
                            bag(j);
                            break;

                            case 16:
                            help(j);
                             break;
                             
                             case 17:
                             cout << "que desea hacer" << endl << "1. cargar partida" << endl << "2. borrar partida existente" << endl;
                             cin >> opc;
                             switch(opc){
                                case 1:
                                 cargar(j);
                                 break;

                                 case 2:
                                 borrarP(j);
                                 break;

                                 default:
                                 cout << "Opcion invalida" << endl;
                                 break;
                             }
                             
                             break;


                             default:
                             cout << "¿desea guardar la partida s/n?" << endl;
                             cin >> respuest;
                             if(respuest == 's' || respuest == 'S'){
                                guardar(j);
                                cout << "se ah guardado la partida, vuelva a jugar pronto :)";
                                return 0;
                             } else {
                                cout <<"vuelva pronto :)";
                                return 0;
                             }
                            
                    
            }
 

        }

        return 0;
    }








    


