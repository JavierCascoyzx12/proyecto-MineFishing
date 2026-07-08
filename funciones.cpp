#include <iostream>
#include "funciones.h"
#include <string>
#include <fstream>
using namespace std;

    

void inicializarJuego(Juego & j) {
    cout << "======================================" << endl;
    cout << "          BIENVENIDO A MINEFISHING         " << endl;
    cout << "======================================" << endl;
    cout << "Comandos disponibles: 1. !bank, 2. !deposit, 3. !retirar, 4. !shop, 5. !mine, 6. !mine2, 7. !mine3, 8. !fish, 9. !fish2, 10. !fish3  11. !crime, 12. !use, 13. !yunque, 14. !play, 15. !bag, 16. !help" << endl;
    cout << "Otras opciones: 17. cargar partida o borrar partida" << endl;
    cout << "Su objetivo es conseguir la pet que esta disponible en la tienda" << endl;
    cout << "Escribe cualquier otra cosa para salir del juego y guardar progreso." << endl;
  
}

void caso1(Juego & j){
    cout << "Tu dinero en el banco es: " << j.dineroB << endl;
                cout << "Efectivo: " << j.moneda << endl;
   
}

void caso2(Juego & j){
    int dinerodepo;
            cout << "¿Cuánto dinero va a depositar?: ";
            cin >> dinerodepo;
            cin.ignore();

            if (j.moneda >= dinerodepo) {
                j.dineroB = j.dineroB + dinerodepo;
                j.moneda = j.moneda - dinerodepo;
                cout << "Transaccion exitosa. Mostrar dinero de la cuenta de banco: " << j.dineroB << endl;
            } else {
                cout << "Dinero insuficiente en efectivo." << endl;
            }
}

void caso3(Juego & j){
    cout << "¿Cuánto dinero va a retirar?: ";
            cin >> j.dinerore;
            cin.ignore();
            
            if (j.dineroB >= j.dinerore) {
                j.dineroB = j.dineroB - j.dinerore;
                j.moneda = j.moneda + j.dinerore;
                cout << "Retiro exitoso. Mostrar dinero de la cuenta de banco: " << j.dineroB << endl;
            } else {
                cout << "Fondos insuficientes en el banco." << endl;
            }
}

void caso3crimea(Juego & j){
    cout << "haz logrado entrar a la deep web, recibes 200 monedas y 5 de jade" << endl;
                j.moneda = j.moneda + 200;
                j.jade = j.jade + 5;
   
}

bool dineroSuficiente(int dinero, int precio) {
    if (dinero >= precio)
        return true;
    else
        return false;
}

void caso4a(Juego & j){
                        if (j.gusa < 1) {
                        if (dineroSuficiente(j.moneda, 400)) { 
                            j.moneda = j.moneda - 400;
                            j.gusa++;
                            j.gusano = true;
                            cout << "Compra exitosa. Tienes un gusano." << endl;
                        } else {
                            cout << "Dinero insuficiente." << endl;
                        }
                    } else {
                        cout << "No se pueden comprar mas gusanos." << endl;
                    }
                       
}

void caso4b(Juego & j){
    if (j.pica2 < 1 || j.usos_pica2 >= 3) {
                    if (dineroSuficiente(j.moneda, 150)) {
                        j.moneda = j.moneda - 150;
                        j.pica2++;
                        j.usos_pica2 = 0;
                        cout << "Compra exitosa. Tienes una nueva Pica nivel 2." << endl;
                    } else {
                        cout << "Dinero insuficiente." << endl;
                    } } else {
                        cout << "Ya tienes una Pica nivel 2, compra otra cuando se rompa." << endl;
                    }
}

void caso4c(Juego & j){
    if (j.cana2 < 1 || j.usos_cana2 >= 3) {
                    if (dineroSuficiente(j.moneda, 150)) {
                        j.moneda = j.moneda - 150;
                        j.cana2++;
                        j.usos_cana2 = 0;
                        cout << "Compra exitosa. Tienes una nueva Cana nivel 2." << endl;
                    } else {
                        cout << "Dinero insuficiente." << endl;
                    } } else {
                        cout << "Ya tienes una Cana nivel 2, compra otra cuando se rompa." << endl;
                    }
}

