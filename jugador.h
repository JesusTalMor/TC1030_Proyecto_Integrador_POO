/*
Proyecto Base de Datos Juegos de Riot
Jesus David Talamantes Morales
A01706335
04-06-2020
*/

#ifndef JUGADOR_H_
#define JUGADOR_H_

#include<string.h>
#include<iostream>
#include<cstdio>


using namespace std;

//Declaración de clase Jugador que será abstracta
class Jugador {
    //Declaración de atributos de la clase
    protected:
        string region;
        string nombreInvocador;
        string tipo;

    //Declaracion de metodos de la clase
    public:
        //Constructores
        Jugador(): region("SIN DATOS"),nombreInvocador("SIN DATOS"),tipo("SIN DATOS"){};//Default
        Jugador(string reg,string nomInv,string tip):
            region(reg),nombreInvocador(nomInv),tipo(tip){};

        //Getter y Setters
        string get_region() {return region;}
        string get_nomInv() {return nombreInvocador;}
        string get_tipo() {return tipo;}
        void set_region(string treg) {region = treg;}
        void set_nomInv(string tnomInv) {nombreInvocador = tnomInv;}
        void set_tipo(string ttipo) {tipo = ttipo;}

        virtual void mostrarJugador() = 0;//método abstracto será sobreescrito
        virtual void actualizarJugador();
};

/**
 * ActualizarJugador() es un funcion que aplica polimorfismo, en la cual se
 * utiliza para actualizar los atributos donde se tenga el valor SIN DATOS
 */

void Jugador::actualizarJugador(){
    string nom,reg;
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"\tACTUALIZANDO DATOS DEL JUGADOR"<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"Introduzca su nombre de invocador y la region en la que juega: "<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    fflush(stdin);
    getline(cin,nom);
    getline(cin,reg);
    set_nomInv(nom);
    set_region(reg);
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"\n\n";
}

//Declaración de clase LOL que hereda de jugador
class LOL : public Jugador{
    //Declaracion de atributos de la clase
    private:
        string divisionSoloDuo;
        string divisionFlex;
        string linkOPGG;

    //Declaración de metodos de la clase
    public:
        //Constructores
        LOL(): Jugador("SIN DATOS","SIN DATOS","LOL"),divisionFlex("SIN DATOS"),
        divisionSoloDuo("SIN DATOS"),linkOPGG("SIN DATOS"){};
        LOL(string region,string nombreInvocador,string divSol,string divFlex,string OPGG):
            Jugador(region,nombreInvocador,"LOL"), divisionSoloDuo(divSol),divisionFlex(divFlex), linkOPGG(OPGG){};

        //Getters y Setters
        string get_divSol() {return divisionSoloDuo;}
        string get_divFlex() {return divisionFlex;}
        string get_OPGG() {return linkOPGG;}
        void set_divSol(string divSol) {divisionSoloDuo = divSol;}
        void set_divFlex(string divFlex) {divisionFlex = divFlex;}
        void set_OPGG(string OPGG) {linkOPGG = OPGG;}

        void mostrarJugador();
        void mostrarOPGG();
        void actualizarJugador();
};

/**
 * mostrarJugador(), metodo que aplica polimorfismo, toma los atributos
 * de la clase y los imprime en pantalla
 */

 void LOL::mostrarJugador(){
    cout<<"***************************************************************"<<endl;
    cout<<"\t\tDATOS JUGADOR"<<endl;
    cout<<"***************************************************************"<<endl;
    cout<<"Nombre de Invocador: "<<nombreInvocador<<endl;
    cout<<"Region o Servidor: "<<region<<endl;
    cout<<"***************************************************************"<<endl;
    cout<<"\n";
     cout<<"***************************************************************"<<endl;
    cout<<"\t\tLEAGUE OF LEGENDS"<<endl;
    cout<<"***************************************************************"<<endl;
    cout<<"Division Clasificatoria Solo/Duo: "<<divisionSoloDuo<<endl;
    cout<<"Division Clasificatoria Flexible: "<<divisionFlex<<endl;
    cout<<"***************************************************************"<<endl;
    cout<<"\n\n";
}

