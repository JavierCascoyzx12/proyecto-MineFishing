#include <iostream>
#include <string>
#include <windows.h>

using namespace std;


int main() {
 SetConsoleOutputCP(CP_UTF8);
    string clave, clavecorrecta = "gabriela", codigo, codigoC = "Jerryct";
    string preg[1] = {"Si la ecuacion del doble de x aumentado en 4 igualado a 0, el resultado de la ecuacion es 7 "};
    string resp[1] = {"falso"};
    string respond;

    int moneda = 0, dineroB = 0, petcoin = 0, exp = 0, password = 0;
    int oro = 0, jade = 0, dinerore = 0, compra = 0;
    
    int  gusa = 0, linter = 0, vid= 0,yunque = 0, pet=0;
    int pica2 = 0, pica3 = 0, cana2 = 0, cana3 = 0, cana = 1, opc = 0;
    int usos_pica2 = 0, usos_pica3 = 0, usos_cana2 = 0, usos_cana3 = 0;

    char respuesta, navegador;
 
    bool gusano2 = false, linterna2 = false, vida2 = false, flag = true, robado = false, gusano= false, linterna=false, vida=false;

    int comando;
    bool jugar = true;

    cout << "======================================" << endl;
    cout << "          BIENVENIDO AL JUEGO         " << endl;
    cout << "======================================" << endl;
    cout << "Comandos disponibles: 1. !bank, 2. !deposit, 3. !retirar, 4. !shop, 5. !mine, 6. !mine2, 7. !mine3, 8. !fish, 9. !fish2, 10. !fish3  11. !crime, 12. !use, 13. !yunque, 14. !play, 15. !bag, 16. !help" << endl;
    cout << "Para usar items: !use gusano, !use linterna, !use vida" << endl;
    cout << "Escribe cualquier otra cosa para salir del juego." << endl;

    while (jugar){
        cout << "\n> Ingrese comando: ";
        cin >> comando;

        switch (comando){
            case 1:
                cout << "Tu dinero en el banco es: " << dineroB << endl;
                cout << "Efectivo: " << moneda << endl;
                break;

            case 2: 
            int dinerodepo;
            cout << "¿Cuánto dinero va a depositar?: ";
            cin >> dinerodepo;
            cin.ignore();

            if (moneda >= dinerodepo) {
                dineroB = dineroB + dinerodepo;
                moneda = moneda - dinerodepo;
                cout << "Transaccion exitosa. Mostrar dinero de la cuenta de banco: " << dineroB << endl;
            } else {
                cout << "Dinero insuficiente en efectivo." << endl;
            }
            break;

            case 3:
            cout << "¿Cuánto dinero va a retirar?: ";
            cin >> dinerore;
            cin.ignore();
            
            if (dineroB >= dinerore) {
                dineroB = dineroB - dinerore;
                moneda = moneda + dinerore;
                cout << "Retiro exitoso. Mostrar dinero de la cuenta de banco: " << dineroB << endl;
            } else {
                cout << "Fondos insuficientes en el banco." << endl;
            }
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
                    if (gusa < 1) {
                        if (moneda >= 400) { 
                            moneda = moneda - 400;
                            gusa++;
                            gusano = true;
                            cout << "Compra exitosa. Tienes un gusano." << endl;
                        } else {
                            cout << "Dinero insuficiente." << endl;
                        }
                    } else {
                        cout << "No se pueden comprar mas gusanos." << endl;
                    }
                    break;

                case 2:
                if (pica2 < 1 || usos_pica2 >= 3) {
                    if (moneda >= 150) {
                        moneda = moneda - 150;
                        pica2++;
                        usos_pica2 = 0;
                        cout << "Compra exitosa. Tienes una nueva Pica nivel 2." << endl;
                    } else {
                        cout << "Dinero insuficiente." << endl;
                    } } else {
                        cout << "Ya tienes una Pica nivel 2, compra otra cuando se rompa." << endl;
                    }
                    break;

                case 3:
                if (cana2 < 1 || usos_cana2 >= 3) {
                    if (moneda >= 150) {
                        moneda = moneda - 150;
                        cana2++;
                        usos_cana2 = 0;
                        cout << "Compra exitosa. Tienes una nueva Cana nivel 2." << endl;
                    } else {
                        cout << "Dinero insuficiente." << endl;
                    } } else {
                        cout << "Ya tienes una Cana nivel 2, compra otra cuando se rompa." << endl;
                    }
                    break;
                case 4:
                    if (linter < 1) {
                        if (moneda >= 400) {
                            moneda = moneda - 400;
                            linter++;
                            linterna = true;
                            cout << "Compra exitosa. Adquiriste una linterna." << endl;
                        } else {
                            cout << "Dinero insuficiente." << endl;
                        }
                    } else {
                        cout << "Ya tienes una linterna, no necesitas mas." << endl;
                    }
                    break;

                case 5:
                if (vida < 1) {
                    if (moneda >= 1500) {
                        moneda = moneda - 1500;
                        vida++;
                        cout << "Compra exitosa. Tienes una vida extra." << endl;
                    } else {
                        cout << "Dinero insuficiente." << endl;
                    }
                } else {
                    cout << "Ya tienes una vida extra, no necesitas mas." << endl;}
                    break;

                case 6:
                if (yunque < 1) {
                    if (moneda >= 1800) {
                        moneda = moneda - 1800;
                        yunque++;
                        cout << "Compra exitosa. Tienes un yunque." << endl;
                    } else {
                        cout << "Dinero insuficiente." << endl;
                    } 
                } else {
                    cout << "Ya tienes un yunque, no necesitas mas." << endl;}
                    break;

                case 7:
                if(pet < 1){
                    if (petcoin >= 10000) {
                        if (exp >= 10000) {
                            petcoin = petcoin - 10000;
                            exp = exp - 10000;
                            cout << "tienes una pet :)" << endl;
                            pet++;
                        } else {
                            cout << "Exp insuficiente." << endl;
                        }
                    } else {
                        cout << "petcoins insuficientes." << endl;
                    }
                        } else {
                        cout << "Ya tienes una pet, no necesitas mas." << endl;
                    }
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
                if(linterna2 == true){
                    cout << "Haz recibido 107 monedas, 20 oro y 67 pet coins" << endl;
                    moneda = moneda + 107;
                    oro = oro + 20;
                    petcoin = petcoin + 67;
                    exp = exp + 100;
                } else {
                    cout << "Haz recibido 40 monedas" << endl;
                    moneda = moneda + 40;
                    exp = exp + 300;   
                }
                break;

                case 6:
                {
                if (usos_pica2 < 30) {
                    if (pica2 > 0) { 
                        if (linterna2 == true) {
                            cout << "Haz recibido 167 monedas y 67 pet coins extra por la linterna" << endl;
                            moneda = moneda + 167;
                            petcoin = petcoin + 67;
                            oro = oro + 20;
                            exp = exp + 100;
                        } else {
                            cout << "Haz recibido 200 monedas y 67 pet coins" << endl;
                            moneda = moneda + 200;
                            petcoin = petcoin + 67;
                            exp = exp + 100;
                        }
                        usos_pica2++;
                    } else {
                        cout << "compre la pica2 primero" << endl;
                    }
                } else {
                    cout << "se ah roto tu pica, compra otra" << endl;
                }
                }
                break;

                    case 7:
                    {
                if (usos_pica3 < 60) {
                    if (pica3 > 0) { 
                        if (linterna2 == true) {
                            cout << "Haz recibido 267 monedas y 67 pet coins extra por la linterna" << endl;
                            moneda = moneda + 267;
                            petcoin = petcoin + 67;
                            oro = oro + 20;
                            exp = exp + 100;
                        } else {
                            cout << "Haz recibido 200 monedas y 67 pet coins" << endl;
                            moneda = moneda + 200;
                            petcoin = petcoin + 67;
                            exp = exp + 100;
                        }
                        usos_pica3++;
                    } else {
                        cout << "compre la pica3 primero" << endl;
                    }
                } else {
                    cout << "se ah roto tu pica, compra otra" << endl;
                }
                    }
                    break;

                case 8:
                if(gusano2 == true){
                    cout << "Haz recibido 107 monedas y 20 de jade" << endl;
                    moneda = moneda + 107;
                    jade = jade + 20;
                    exp = exp + 300;
                } else {
                    cout << "Haz recibido 40 monedas" << endl;
                    moneda = moneda + 40;
                    exp = exp + 300;   
                }
                break;

                case 9:
                {
                if (usos_cana2 < 30) {
                    if (cana2 > 0) { 
                        if (gusano2 == true) {
                            cout << "Haz recibido 167 monedas y 20 de jade por la linterna" << endl;
                            moneda = moneda + 167;
                            jade = jade + 20;
                            exp = exp + 300;
                        } else {
                            cout << "Haz recibido 100 monedas y 20 de jade" << endl;
                            moneda = moneda + 100;
                            exp = exp + 100;
                        }
                        usos_cana2++;
                    } else {
                        cout << "compre la cana2 primero" << endl;
                    }
                } else {
                    cout << "se ah roto tu cana, compra otra" << endl;
                }
                }
                break;

                case 10:
                {
                if (usos_cana3 < 60) {
                    if (cana3 > 0) { 
                        if (gusano2 == true) {
                            cout << "Haz recibido 267 monedas y 20 de jade por la linterna" << endl;
                            moneda = moneda + 267;
                            jade = jade + 20;
                            exp = exp + 300;
                        } else {
                            cout << "Haz recibido 200 monedas y 20 de jade" << endl;
                            moneda = moneda + 200;
                            exp = exp + 100;
                        }
                        usos_cana3++;
                    } else {
                        cout << "compre la cana3 primero" << endl;
                    }
                } else {
                    cout << "se ah roto tu cana, compra otra" << endl;
                }
                }
                break;

               case 11:
               cout << "escoja entre las siguientes opciones: " << endl;
               cout << "1. robar banco" << endl << "2.hackear" << endl << "3. meterse a la deep web"<< endl;
               cin >> opc;

               switch (opc){
                case 1:
                if(robado == true){
                    cout << "Ya haz robado el banco una vez, no puedes volver a hacerlo." << endl;
                } else {
                flag = true;
                while (flag == true){
                    for(int i=0; i <= 3; i++){
                        cout << "digite la clave de la caja fuerte:";
                        cin >> clave;
                        if(clave == clavecorrecta){
                            cout << "haz ingresado a la caja fuerte" << endl;
                            moneda = moneda + 200;
                            jade = jade + 5;
                            cout << "haz encontrado 200 monedas y 5 de jade" << endl;
                            robado = true;
                            flag = false;
                            break;

                        } else {
                            if(i==3){
                                if(vida2 == true){
                                    cout << "te haz salvado por obra del destino, los dioses te perdonaron la vida";
                                    vida2 = false;
                                    vida = 0;

                                } else {
                                    cout << "haz muerto, todo tu dinero se perdio";
                                    moneda = 0;
                                    jade = 0;
                                    oro = 0;
                                }
                                robado = true;
                                flag = false;
                            }
                        }
                    }
                }
                } break;

                case 2:
                cout << "ingrese el codigo de hackeo:";
                cin >> codigo;
                if(codigo == codigoC){
                    cout << "haz hackeado roblox por eso recibes 200 monedas y 5 de oro" << endl;
                    moneda = moneda + 200;
                    oro = oro + 5;
                    break;
                } else {
                    if(vida2 == true){
                        cout << "te haz salvado por obra del destino, los dioses te perdonaron la vida";
                        vida2 = false;
                        vida = 0;

                    } else {
                        cout << "haz muerto, todo tu dinero se perdio";
                        moneda = 0;
                        jade = 0;
                        oro = 0;
                    }
                }
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
                cout << "haz logrado entrar a la deep web, recibes 200 monedas y 5 de jade" << endl;
                moneda = moneda + 200;
                jade = jade + 5;
                break;

                case 'b':
                cout << "te han doxxeado tu cuenta" << endl;
                if(vida2 == true){
                    cout << "te haz salvado por obra del destino, los dioses te perdonaron la vida";
                    vida2 = false;
                    vida = 0;
                    break;

                } else {
                    cout << "haz muerto, todo tu dinero se perdio";
                    moneda = 0;
                    jade = 0;
                    oro = 0;
                }
                break;

                case 'c':
                cout << "los anonimus andaban de buenas, solo te quitaran 200 monedas" << endl;
                moneda = moneda - 200;
                break;

                case 'd':
                cout << "no es un navegador, pero los anonimus al ver que usaste pabloAI te dieron 5 monedas" << endl;
                moneda = moneda + 5;
                break;

                default:
                cout << "opcion invalida" << endl;
                break;
               } 
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
                    case 1: //gusano
                if(gusano == true){
                    cout<<"el buff gusano se ha activado valla a pescar";
                    gusano2 = true;
                }
                else{
                    cout<<"compre primero el gusano";
                }
                break;
                case 2: //linterna
                if(linterna == true){
                    cout<<"el buff linterna se ah activado valla a minar";
                    linterna2 = true;
                }
                else{
                    cout<<"compre primero la linterna";
                }
                break;
                case 3: //vida extra 
                if(vida == true){
                    cout<<"ahora estaras mas seguro el buff vida extra esta activo ";
                    vida2 = true;
                }
                else{
                    cout<<"compre primero la vida extra";
                }
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
                 if (pica3<1){
                    if(moneda>=300 && oro>= 200){
                    pica3=1;
                    cout<<"Haz obtenido pica3"<<endl;
                    moneda= moneda-500;
                    oro= oro-200;
                
                    }
                    else{
                    cout<<"Faltan recursos"<<endl;
                    }
                 }
                    else{
                 cout<<"Solo puedes craftear una vez :)"<<endl;
                
                    }
                    break;
                        case 2: //para caña3
                        if (cana3<1){
                            if(moneda>=300 && jade>= 200){
                                pica3=1;
                                cout<<"Haz obtenido caña3"<<endl;
                                moneda= moneda-500;
                                jade= jade-200;
                            }
                            else{
                                cout<<"Faltan recursos"<<endl;
                            }
                                }
                            else{
                            cout<<"Solo puedes craftear una vez :)"<<endl;
                            }
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
                                 for (int i = 1; i <= 3; i++) {
                                    cout << preg[0] << endl;
                                    cout << "intento:" << i << " de 3: ";
                                    cin >> respond;

                                 if (respond == resp[0]) {
                                    cout << "Respuesta correcta. Ganaste 80 monedas." << endl;
                                    moneda += 80;
                                    break; 

                                    } else {
                                    cout << "Respuesta incorrecta." << endl;
                                    if (i == 3) {
                                    cout << "Se acabaron los intentos." << endl;
                                         }
                                     }
                                         }
                                    break;

                                    case 'b':
                                      {
                                      int intentos = 0;
                                      do {
                                         intentos++;
                                         cout << "Ingrese la contrasena (intento " << intentos << " de 5):" << endl;
                                         cin >> password;

                                     if (password == 6767) { 
                                     cout << "Password correcto, haz ganado 100 monedas" << endl;
                                     moneda = moneda + 100;
                                     break;
                                     } else {
                                     cout << "Password incorrecta" << endl;
                                     if (intentos == 5) {
                                        cout << "Se acabaron los intentos." << endl;
                                        break;
                                     }
                                     }
                                     } while (password != 6767);
                                     }
                                     break;

                                     default:
                                    cout << "Opcion invalida" << endl; 
                                     break;
                                    }
                                    break;

                                        case 15:
                                        cout << "tu inventario actual es: " << endl;
                                        cout << "Monedas: " << moneda << endl;
                                        cout << "Petcoins: " << petcoin << endl;
                                        cout << "Oro: " << oro << endl;
                                        cout << "Jade: " << jade << endl;
                                        cout << "gusano: " << gusa << endl;
                                        cout << "linterna: " << linter << endl;
                                        cout << "vida extra: " << vida << endl;
                                        cout << "pica2: " << pica2 << endl;
                                        cout << "pica3: " << pica3 << endl;
                                        cout << "cana2: " << cana2 << endl;
                                        cout << "cana3: " << cana3 << endl;

                                        break;

                                        case 16:
                                        cout << " !mine: Se usa la pica 1 para minar, este mine es eterno." << endl;
                                        cout << " !fish: Se usa la caña 1 para pescar, igual que el mine, el fish es eterno" << endl;
                                        cout << " !shop: Es la tienda en la cual se encuentran los items mas importantes para progresar en el juego" << endl;
                                        cout << " !bank: muestra cuánto dinero tiene en efectivo y el dinero que tiene en una cuenta de banco." << endl;
                                        cout << " !deposit: Deposita cierta cantidad de dinero que posea el usuario en efectivo a la cuenta de banco (la cuenta tiene límite)" << endl;
                                        cout << " !retirar: Retira la cantidad de dinero que solicite el usuario, este retiro es de la cuenta de banco." << endl;
                                        cout << " !Yunque: Craftea la pica o caña que sea nivel 3 (material y +1000 de monedas). Para usar usa !use yunque" << endl;
                                        cout << "Gusano: Este es un buff en el cual al activarlo te da 67 monedas y jade que sirve para poder craftear una caña nivel 3. " << endl;
                                        cout << "Linterna: Al activarlo te da 67 monedas en cada usada, también te da oro sirve para poder craftear una pica nivel 3. " << endl;
                                        cout << "Vida: Tienes una oportunidad más de vida, por si estas en una situación en el cual pueda morir el jugador." << endl;
                                        cout << "Caña 2 : Se usa el comando !fish2, te da 100 monedas, límite de uso 30" << endl;
                                        cout << "Caña 3: Se usa el comando !fish3, te da 200 monedas, límite de uso 60." << endl;
                                        cout << "Pica 2: Se usa el comando !mine2, te da 100 monedas, lÍmite de uso 30" << endl;
                                        cout << "Pica 3: Se usa el comando !mine3, te da 200 monedas, límite de uso 60" << endl;
                                        cout << "bag: Se muestra los ítems que tienes, además puede cambiarlos de posición dependiendo de la preferencia." << endl;
                                        cout << "!crime: te muestra 3 opciones de crimen, en la cual debes elegir una dependiendo de tus acciones puedes morir o ganar mucho dinero" << endl;
                                        cout << "!help: muestra información necesaria";

                                        break;

                                        default:
                                        cout << "gracias por jugar";
                                        return 0;



                


                            }
                            

        
       
                            







            

            }

            
            

         return 0;   

        }


    










    