void caso4d(Juego & j){
     if (j.linter < 1) {
                        if (dineroSuficiente(j.moneda, 400)) {
                            j.moneda = j.moneda - 400;
                            j.linter++;
                            j.linterna = true;
                            cout << "Compra exitosa. Adquiriste una linterna." << endl;
                        } else {
                            cout << "Dinero insuficiente." << endl;
                        }
                    } else {
                        cout << "Ya tienes una linterna, no necesitas mas." << endl;
                    }
}

void caso4e(Juego & j){
    if (j.vid < 1) {
                    if (dineroSuficiente(j.moneda, 1500)) {
                        j.moneda = j.moneda - 1500;
                        j.vid++;
                        j.vida = true;
                        cout << "Compra exitosa. Tienes una vida extra." << endl;
                    } else {
                        cout << "Dinero insuficiente." << endl;
                    }
                } else {
                    cout << "Ya tienes una vida extra, no necesitas mas." << endl;}
}

void caso4f(Juego & j){
    if (j.yunque < 1) {
                    if (dineroSuficiente(j.moneda, 1800)) {
                        j.moneda = j.moneda - 1800;
                        j.yunque++;
                        cout << "Compra exitosa. Tienes un yunque." << endl;
                    } else {
                        cout << "Dinero insuficiente." << endl;
                    } 
                } else {
                    cout << "Ya tienes un yunque, no necesitas mas." << endl;}
}

bool expSuficiente(int exp, int precio) {
    if (exp >= precio)
        return true;
    else
        return false;
}

void caso4g(Juego & j){
                if(j.pet < 1){
                    if (dineroSuficiente (j.petcoin,10000)) {
                        if (expSuficiente(j.exp, 10000)) {
                            j.petcoin = j.petcoin - 10000;
                            j.exp = j.exp - 10000;
                            cout << "tienes una pet :)" << endl;
                            j.pet++;
                        } else {
                            cout << "Exp insuficiente." << endl;
                        }
                    } else {
                        cout << "petcoins insuficientes." << endl;
                    }
                        } else {
                        cout << "Ya tienes una pet, no necesitas mas." << endl;
                    }
}

void Minea(Juego & j){
    if(j.linterna2 == true){
                    cout << "Haz recibido 107 monedas, 20 oro y 67 pet coins" << endl;
                    j.moneda = j.moneda + 107;
                    j.oro = j.oro + 20;
                    j.petcoin = j.petcoin + 67;
                    j.exp = j.exp + 100;
                } else {
                    cout << "Haz recibido 40 monedas" << endl;
                    j.moneda = j.moneda + 40;
                    j.exp = j.exp + 300;   
                }
}

void Mineb(Juego & j){
     {
                if (j.usos_pica2 < 30) {
                    if (j.pica2 > 0) { 
                        if (j.linterna2 == true) {
                            cout << "Haz recibido 167 monedas y 67 pet coins y 20 de oro extra por la linterna" << endl;
                            j.moneda = j.moneda + 167;
                            j.petcoin = j.petcoin + 67;
                            j.oro = j.oro + 20;
                            j.exp = j.exp + 100;
                        } else {
                            cout << "Haz recibido 200 monedas y 67 pet coins" << endl;
                            j.moneda = j.moneda + 200;
                            j.petcoin = j.petcoin + 67;
                            j.exp = j.exp + 100;
                        }
                        j.usos_pica2++;
                    } else {
                        cout << "compre la pica2 primero" << endl;
                    }
                } else {
                    cout << "se ah roto tu pica, compra otra" << endl;
                }
                }
}

void Minec(Juego & j){
      {
                if (j.usos_pica3 < 60) {
                    if (j.pica3 > 0) { 
                        if (j.linterna2 == true) {
                            cout << "Haz recibido 267 monedas y 67 pet coins y 20 de oro extra por la linterna" << endl;
                            j.moneda = j.moneda + 267;
                            j.petcoin = j.petcoin + 67;
                            j.oro = j.oro + 20;
                            j.exp = j.exp + 100;
                        } else {
                            cout << "Haz recibido 200 monedas 67 pet coins" << endl;
                            j.moneda = j.moneda + 200;
                            j.petcoin = j.petcoin + 67;
                            j.exp = j.exp + 100;
                        }
                        j.usos_pica3++;
                    } else {
                        cout << "compre la pica3 primero" << endl;
                    }
                } else {
                    cout << "se ah roto tu pica, compra otra" << endl;
                }
                    }
}

