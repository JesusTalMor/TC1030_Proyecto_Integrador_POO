/*
Proyecto Base de Datos Juegos de Riot
Jesus David Talamantes Morales
A01706335
11-06-2020
*
*
* Este proyecto es la creación de una aplicación en la cual
* puedes utilizar para encontrar jugadores de 4 diferentes
* juegos con tus  mismas caracteristicas y regiones de juego.
*/

#include <iostream>
#include<cstdio>
#include<stdlib.h>

#include "app.h" // bibliotecas con objetos de mi proyecto.

using namespace std;

int main(){
    //Generando pruebas de la clase app.h
    App app;
    app.crearEjemplos();
    //app.mostrarCuentas();
    int opcion;
    cout<<"++++++++++++++++++++++++++++++++"<<endl;
    cout<<"Bienvenido a la App RIOT FRIENDS"<<endl;
    cout<<"++++++++++++++++++++++++++++++++"<<endl;
    cout<<"\tQue desea hacer ?"<<endl;
    cout<<"++++++++++++++++++++++++++++++++"<<endl;
    cout<<"1. Iniciar Sesion."<<endl;
    cout<<"2. Registrar Nueva Cuenta."<<endl;
    cout<<"++++++++++++++++++++++++++++++++"<<endl;
    fflush(stdin);
    cin>>opcion;
    if(opcion == 1){
        app.iniciarSesionGen();
        if(app.get_vali() == 1){
            int menu = 0;
            while(menu != 5){
                cout<<"+++++++++++++++++++++++++++++++++++++++"<<endl;
                cout<<"Desplegando menu de opciones"<<endl;
                cout<<"\tQue desea hacer?"<<endl;
                cout<<"+++++++++++++++++++++++++++++++++++++++"<<endl;
                cout<<"1. Actualizar su perfil."<<endl;
                cout<<"2. Buscar jugadores."<<endl;
                cout<<"3. Desplegar todos los jugadores."<<endl;
                cout<<"4. Desplegar los jugadores de un juego."<<endl;
                cout<<"5. Salir del programa."<<endl;
                cout<<"+++++++++++++++++++++++++++++++++++++++"<<endl;
                cin>>menu;
                cout<<"+++++++++++++++++++++++++++++++++++++++"<<endl;
                cout<<"\n\n";
                switch(menu){
                    case 1:{app.actualizarCuentaM(); break;}
                    case 2:{app.buscarJugadores(); break;}
                    case 3:{app.mostrarCuentas(); break;}
                    case 4:{app.mostrarCuentaEspecif(); break;}
                    case 5:{menu = 5; break;}
                    default:{cout<<"Opcion no valida"; break;}
                }
            }
        }
        else{
            exit(0);
        }
    }
    else if(opcion == 2){
        app.registrarCuenta();
        system("pause");
        app.iniciarSesionGen();
        if(app.get_vali() == 1){
            cout<<"+++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
            cout<<"Es necesario actualizar su cuenta por completo."<<endl;
            cout<<"Iniciando Porceso de Actualizacion."<<endl;
            cout<<"+++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
            system("pause");
            app.actualizarCuentaM();
            int menu = 0;
            while(menu != 5){
                cout<<"++++++++++++++++++++++++++++++++"<<endl;
                cout<<"Desplegando menu de opciones"<<endl;
                cout<<"\tQue desea hacer?"<<endl;
                cout<<"++++++++++++++++++++++++++++++++"<<endl;
                cout<<"1. Actualizar su perfil."<<endl;
                cout<<"2. Buscar jugadores."<<endl;
                cout<<"3. Desplegar todos los jugadores."<<endl;
                cout<<"4. Desplegar los jugadores de un juego."<<endl;
                cout<<"5. Salir del programa."<<endl;
                cout<<"++++++++++++++++++++++++++++++++"<<endl;
                cin>>menu;
                cout<<"++++++++++++++++++++++++++++++++"<<endl;
                cout<<"\n\n";
                switch(menu){
                    case 1: app.actualizarCuentaM(); break;
                    case 2: app.buscarJugadores(); break;
                    case 3: app.mostrarCuentas(); break;
                    case 4: app.mostrarCuentaEspecif(); break;
                    case 5: menu = 5; break;
                    default: cout<<"Opcion no valida"; break;
                }
            }
        }
        else{
            exit(0);
        }
    }
    system("cls");
    cout<<"++++++++++++++++++++++++++++++++"<<endl;
    cout<<"SALIENDO DEL PROGRAMA CON EXITO"<<endl;
    cout<<"HASTA LUEGO."<<endl;
    cout<<"++++++++++++++++++++++++++++++++"<<endl;

    return 0;
}
