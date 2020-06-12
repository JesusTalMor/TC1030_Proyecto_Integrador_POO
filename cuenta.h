/*
*
* Proyecto App "Riot Friends"
* Clase Cuenta
* Jesus Talamantes Morales   A01706335
* Actualización 11/06/2020
* Dentro de esta clase se guardan un arreglo de objetos de tipo jugador, en
* conjunto esta clase crea los objetos compouestos por la clase App
*
*/

#ifndef CUENTA_H
#define CUENTA_H

#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<cstdio>

#include"jugador.h" //biblioteca con objetos a usar de clase jugador

using namespace std;

class Cuenta{

    //Declaración de atributos de la clase
    private:
        string nickname;
        string correo; //Atributos necesarios para el inicio de sesion
        string contrasenia;
        int statusLogin;
        Jugador *juegos[4]; //Se define como un apuntador para realizar polimorfismo

    //Declaración de metodos de la clase
    public:
        //constructores
        Cuenta();
        Cuenta(string,string,string);
        Cuenta(string,string,string,LOL*,TFT*,LOR*,VAL*);

        //Getters y Setters
        string get_nickname(){return nickname;}
        string get_corr(){return correo;}
        string get_contr(){return contrasenia;}
        int get_status(){return statusLogin;}

        void set_corr(string corr){correo = corr;}
        void set_contr(string contr){contrasenia = contr;}
        void set_status(int statl){statusLogin = statl;}
        void set_nick(string nick) {nickname = nick;}

        void mostrarCuenta();
        void iniciarSesion();
        void actualizarJuegos();
        void mostrarJuegos();
        void mostrarJuegoEspecif(string);
        Jugador* get_juego(string);

};

/**
 * Contstructor por defecto, el cual crea objetos con todos sus atributos
 * vacios
 */

 Cuenta::Cuenta(){
    nickname = "SIN DATOS";
    correo = "SIN DATOS";
    contrasenia = "SIN DATOS";
    statusLogin = 0;
    juegos[0] = new LOL();
    juegos[1] = new TFT();
    juegos[2] = new LOR();
    juegos[3] = new VAL();
 }

/**
 * Constructor creado para la creación de de objetos de ususarios como tal
 * el cual te permite llenar tus datos, pero te genera en el arreglo de
 * objetos vacios que se podra rellenar mas tarde
 */

 Cuenta::Cuenta(string nick, string corr, string contr){
     nickname = nick;
     correo = corr;
     contrasenia = contr;
     statusLogin = 0;
     juegos[0] = new LOL();
     juegos[1] = new TFT();
     juegos[2] = new LOR();
     juegos[3] = new VAL();
 }

/**
 * Este es el constructor por completo, el cual utiliza agregacion para instanciar
 * los objetos dentro del juegos, se utilizará este constructor para generar los
 * ejemplos a usar
 */
 //Este constructor usa la creación de objetos por medio de agregacion en lugar de composicion
 Cuenta::Cuenta(string nick,string corr,string contr,LOL *lol1, TFT *tft1, LOR *lor1, VAL *val1){
     nickname = nick;
     correo = corr;
     contrasenia = contr;
     statusLogin = 1;
     juegos[0] = lol1;
     juegos[1] = tft1;
     juegos[2] = lor1;
     juegos[3] = val1;
 }


/**
 * mostrarCuenta toma los datos de nickname, y el estado de la cuenta, para
 * mostrar si la cuenta esta conectada o no.
 */

 void Cuenta::mostrarCuenta(){
    cout<<"***************************************************************"<<endl;
    cout<<"Nombre de la cuenta es: "<<nickname<<endl;
    cout<<"Estado: ";
    if(statusLogin == 1){
        cout<<"Conectado"<<endl;
    }
    else{
        cout<<"Desconectado"<<endl;
    }
    cout<<"***************************************************************"<<endl;
    cout<<"\n\n";
 }

 /**
 * iniciarSesion es un metodo para instanciar el valor de statusLogin en 1 conectado
 * o 0 desconectado, este valor será clave para filtrar datos mas adelante.
 */

 void Cuenta::iniciarSesion(){
     string contrP;
     int intentos = 3;
     do{
        fflush(stdin);
        cout<<"Digite su contrasenia: "; getline(cin,contrP);
        cout<<"-----------------------------------------------------------------"<<endl;;
        if(contrP == contrasenia){
            cout<<"-----------------------------------------------------------------"<<endl;
            cout<<"Inicio de sesion exitoso. Bienvenido: "<<nickname<<endl;
            cout<<"-----------------------------------------------------------------"<<endl;
            cout<<"\n\n";
            set_status(1);
            break;
        }
        else{
            intentos --;
            if(intentos > 0){
                cout<<"-----------------------------------------------------------------"<<endl;
                cout<<"La constrasenia es incorrecta. Intente nuevamente"<<endl;
                cout<<"-----------------------------------------------------------------"<<endl;
                cout<<"\n\n";
            }
        }
     }while(intentos > 0);
     if(intentos == 0){
        cout<<"-----------------------------------------------------------------"<<endl;
        cout<<"Ha excedido el numero de intentos permitidos."<<endl;
        cout<<"Intente mas tarde."<<endl<<endl;
        cout<<"-----------------------------------------------------------------"<<endl;
        cout<<"\n\n";
        set_status(0);
     }
 }