void usecaso2(Juego & j){
    if(j.linterna == true){
                    cout<<"el buff linterna se ah activado valla a minar";
                    j.linterna2 = true;
                    j.linterna = false;
                    
                }  else{
                    cout<<"compre primero la linterna";
} }

void Pesca(Juego & j){
    if(j.gusano2 == true){
                    cout << "Haz recibido 107 monedas y 20 de jade" << endl;
                    j.moneda = j.moneda + 107;
                    j.jade = j.jade + 20;
                    j.exp = j.exp + 300;
                } else {
                    cout << "Haz recibido 40 monedas" << endl;
                    j.moneda = j.moneda + 40;
                    j.exp = j.exp + 300;   
                }
}

void pescaB(Juego & j){
     {
                if (j.usos_cana2 < 30) {
                    if (j.cana2 > 0) { 
                        if (j.gusano2 == true) {
                            cout << "Haz recibido 167 monedas y 20 de jade por la linterna" << endl;
                            j.moneda = j.moneda + 167;
                            j.jade = j.jade + 20;
                            j.exp = j.exp + 300;
                        } else {
                            cout << "Haz recibido 100 monedas" << endl;
                            j.moneda = j.moneda + 100;
                            j.exp = j.exp + 100;
                        }
                        j.usos_cana2++;
                    } else {
                        cout << "compre la cana2 primero" << endl;
                    }
                } else {
                    cout << "se ah roto tu cana, compra otra" << endl;
                }
                }
}

void pescaC(Juego & j){
    {
                if (j.usos_cana3 < 60) {
                    if (j.cana3 > 0) { 
                        if (j.gusano2 == true) {
                            cout << "Haz recibido 267 monedas y 20 de jade por la linterna" << endl;
                            j.moneda = j.moneda + 267;
                            j.jade = j.jade + 20;
                            j.exp = j.exp + 300;
                        } else {
                            cout << "Haz recibido 200 monedas" << endl;
                            j.moneda = j.moneda + 200;
                            j.exp = j.exp + 100;
                        }
                        j.usos_cana3++;
                    } else {
                        cout << "compre la cana3 primero" << endl;
                    }
                } else {
                    cout << "se ah roto tu cana, compra otra" << endl;
                }
                }
}

void Robarbanco(Juego & j){
    if(j.robado == true){
                    cout << "Ya haz robado/intentado robar el banco una vez, no puedes volver a hacerlo." << endl;
                } else {
                j.flag = true;
                while (j.flag == true){
                    for(int i=0; i <= 3; i++){
                        cout << "digite la clave de la caja fuerte:";
                        cin >> j.clave;
                        if(j.clave == j.clavecorrecta){
                            cout << "haz ingresado a la caja fuerte" << endl;
                            j.moneda = j.moneda + 200;
                            j.jade = j.jade + 5;
                            cout << "haz encontrado 200 monedas y 5 de jade" << endl;
                            j.robado = true;
                            j.flag = false;
                            break;

                        } else {
                            if(i==3){
                                if(j.vida2 == true){
                                    cout << "te haz salvado por obra del destino, los dioses te perdonaron la vida";
                                    j.vida2 = false;
                                    j.vid = 0;

                                } else {
                                    cout << "haz muerto, todo tu dinero se perdio";
                                    j.moneda = 0;
                                    j.jade = 0;
                                    j.oro = 0;
                                }
                                j.robado = true;
                                j.flag = false;
                            }
                        }
                    }
                }
                }
}

void hackear(Juego & j){
    cout << "ingrese el codigo de programacion Tomct o Jerryct:";
                cin >> j.codigo;
                if(j.codigo == j.codigoC){
                    cout << "haz hackeado roblox por eso recibes 200 monedas y 5 de oro" << endl;
                    j.moneda = j.moneda + 200;
                    j.oro = j.oro + 5;
                    return;
                } else {
                    if(j.vida2 == true){
                        cout << "te haz salvado por obra del destino, los dioses te perdonaron la vida";
                        j.vida2 = false;
                        j.vida = 0;

                    } else {
                        cout << "haz muerto, todo tu dinero se perdio";
                        j.moneda = 0;
                        j.jade = 0;
                        j.oro = 0;
                    }
                }
}

