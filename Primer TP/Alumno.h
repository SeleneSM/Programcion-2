//
// Created by Selene on 02/05/2023.
//

#ifndef PRIMER_TP_ALUMNO_H
#define PRIMER_TP_ALUMNO_H

#include "Persona.h"
#include"Materia.h"
#include<iostream>
using namespace std;

class Alumno : public Persona{
private:
    int m_edad;
    string m_carrera;
    Materia M1;
    Materia M2;
    Materia M3;
    Materia alumno;

public:
    Alumno();
    Alumno(unsigned int dni, string nombre, string apellido, string mail,int edad, string carrera);
    void setedad(int);
    void setcarrera(string);
    int getedad();
    string getcarrera();
    void InscipcionMateria(Materia m1);
    void CargaNota();
};


#endif //PRIMER_TP_ALUMNO_H
