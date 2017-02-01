#include "Evaluador.h"
#include <iostream>
#include <math.h>  //Llamamos a la libreria math para poder usar librerias matematicas
using namespace std;

//Desrefencia ptr (dado) y devuelve su valor
int obtenerValor(int *ptr)
{
    return *ptr;
}

//Desreferencia a (dado) y b (dado) y devuelve la suma de ambos
int sumar(int* a, int* b)
{
    return *a+*b;
}

//Devuelve true si a (dado) y b (dado) apuntan al mismo espacio de memoria
bool compararApuntadores(string *a, string *b)
{
    if(a==b)
        return true;
        else{
                return false;

        }
}

//Desrefencia a (dado) y b (dado), devuelve true si ambos valores son iguales de lo contrario devuelve false
bool comparar(string *a, string *b)
{
    if(*a==*b)
    return true;
    else{
        return false;
    }
}

//Desreferencia a (dado) y devuelve su primera letra
char getPrimeraLetra(string* a)
{
    string b;
    b=*a;
    return b[0];
}

//Desreferencia a (dado) y devuelve true si es palindroma de lo contrario devuelve false
//Definicion de palindromo: http://es.wikipedia.org/wiki/Pal%C3%ADndromo
//Ejemplos de palindromos: Ana, arenera, arepera, anilina, ananá, Malayalam, Neuquén, Oruro, oso, radar, reconocer, rotor, salas, seres, somos, sometemos
bool esPalindromo(string* a)
{

string palindromo = *a;// apunta a un palindromo

if(palindromo==string//comprobamos  que el palindromo esta formada por una cadena de caracteres
(palindromo.rbegin(),palindromo.rend()))//De esta pagina se estudiaron los valores rbegin y rend http://www.cplusplus.com/reference/vector/vector/rend/  rbeging evalua la linea de caracteres (vuelve para evaluar)
    {
    return true;//retorna verdadero
    }
    else{//de lo contrario
            return false;//retorna a falso
            }
}

//Desreferencia base (dado) y exponente (dado) y devuelve la base elevado al exponente
int getExponente(int* base, int* exponente)
{
  int b=*base;//inicializa la varaiable b en la que se le asigna un puntero
int e=*exponente;//inicializa la variable e que se le asigna otro puntero
int respuesta = pow(b,e);//decimos que la respuesta va a ser la base usamos pow para elevarla al exponente la variable pow eleva la potencia http://www.cplusplus.com/reference/cmath/pow/

for(int i=0;i<(*exponente);i++)//evalua en un recorrido si i es menor que el valor que apunta el exponente

    return respuesta;//retorna la variable asignada respuesta
}



int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