void caso3crimeb(Juego & j){
   cout << "te han doxxeado tu cuenta" << endl;
                if(j.vida2 == true){
                    cout << "te haz salvado por obra del destino, los dioses te perdonaron la vida";
                    j.vida2 = false;
                    j.vid = 0;
                    return;

                } else {
                    cout << "haz muerto, todo tu dinero se perdio";
                    j.moneda = 0;
                    j.jade = 0;
                    j.oro = 0;
                } }

void caso3crimec(Juego & j){
    cout << "los anonimus andaban de buenas, solo te quitaran 200 monedas" << endl;
                j.moneda = j.moneda - 200;
                if(j.moneda <= 0){
                    cout << "los anonimus te han quitado todo por no tener monedas y ahora tienes dinero negativo";
                    j.jade = 0;
                    j.oro = 0;
                    j.petcoin = 0;
                } 
}

void caso3crimed(Juego & j){
    cout << "no es un navegador, pero los anonimus al ver que usaste pabloAI te dieron 5 monedas" << endl;
                j.moneda = j.moneda + 5;
}

void usecaso1(Juego & j){
    if(j.gusano == true){
                    cout<<"el buff gusano se ha activado valla a pescar";
                    j.gusano2 = true;
                    j.gusano = false;
                    
                }
                else{
                    cout<<"compre primero el gusano";
                }
}

void usecaso3(Juego & j){
    if(j.vida == true){
                    cout<<"ahora estaras mas seguro el buff vida extra esta activo ";
                    j.vida2 = true;
                    j.vida = false;
                    
                }
                else{
                    cout<<"compre primero la vida extra";
                }
}

void yunque1(Juego & j){
    if (j.pica3<1){
                    if(j.moneda>=500 && j.oro>= 200){
                    j.pica3=1;
                    cout<<"Haz obtenido pica3"<<endl;
                    j.moneda= j.moneda-500;
                    j.oro= j.oro-200;
                
                    }
                    else{
                    cout<<"Faltan recursos"<<endl;
                    }
                 }
                    else{
                    cout<<"Solo puedes craftear una vez :)"<<endl;
                
                    }
}

void yunque2(Juego & j){
   if (j.cana3<1){
                            if(j.moneda>=500 && j.jade>= 200){
                                j.pica3=1;
                                cout<<"Haz obtenido caña3"<<endl;
                                j.moneda= j.moneda-500;
                                j.jade= j.jade-200;
                            }
                            else{
                                cout<<"Faltan recursos"<<endl;
                            }
                                }
                            else{
                            cout<<"Solo puedes craftear una vez :)"<<endl;
                            }
}

void play1(Juego & j){
    for (int i = 1; i <= 3; i++) {
                                    cout << j.preg[0] << endl;
                                    cout << "intento:" << i << " de 3: ";
                                    cin >> j.respond;

                                 if (j.respond == j.resp[0]) {
                                    cout << "Respuesta correcta. Ganaste 80 monedas." << endl;
                                    j.moneda += 80;
                                    break; 

                                    } else {
                                    cout << "Respuesta incorrecta." << endl;
                                    if (i == 3) {
                                    cout << "Se acabaron los intentos." << endl;
                                         }
                                     }
                                         }
}

void play2(Juego & j){
    {
                                      do {
                                         j.intentos++;
                                         cout << "Ingrese la contrasena (intento " << j.intentos << " de 5):" << endl;
                                         cin >> j.password;

                                     if (j.password == 6767) { 
                                     cout << "Password correcto, haz ganado 100 monedas" << endl;
                                     j.moneda = j.moneda + 100;
                                     break;
                                     } else {
                                     cout << "Password incorrecta" << endl;
                                     if (j.intentos == 5) {
                                        cout << "Se acabaron los intentos." << endl;
                                        return;
                                     }
                                     }
                                     } while (j.password != 6767);
                                     }
                                    

                                     
                                    } 

