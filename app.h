/*
*
* Proyecto App "Riot Friends"
* Clase App
* Jesus Talamantes Morales   A01706335
* Actualización 11/06/2020
* Esta clase es la principal para guardar los datos y realizar
* busquedas y agregar objetos al sistema.
* Esta funcion contará con metodos que se utilizaran en el main
*
*/

#ifndef APP_H
#define APP_H

#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<cstdio>

#include"cuenta.h" //Bibliotecas del objeto cuenta

using namespace std;

const int MAX = 100; //Constante para el tamaño de cuentas

class App{

    //Declaración de atributos de la clase
    private:

        Cuenta usuarios[MAX];
        int IDcuenta;
        int IDmain;
        int vali;

    //Declaracion de metodos de la clase
    public:
        //Constructor
        App(): IDcuenta(0){}; //Default

        //Getters y Setters
        int get_ID(){return IDcuenta;}
        void set_ID(int ID){IDcuenta = ID;}
        int get_IDmain() {return IDmain;}
        void set_IDmain(int IDm) {IDmain = IDm;}
        int get_vali() {return vali;}

        void crearEjemplos();
        void registrarCuenta();
        void mostrarCuentas();
        void mostrarCuentaEspecif();
        void buscarJugadores();
        void iniciarSesionGen();
        void actualizarCuentaM();
};

