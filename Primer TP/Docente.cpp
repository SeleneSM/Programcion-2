//
// Created by Selene on 02/05/2023.
//

#include "Docente.h"
#include"Persona.h"

Docente::Docente(unsigned int dni, string nombre, string apellido, string mail, string titulo)
: Persona(dni, nombre,apellido, mail), m_titulo{titulo}, M1{0,0,""}, M2{0,0,""},
M3{0,0,""}{

}

void Docente::settitulo(string titulo) {
    m_titulo=titulo;
}

string Docente::gettitulo() {
    return m_titulo;
}

void Docente::AnotarMateria(Materia m1) {
    if(M1.getcodigo() == 0){
        M1 = m1;
        return;
    }else if(M2.getcodigo() == 0){
        M2 = m1;
        return;
    }else if(M3.getcodigo() == 0){
        M3 = m1;
        return;
    }else{
        cout << "El profesor ya tiene asignadas 3 materias" << endl;
        return;
    }
    //M1 = m1;
    //cout<<"Esta inscripto en la materia "<< m1.getnombre() << endl;
}

void Docente::ConsultarMateria() {
    int cont = 0;
    if (M1.getcodigo() != 0) {
        cont++;
        cout<<"La materia que da "<<this->getnombre()<<" es: "<<M1.getnombre()<<endl;

    }if (M2.getcodigo() != 0) {
        cont++;
        cout<<"La materia que da "<<this->getnombre()<<" es: "<<M2.getnombre()<<endl;

    } if (M3.getcodigo() != 0) {
        cont++;
        cout<<"La materia que da "<<this->getnombre()<<" es: "<<M3.getnombre()<<endl;

    }
    cout<<"La cantidad de materias que da es: "<<cont<<endl;

}

Docente::Docente() : Persona(0,"","",""), m_titulo{""}, M1{0,0,""},
M2{0,0,""}, M3{0,0,""} {}