void bag(Juego & j){
                            cout << "tu inventario actual es: " << endl;
                            cout << "Monedas: " << j.moneda << endl;
                            cout << "Petcoins: " << j.petcoin << endl;
                            cout << "Oro: " << j.oro << endl;
                            cout << "Jade: " << j.jade << endl;
                            cout << "gusano: " << j.gusa << endl;
                            cout << "linterna: " << j.linter << endl;
                            cout << "vida extra: " << j.vida << endl;
                            cout << "pica2: " << j.pica2 << endl;
                            cout << "pica3: " << j.pica3 << endl;
                            cout << "cana2: " << j.cana2 << endl;
                            cout << "cana3: " << j.cana3 << endl;
                            cout << "exp: " << j.exp << endl;

}

void help(Juego & j){
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
}

void cargar(Juego & j){
      ifstream archivo("partida.txt");

    if(!archivo.is_open()){
        return;
    }

    archivo >> j.moneda;
    archivo >> j.dineroB;
    archivo >> j.petcoin;
    archivo >> j.exp;
    archivo >> j.oro;
    archivo >> j.jade;

    archivo >> j.gusa;
    archivo >> j.linter;
    archivo >> j.vid;
    archivo >> j.pet;

    archivo >> j.pica2;
    archivo >> j.pica3;
    archivo >> j.cana;
    archivo >> j.cana2;
    archivo >> j.cana3;

    archivo >> j.usos_pica2;
    archivo >> j.usos_pica3;
    archivo >> j.usos_cana2;
    archivo >> j.usos_cana3;

    archivo >> j.gusano;
    archivo >> j.gusano2;
    archivo >> j.linterna;
    archivo >> j.linterna2;
    archivo >> j.vida;
    archivo >> j.vida2;

    archivo >> j.robado;

    archivo.close();
}

void guardar(Juego & j){
      ofstream archivo("partida.txt");

    if(!archivo.is_open()){
        cout << "no se guardo :(." << endl;
        return;
    }

    archivo << j.moneda << endl;
    archivo << j.dineroB << endl;
    archivo << j.petcoin << endl;
    archivo << j.exp << endl;
    archivo << j.oro << endl;
    archivo << j.jade << endl;

    archivo << j.gusa << endl;
    archivo << j.linter << endl;
    archivo << j.vid << endl;
    archivo << j.pet << endl;

    archivo << j.pica2 << endl;
    archivo << j.pica3 << endl;
    archivo << j.cana << endl;
    archivo << j.cana2 << endl;
    archivo << j.cana3 << endl;

    archivo << j.usos_pica2 << endl;
    archivo << j.usos_pica3 << endl;
    archivo << j.usos_cana2 << endl;
    archivo << j.usos_cana3 << endl;

    archivo << j.gusano << endl;
    archivo << j.gusano2 << endl;
    archivo << j.linterna << endl;
    archivo << j.linterna2 << endl;
    archivo << j.vida << endl;
    archivo << j.vida2 << endl;

    archivo << j.robado << endl;

    archivo.close();
}

void borrarP(Juego & j){
      fstream archivo("partida.txt", ios::out | ios::trunc);

    if (!archivo.is_open())
    {
        cout << "No se pudo borrar la partida." << endl;
        return;
    }

    archivo.close();

    cout << "La partida ha sido borrada correctamente." << endl;
        j.moneda = 0;
     j.dineroB = 0;
     j.petcoin = 0;
     j.exp = 0;
     j.oro = 0;
     j.jade = 0;

    // Tienda
     j.gusa = 0;
     j.linter = 0;
     j.vid = 0;
     j.yunque = 0;
     j.pet = 0;

    // Herramientas
     j.pica2 = 0;
     j.pica3 = 0;
     j.cana = 1;
     j.cana2 = 0;
     j.cana3 = 0;

    // Usos
     j.usos_pica2 = 0;
     j.usos_pica3 = 0;
     j.usos_cana2 = 0;
     j.usos_cana3 = 0;

     j.gusano = false;
    j.gusano2 = false;
    j.linterna = false;
    j.linterna2 = false;
    j.vida = false;
    j.vida2 = false;


}

