#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <string>
using namespace std;

struct Juego{

    // Recursos
    int moneda = 0;
    int dineroB = 0;
    int petcoin = 0;
    int exp = 0;
    int oro = 0;
    int jade = 0;

    // Tienda
    int gusa = 0;
    int linter = 0;
    int vid = 0;
    int yunque = 0;
    int pet = 0;

    // Herramientas
    int pica2 = 0;
    int pica3 = 0;
    int cana = 1;
    int cana2 = 0;
    int cana3 = 0;

    // Usos
    int usos_pica2 = 0;
    int usos_pica3 = 0;
    int usos_cana2 = 0;
    int usos_cana3 = 0;

    // Variables auxiliares
    int compra = 0;
    int dinerore = 0;
    int password = 0;
    int intentos = 0;
    int opc = 0;

    // Buffs
    bool gusano = false;
    bool gusano2 = false;
    bool linterna = false;
    bool linterna2 = false;
    bool vida = false;
    bool vida2 = false;

    bool robado = false;
    bool flag = true;

    // Minijuegos
    string clave;
    string clavecorrecta = "gabriela";

    string codigo;
    string codigoC = "Jerryct";

    string preg[1] = {
        "Si la ecuacion del doble de x aumentado en 4 igualado a 0, ¿el resultado es 7?"
    };

    string resp[1] = {"falso"};
    string respond;
};

// Declaración de funciones
void inicializarJuego(Juego & j);
void caso1(Juego & j);
void caso2(Juego & j);
void caso3(Juego & j);
void caso3crimea(Juego & j);
bool dineroSuficiente(int dinero, int precio);
void caso4a(Juego & j);
void caso4b(Juego & j);
void caso4c(Juego & j);
void caso4d(Juego & j);
void caso4e(Juego & j);
void caso4f(Juego & j);
void caso4g(Juego & j);
bool expSuficiente(int exp, int precio);
void Minea(Juego & j);
void Mineb(Juego & j);
void Minec(Juego & j);
void usecaso2(Juego & j);
void Pesca(Juego & j);
void pescaB(Juego & j);
void pescaC(Juego & j);
void Robarbanco(Juego & j);
void hackear(Juego & j);
void caso3crimeb(Juego & j);
void caso3crimec(Juego & j);
void caso3crimed(Juego & j);
void usecaso1(Juego & j);
void usecaso3(Juego & j);
void yunque1(Juego & j);
void yunque2(Juego & j);
void play1(Juego & j);
void play2(Juego & j);
void bag(Juego & j);
void help(Juego & j);
void cargar(Juego & j);
void guardar(Juego & j);
void borrarP(Juego & j);
#endif // FUNCIONES_H