/**
 * crea_ejemplos genera objetos en Usuarios[]
 *
 * genera usuarios de ejemplo, los cuales tienen creados todos los juegos para
 * temas de poder realizar busquedas con todos los juegos
 */

 void App::crearEjemplos(){
   LOL *lol[IDcuenta];
   TFT *tft[IDcuenta];
   LOR *lor[IDcuenta];
   VAL *val[IDcuenta];
   lol[IDcuenta] = new LOL("LAN","Diem","Oro","Oro","https://lan.op.gg/summoner/userName=Diem");
   tft[IDcuenta] = new TFT("LAN","Diem","Plata");
   lor[IDcuenta] = new LOR("LAN","Diem","Bronce");
   val[IDcuenta] = new VAL("LAN","Diem","Bronce");
   usuarios[IDcuenta] = Cuenta("Diem","Diem@hotmail.com","password",lol[IDcuenta],tft[IDcuenta],lor[IDcuenta],val[IDcuenta]);
   IDcuenta++;
   lol[IDcuenta] = new LOL("LAN","VIGAL707","Oro","Plata","https://lan.op.gg/summoner/userName=VIGAL707");
   tft[IDcuenta] = new TFT("LAN","VIGAL707","Bronce");
   lor[IDcuenta] = new LOR("LAN","VIGAL707","Platino");
   val[IDcuenta] = new VAL("LAN","VIGAL707","Plata");
   usuarios[IDcuenta] = Cuenta("VIGAL707","VITAL@hotmail.com","Turey",lol[IDcuenta],tft[IDcuenta],lor[IDcuenta],val[IDcuenta]);
   IDcuenta++;
   lol[IDcuenta] = new LOL("LAN","Caligaresko","Plata","Oro","https://lan.op.gg/summoner/userName=caligaresko");
   tft[IDcuenta] = new TFT("LAN","Caligaresko","Diamante");
   lor[IDcuenta] = new LOR("LAN","Caligaresko","Diamante");
   val[IDcuenta] = new VAL("LAN","Caligaresko","Platino");
   usuarios[IDcuenta] = Cuenta("Caligaris","Cal@gmail.com","Ornn",lol[IDcuenta],tft[IDcuenta],lor[IDcuenta],val[IDcuenta]);
   IDcuenta ++;
   lol[IDcuenta] = new LOL("NA","Aerieli","Platino","Oro","SIN DATOS");
   tft[IDcuenta] = new TFT("NA","Aerieli","Plata");
   lor[IDcuenta] = new LOR("NA","Aerieli","Plata");
   val[IDcuenta] = new VAL("NA","Aerieli","Bronce");
   usuarios[IDcuenta] = Cuenta("MasterFerruco","master@gmail.com","comand",lol[IDcuenta],tft[IDcuenta],lor[IDcuenta],val[IDcuenta]);
   IDcuenta ++;
   lol[IDcuenta] = new LOL("LAN","HiSoyVayne","Oro","Oro","https://lan.op.gg/summoner/userName=HiSoyVayne");
   tft[IDcuenta] = new TFT("LAN","HiSoyVayne","Plata");
   lor[IDcuenta] = new LOR("LAN","HiSoyVayne","Plata");
   val[IDcuenta] = new VAL("LAN","HiSoyVayne","Diamante");
   usuarios[IDcuenta] = Cuenta("Vayne","vayne@gmail.com","vayne",lol[IDcuenta],tft[IDcuenta],lor[IDcuenta],val[IDcuenta]);
   IDcuenta ++;
   lol[IDcuenta] = new LOL("LAN","SmokedBomber","Platino","Platino","https://lan.op.gg/summoner/userName=Smoked+J+Bomber");
   tft[IDcuenta] = new TFT("LAN","SmokedBomber","Plata");
   lor[IDcuenta] = new LOR("LAN","SmokedBomber","Oro");
   val[IDcuenta] = new VAL("LAN","SmokedBomber","Platino");
   usuarios[IDcuenta] = Cuenta("UJBomber","UJ@gmail.com","bomberman",lol[IDcuenta],tft[IDcuenta],lor[IDcuenta],val[IDcuenta]);
   IDcuenta ++;
   lol[IDcuenta] = new LOL("LAN","Gelatina Roja","Plata","Bronce","https://lan.op.gg/summoner/userName=Gelatina+Roja");
   tft[IDcuenta] = new TFT("LAN","Gelatina Roja","Bronce");
   lor[IDcuenta] = new LOR("LAN","Gelatina Roja","Plata");
   val[IDcuenta] = new VAL("LAN","Gelatina Roja","Oro");
   usuarios[IDcuenta] = Cuenta("Gelatina Roja","mario@gmail.com","hola",lol[IDcuenta],tft[IDcuenta],lor[IDcuenta],val[IDcuenta]);
   IDcuenta ++;
   lol[IDcuenta] = new LOL("LAN","kevoZumer64","Oro","Platino","https://lan.op.gg/summoner/userName=kevoZumer64");
   tft[IDcuenta] = new TFT("LAN","kevoZumer64","Oro");
   lor[IDcuenta] = new LOR("LAN","kevoZumer64","Plata");
   val[IDcuenta] = new VAL("LAN","kevoZumer64","Platino");
   usuarios[IDcuenta] = Cuenta("ElKevin","kirvi@gmail.com","sumer",lol[IDcuenta],tft[IDcuenta],lor[IDcuenta],val[IDcuenta]);
   IDcuenta ++;
   lol[IDcuenta] = new LOL("LAN","Benji","Platino","Oro","https://lan.op.gg/summoner/userName=Pablogesu2");
   tft[IDcuenta] = new TFT("LAN","Benji","Oro");
   lor[IDcuenta] = new LOR("LAN","Benji","Oro");
   val[IDcuenta] = new VAL("LAN","Benji","Platino");
   usuarios[IDcuenta] = Cuenta("Prof.Benji","benji@gmail.com","1234",lol[IDcuenta],tft[IDcuenta],lor[IDcuenta],val[IDcuenta]);
   IDcuenta ++;
 }

 /**
 * RegistraCuenta() genera un objeto con el constructor destinado para usuarios de cuenta
 *
 * Como parte de uno de los inicios de sesion, el registrar una cuenta permite incluir
 * una cuenta completamente vacia al sistema.
 */

 void App::registrarCuenta(){
    string nomC,CorrC,ContrC;
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"BIENVENIDO USUARIO "<<IDcuenta + 1<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"Ingrese los siguientes datos para crear su cuenta"<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
    fflush(stdin);
    cout<<"Su nombre de usuario: "; getline(cin,nomC);
    fflush(stdin); //Limpiar espacio para escribir
    cout<<"Su correo electronico: "; getline(cin,CorrC);
    cout<<"Su contrasenia: "; getline(cin,ContrC);
    cout<<"-----------------------------------------------------------------"<<endl;
    usuarios[IDcuenta] = Cuenta(nomC,CorrC,ContrC);
    IDcuenta ++;
    cout<<"SU CUENTA FUE CREADA EXITOSAMENTE"<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"\n\n";
 }


 /**
 * mostrarCuentas(), como se menciona sirve para mostrar por completo los datos
 * de cada cuenta registrada en la app
 *
 * Utiliza la funcion antes instanciada en cuenta de mostrarCuenta, a lo largo
 * de el array de objetos creados.
 */

 void App::mostrarCuentas(){
     for(int i=0;i<IDcuenta;i++)
     {
        cout<<"***************************************************************"<<endl;
        cout<<"\tMOSTRANDO DATOS DE CUENTA NUMERO: "<<i+1<<endl;
        cout<<"***************************************************************"<<endl;
        usuarios[i].mostrarCuenta();
        usuarios[i].mostrarJuegos();
     }
 }

 /**
 * mostrarCuentaEspecif() muestra los datos de las cuentas de manera clasificada,
 * por orden de juegos que se metan.
 *
 * Esta función recibe de una lista de opciones la opcion que desea mostrar de, toda
 * la app y con ayuda de la función antes instanciada de mostrarJuegosEspecif, logra
 * mostrar cualquier todos los tipos de juegos.
 *
 */

 void App::mostrarCuentaEspecif(){
    int opcion;
    system("cls"); //Funcion para limpiar la pantalla
    while(opcion != 5){
        cout<<"-----------------------------------------------------------------"<<endl;
        cout<<"Ingrese el tipo de juego que desea mostrar: "<<endl;
        cout<<"-----------------------------------------------------------------"<<endl;
        cout<<"1. League of legends."<<endl;
        cout<<"2. Team Fight Tactics."<<endl;
        cout<<"3. Legends of Runeterra."<<endl;
        cout<<"4. Valorant."<<endl;
        cout<<"5. Terminar muestra."<<endl;
        cout<<"-----------------------------------------------------------------"<<endl;
        fflush(stdin); //Funcion para liberar el espacio de escritura en la memoria
        cin>>opcion;
        cout<<"-----------------------------------------------------------------"<<endl;
        cout<<"\n\n";

        switch(opcion){
            case 1:
                cout<<"***************************************************************"<<endl;
                cout<<"\tMOSTRANDO DATOS DE CUENTAS LEAGUE OF LEGENDS"<<endl;
                cout<<"***************************************************************"<<endl;
                for(int i=0;i<IDcuenta;i++){
                    usuarios[i].mostrarCuenta();
                    usuarios[i].mostrarJuegoEspecif("LOL");
                }
                break;
            case 2:
                cout<<"***************************************************************"<<endl;
                cout<<"\tMOSTRANDO DATOS DE CUENTAS TEAM FIGHT TACTICS"<<endl;
                cout<<"***************************************************************"<<endl;
                for(int i=0;i<IDcuenta;i++){
                    usuarios[i].mostrarCuenta();
                    usuarios[i].mostrarJuegoEspecif("TFT");
                }
                break;
            case 3:
                cout<<"***************************************************************"<<endl;
                cout<<"\tMOSTRANDO DATOS DE CUENTAS LEGENDS OF RUNETERRA"<<endl;
                cout<<"***************************************************************"<<endl;
                for(int i=0;i<IDcuenta;i++){
                    usuarios[i].mostrarCuenta();
                    usuarios[i].mostrarJuegoEspecif("LOR");
                }
                break;
            case 4:
                cout<<"***************************************************************"<<endl;
                cout<<"\tMOSTRANDO DATOS DE CUENTAS VALORANT"<<endl;
                cout<<"***************************************************************"<<endl;
                for(int i=0;i<IDcuenta;i++){
                    usuarios[i].mostrarCuenta();
                    usuarios[i].mostrarJuegoEspecif("VAL");
                }
                break;
            case 5: opcion = 5;
            default: cout<<"Accion fuera de los limites"<<endl;

        }
    }
 }

 /**
 * buscarJugadores(), la funcion mas compleja, que muestra de una lista de opciones y tomando
 * como referencia principal la cuenta de donde se esta haciendo la consulta busca en automatico
 * jugadores que cuenten con: El estatus de conectado, la misma region, el mismo tipo de juego y
 * misma division general, y muestra en pantalla los resultados
 *
 * Esto lo logra por medio de un dynamic_cast el cual le permite acceder a los getters de los
 * objetos mas especificos de la clase jugador y por medio de estos recolectar los datos, y
 * compararlos con la cuenta principal donde se realiza la consulta. Imprimiendo con mostraJuego-
 * especifico, los resultados obtenidos.
 *
 */

 void App::buscarJugadores(){
        string region,regionP,auten,nom;
        int opcion,stat;
        system("cls"); //Funcion para limpiar pantalla
        while(opcion != 5){
            cout<<"-----------------------------------------------------------------"<<endl;
            cout<<"Ingrese el juego donde desea buscar jugadores: "<<endl;
            cout<<"-----------------------------------------------------------------"<<endl;
            cout<<"1. League of legends."<<endl;
            cout<<"2. Team Fight Tactics."<<endl;
            cout<<"3. Legends of Runeterra."<<endl;
            cout<<"4. Valorant."<<endl;
            cout<<"5. Terminar busqueda."<<endl;
            cout<<"-----------------------------------------------------------------"<<endl;
            cin>>opcion;
            cout<<"-----------------------------------------------------------------"<<endl;
            switch(opcion){
                case 1:{
                    string divSol, divFlex,divSolP,divFlexP;
                    auten = usuarios[IDmain].get_nickname();
                    /*Se crea con un dynamic_cast un objeto de tipo LOL *lol, donde se almacenan
                    los datos que se encuentran en juegos[0] por medio de la funcion get_juego()*/
                    LOL *lol = dynamic_cast<LOL*>(usuarios[IDmain].get_juego("LOL"));
                    region = lol->get_region();
                    cout<<region<<endl;
                    divSol = lol->get_divSol();
                    cout<<divSol<<endl;
                    divFlex = lol->get_divFlex();
                    for(int i=0;i<IDcuenta;i++){
                        nom = usuarios[i].get_nickname();
                        if(auten != nom){
                            stat = usuarios[i].get_status();
                            if(stat == 1){
                                    LOL *lolP = dynamic_cast<LOL*>(usuarios[i].get_juego("LOL"));
                                    regionP = lolP->get_region();
                                    divSolP = lolP->get_divSol();
                                    divFlexP = lolP->get_divFlex();
                                    if(regionP == region){
                                        if(divFlex == divFlexP || divSol == divSolP){
                                            usuarios[i].mostrarCuenta();
                                            usuarios[i].mostrarJuegoEspecif("LOL");
                                        }
                                    }
                            }
                        }
                    }
                break;
                }
                case 2:{
                    string divTFT, divTFTP;
                    auten = usuarios[IDmain].get_nickname();
                    //Se aplica el mismo concepto pero con una clase diferente revisar comentario de arriba
                    TFT *tft = dynamic_cast<TFT*>(usuarios[IDmain].get_juego("TFT"));
                    region = tft->get_region();
                    divTFT = tft->get_divTFT();
                    for(int i=0;i<IDcuenta;i++){
                        nom = usuarios[i].get_nickname();
                        if(auten != nom){
                            stat = usuarios[i].get_status();
                            if(stat == 1){
                                    TFT *tftP = dynamic_cast<TFT*>(usuarios[i].get_juego("TFT"));
                                    regionP = tftP->get_region();
                                    divTFTP = tftP->get_divTFT();
                                    if(regionP == region){
                                        if(divTFT == divTFTP){
                                            usuarios[i].mostrarCuenta();
                                            usuarios[i].mostrarJuegoEspecif("TFT");
                                        }
                                    }
                            }
                        }
                    }
                break;
                }
                case 3:{
                    string divLOR, divLORP;
                    auten = usuarios[IDmain].get_nickname();
                    LOR *lor = dynamic_cast<LOR*>(usuarios[IDmain].get_juego("LOR"));
                    region = lor->get_region();
                    divLOR = lor->get_divLOR();
                    for(int i=0;i<IDcuenta;i++){
                        nom = usuarios[i].get_nickname();
                        if(auten != nom){
                            stat = usuarios[i].get_status();
                            if(stat == 1){
                                    LOR *lorP = dynamic_cast<LOR*>(usuarios[i].get_juego("LOR"));
                                    regionP = lorP->get_region();
                                    divLORP = lorP->get_divLOR();
                                    if(regionP == region){
                                        if(divLOR == divLORP){
                                            usuarios[i].mostrarCuenta();
                                            usuarios[i].mostrarJuegoEspecif("LOR");
                                        }
                                    }
                            }
                        }
                    }
                break;
                }
                case 4:{
                    string divVAL, divVALP;
                    auten = usuarios[IDmain].get_nickname();
                    VAL *val = dynamic_cast<VAL*>(usuarios[IDmain].get_juego("VAL"));
                    region = val->get_region();
                    divVAL = val->get_divVAL();
                    for(int i=0;i<IDcuenta;i++){
                        nom = usuarios[i].get_nickname();
                        if(auten != nom){
                            stat = usuarios[i].get_status();
                            if(stat == 1){
                                    VAL *valP = dynamic_cast<VAL*>(usuarios[i].get_juego("VAL"));
                                    regionP = valP->get_region();
                                    divVALP = valP->get_divVAL();
                                    if(regionP == region){
                                        if(divVAL == divVALP){
                                            usuarios[i].mostrarCuenta();
                                            usuarios[i].mostrarJuegoEspecif("VAL");
                                        }
                                    }
                            }
                        }
                    }
                break;
                }
                case 5:{ opcion = 5; break;}
            }
        }

 }

 /**
 * iniciarSesionGen(), esta función permite iniciar sesion con una cuenta, ya creada
 * y definir esta como la cuenta principal para realizar consultas.
 *
 * Por medio de getter y getline, la funcion busca entre los usuarios existentes, si
 * se encuentra alguna cuenta registrada con el mismo correo para poder iniciar sesion
 * en caso contrario detectará que no existe la cuenta y no permitira el acceso. Agrege,
 * la variable vali, para poder comprobar la situacion del proceso y si se efectuó de
 * manera correcta
 */

 void App::iniciarSesionGen(){
     string corrP;
     int confirm = 0;
     system("cls");
     cout<<"-----------------------------------------------------------------"<<endl;
     cout<<"BIENVENIDO"<<endl;
     cout<<"-----------------------------------------------------------------"<<endl;
     cout<<"Para iniciar sesion con su cuenta."<<endl;
     fflush(stdin); //Limpia el espacio de la memoria para escribir
     cout<<"Digite su correo: "; getline(cin,corrP);
     for(int i=0;i<IDcuenta;i++){
        if(corrP == usuarios[i].get_corr()){
            usuarios[i].iniciarSesion();
            confirm = 1;
            if(usuarios[i].get_status()== 1){
                    IDmain = i;
                    vali = 1;
            }
            else{
                vali = 0;
            }
        }
     }
     if(confirm == 0){
        cout<<"Su cuenta no existe."<<endl;
        vali = 0;
     }
 }

/**
 * actualizarCuentaM() esta función sirve para actualizar los datos de la cuenta
 * principal por medio de la función actualizarJuegos() de la clase cuenta.
 *
 * utiliza el IDmain, para encontrar el espacio referido a la cuenta principal y
 * realizar los cambios en esta.
 */

 void App::actualizarCuentaM(){
     usuarios[IDmain].actualizarJuegos();
 }

#endif // APP_H
