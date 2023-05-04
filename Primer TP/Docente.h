//
// Created by Selene on 02/05/2023.
//

#ifndef PRIMER_TP_DOCENTE_H
#define PRIMER_TP_DOCENTE_H
#include <iostream>
#include "Persona.h"
#include "Materia.h"
using namespace std;

class Docente : public Persona {
private:
    string m_titulo;
    Materia M1;
    Materia M2;
    Materia M3;

public:
    Docente();
    Docente(unsigned int dni, string nombre, string apellido, string mail, string titulo);
    void settitulo(string);
    string gettitulo();
    void AnotarMateria(Materia m1);
    void ConsultarMateria();

};


#endif //PRIMER_TP_DOCENTE_H