/**
 * actualizar en caso de que se quiera actualizar
 * para los datos de LEAGUE OF LEGENDS
 */

 void LOL::actualizarJugador(){
    Jugador::actualizarJugador();
    string Sol,Flex,OPGG;
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"\tACTUALIZANDO DATOS DE LEAGUE OF LEGENDS"<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"Introduzca sus divisiones en clasificatoria General de Solo/Duo y Flex: "<<endl;
    cout<<"Ejemplo: division Solo/duo: Bronce, Oro, Plata, Platino, Diamante"<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    fflush(stdin);
    getline(cin,Sol);
    getline(cin,Flex);
    set_divSol(Sol);
    set_divFlex(Flex);
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"\nIntroduzca su link para OPGG: ";
    getline(cin,OPGG);
    set_OPGG(OPGG);
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"\n\n";
}

/**
 * mostrarOPGG muestra un link de la cuenta a OPGG, para revisar datos o
 * estadisticas
 */

 void LOL::mostrarOPGG(){
    cout<<"***************************************************************"<<endl;
    cout<<"Link para ver historial: "<<linkOPGG<<endl;
    cout<<"***************************************************************"<<endl;
    cout<<"\n\n";
}

//Declaracion de clase TFT que hereda de jugador
class TFT : public Jugador{
    //Declaracion de atributos de la clase
    private:
        string divisionTFT;

    //Metodos de la clase
    public:
        //Constructores
        TFT(): Jugador("SIN DATOS","SIN DATOS","TFT"), divisionTFT("SIN DATOS"){};
        TFT(string region, string nombreInvocador, string divTFT):
            Jugador(region,nombreInvocador,"TFT"), divisionTFT(divTFT){};

        //Getters y Setters
        string get_divTFT() {return divisionTFT;}
        void set_divTFT(string divTFT) {divisionTFT = divTFT;}

        void mostrarJugador();
        void actualizarJugador();
};

/**
 * mostrarJugador toma los datos del jugador y los muestra en pantalla
 * para esta caso muestra datos de Team Fight Tactics
 */

 void TFT::mostrarJugador(){
    cout<<"***************************************************************"<<endl;
    cout<<"\t\tDATOS JUGADOR"<<endl;
    cout<<"***************************************************************"<<endl;
    cout<<"Nombre de Invocador: "<<nombreInvocador<<endl;
    cout<<"Region o Servidor: "<<region<<endl;
    cout<<"***************************************************************"<<endl;
    cout<<"\n";
    cout<<"***************************************************************"<<endl;
    cout<<"\t\tTEAM FIGHT TACTICS"<<endl;
    cout<<"***************************************************************"<<endl;
    cout<<"Division Clasificatoria : "<<divisionTFT<<endl;
    cout<<"***************************************************************"<<endl;
    cout<<"\n\n";

}

/**
 * actualizar en caso de que se quiera actualizar
 * para los datos de TEAM FIGHT TACTICS
 */

 void TFT::actualizarJugador(){
    Jugador::actualizarJugador();
    string divTFT;
    cout<<"-------------------------------------------------------------------------"<<endl;
    cout<<"\tACTUALIZANDO DATOS DE TEAM FIGHT TACTICS"<<endl;
    cout<<"-------------------------------------------------------------------------"<<endl;
    cout<<"Introduzca su division en clasificatoria General de Team Fight Tactics: "<<endl;
    cout<<"Ejemplo: division TFT: Bronce, Oro, Plata, Platino, Diamante"<<endl;
    cout<<"-------------------------------------------------------------------------"<<endl;
    fflush(stdin);
    getline(cin,divTFT);
    set_divTFT(divTFT);
    cout<<"-------------------------------------------------------------------------"<<endl;
    cout<<"\n\n";
}

//Declaracion de clase LOR que hereda de Jugador
class LOR : public Jugador{
    //Declaracion de atributos de la clase
    private:
        string divisionLOR;

    //metodos de la clase
    public:
        //Constructores
        LOR(): Jugador("SIN DATOS","SIN DATOS","LOR"), divisionLOR("SIN DATOS"){};
        LOR(string region,string nombreInvocador,string divLOR):
            Jugador(region,nombreInvocador,"LOR"), divisionLOR(divLOR){};

