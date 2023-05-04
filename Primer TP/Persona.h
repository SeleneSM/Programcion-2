//
// Created by Selene on 02/05/2023.
//

#ifndef PRIMER_TP_PERSONA_H
#define PRIMER_TP_PERSONA_H

#include<iostream>
using namespace std;

class Persona {
private:
    unsigned int m_dni;
    string m_nombre;
    string m_apellido;
    string m_mail;
public:
    Persona(unsigned int dni, string nombre, string apellido, string mail);
    void setdni(unsigned int);
    void setnombre(string);
    void setapellido(string);
    void setmail(string);
    unsigned int getdni();
    string getnombre();
    string getapellido();
    string getmail();



};


#endif //PRIMER_TP_PERSONA_H