/**
 * actualizarJuegos permite al usuario, ya sea actualiza 1 o todos lo juegos
 * para rellenar los objetos vacios del arreglo juegos[] metodo usado despues de
 * la creacion de una cuenta
 */

 void Cuenta::actualizarJuegos(){
     int opcion = 0;
     system("cls"); //Funcion para limpiar la pantalla"
     cout<<"Bienvenido "<<nickname<<endl;
     while(opcion != 5){
         fflush(stdin);//Funcion para limpiar el espacio de memoria para escribir
         cout<<"-----------------------------------------------------------------"<<endl;
         cout<<"Seleccione el juego que desea actualizar"<<endl;
         cout<<"-----------------------------------------------------------------"<<endl;
         cout<<"1. League of Legends"<<endl;
         cout<<"2. Team Fight Tactics"<<endl;
         cout<<"3. Legends of Runeterra"<<endl;
         cout<<"4. Valorant"<<endl;
         cout<<"5. Terminar de actualizar"<<endl;
         cout<<"-----------------------------------------------------------------"<<endl;
         cin>>opcion;
         cout<<"-----------------------------------------------------------------"<<endl;
         cout<<"\n\n";
         switch(opcion){
            case 1: juegos[0]->actualizarJugador(); break;
            case 2: juegos[1]->actualizarJugador(); break;
            case 3: juegos[2]->actualizarJugador(); break;
            case 4: juegos[3]->actualizarJugador(); break;
            case 5: opcion = 5; break;
            default: cout<<"Opcion no valida"<<endl; break;
         }

     }

 }

/**
 * mostrarJuegos(), va en conjunto con mostrar cuenta para mostrar los juegos
 * que juega la cuenta
 */

 void Cuenta::mostrarJuegos(){
     int verf = 0;
     cout<<"***************************************************************"<<endl;
     cout<<"\tMOSTRANDO JUEGOS DE LA CUENTA "<<nickname<<endl;
     cout<<"***************************************************************"<<endl;
     for(int i=0;i<4;i++){
        if(juegos[i]->get_nomInv()!= "SIN DATOS"){
            juegos[i]->mostrarJugador();
            verf ++;
        }
     }
     if(verf == 0){
        cout<<"***************************************************************"<<endl;
        cout<<"\t\tSIN JUEGOS REGISTRADOS"<<endl;
        cout<<"***************************************************************"<<endl;
        cout<<"\n\n";
     }
 }

 /**
 * mostrarJuegoEspecif(), es una funcion que al igual que la funcion mostrarJuegos()
 * muestra los datos pero de un juego en especifico, mostrado por el uso de un string
 * que define el tipo
 */

 void Cuenta::mostrarJuegoEspecif(string tip){
     if(tip == juegos[0]->get_tipo()){
        juegos[0]->mostrarJugador();
     }
     else if(tip == juegos[1]->get_tipo()){
        juegos[1]->mostrarJugador();
     }
     else if(tip == juegos[2]->get_tipo()){
        juegos[2]->mostrarJugador();
     }
     else if(tip == juegos[3]->get_tipo()){
        juegos[3]->mostrarJugador();
     }
 }


 /**
 * get_juego(string) funciona como un getter que retorna un apuntador de
 * donde se encuentra el arreglo de objetos, diferenciando cada seccion del
 * arreglo por medio de tipo.
 */

 Jugador* Cuenta::get_juego(string tipo){
     if(tipo == juegos[0]->get_tipo()){
        return juegos[0];
     }
     else if(tipo == juegos[1]->get_tipo()){
        return juegos[1];
     }
     else if(tipo == juegos[2]->get_tipo()){
        return juegos[2];
     }
     else if(tipo == juegos[3]->get_tipo()){
        return juegos[3];
     }
 }

#endif // CUENTA_H