        //Getters y Setters
        string get_divLOR() {return divisionLOR;}
        void set_divLOR(string divLOR) {divisionLOR = divLOR;}

        void mostrarJugador();
        void actualizarJugador();

};

/**
 * mostrarJugador toma los datos del jugador y los muestra en pantalla
 * para esta caso muestra datos de LEGENDS OF RUNETERRA
 */

 void LOR::mostrarJugador(){
    cout<<"***************************************************************"<<endl;
    cout<<"\t\tDATOS JUGADOR"<<endl;
    cout<<"***************************************************************"<<endl;
    cout<<"Nombre de Invocador: "<<nombreInvocador<<endl;
    cout<<"Region o Servidor: "<<region<<endl;
    cout<<"***************************************************************"<<endl;
    cout<<"\n";
    cout<<"***************************************************************"<<endl;
    cout<<"\t\tLEGENDS OF RUNETERRA"<<endl;
    cout<<"***************************************************************"<<endl;
    cout<<"Division Clasificatoria : "<<divisionLOR<<endl;
    cout<<"***************************************************************"<<endl;
    cout<<"\n\n";
}

/**
 * actualizar en caso de que se quiera actualizar
 * para los datos de TEAM FIGHT TACTICS
 */

 void LOR::actualizarJugador(){
    Jugador::actualizarJugador();
    string divLOR;
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"\tACTUALIZANDO DATOS DE LEGENDS OF RUNETERRA"<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"Introduzca su division en clasificatoria General de Legends of runeterra: "<<endl;
    cout<<"Ejemplo: division LOR: Bronce, Oro, Plata, Platino, Diamante"<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;
    fflush(stdin);
    getline(cin,divLOR);
    set_divLOR(divLOR);
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"\n\n";
}

//Declaracion de la clase VAL que hereda de jugador
class VAL : public Jugador{
    //Declaracion de atributos de la clase
    private:
        string divisionVAL;

    //Metodos de la clase
    public:
        //Constructores
        VAL(): Jugador("SIN DATOS", "SIN DATOS","VAL"), divisionVAL("SIN DATOS"){};
        VAL(string region,string nombreInvocador,string divVAL):
            Jugador(region,nombreInvocador,"VAL"), divisionVAL(divVAL){};

        //Getters y Setters
        string get_divVAL() {return divisionVAL;}
        void set_divVAL(string divVAL) {divisionVAL = divVAL;}

        void mostrarJugador();
        void actualizarJugador();
};

/**
 * mostrarJugador toma los datos del jugador y los muestra en pantalla
 * para esta caso muestra datos de VALORANT
 */

 void VAL::mostrarJugador(){
    cout<<"***************************************************************"<<endl;
    cout<<"\t\tDATOS JUGADOR"<<endl;
    cout<<"***************************************************************"<<endl;
    cout<<"Nombre de Invocador: "<<nombreInvocador<<endl;
    cout<<"Region o Servidor: "<<region<<endl;
    cout<<"***************************************************************"<<endl;
    cout<<"\n";
    cout<<"***************************************************************"<<endl;
    cout<<"\t\t\tVALORANT"<<endl;
    cout<<"***************************************************************"<<endl;
    cout<<"Division Competitiva : "<<divisionVAL<<endl;
    cout<<"***************************************************************"<<endl;
    cout<<"\n\n";
}

/**
 * actualizar en caso de que se quiera actualizar
 * para los datos de VALORANT
 */

 void VAL::actualizarJugador(){
    Jugador::actualizarJugador();
    string divVAL;
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"\tACTUALIZANDO DATOS DE VALORANT"<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"Introduzca su division en clasificatoria General de Valorant: "<<endl;
    cout<<"Ejemplo: division Valorant: Bronce, Oro, Plata, Platino, Diamante"<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
    fflush(stdin);
    getline(cin,divVAL);
    set_divVAL(divVAL);
    cout<<"------------------------------------------------------------------"<<endl;
    cout<<"\n\n";
}

#endif // JUGADOR_H
