//
// Created by Selene on 02/05/2023.
//

#include "Persona.h"

Persona::Persona(unsigned int dni, string nombre, string apellido, string mail) :m_dni{dni}, m_nombre{nombre},
m_apellido{apellido}, m_mail{mail} {}

void Persona::setdni(unsigned int dni) {
    m_dni=dni;
}

void Persona::setnombre(string nombre) {
    m_nombre=nombre;
}

void Persona::setapellido(string apellido) {
    m_apellido=apellido;
}

void Persona::setmail(string mail) {
    m_mail=mail;
}

unsigned int Persona::getdni() {
    return m_dni;
}

string Persona::getnombre() {
    return m_nombre;
}

string Persona::getapellido() {
    return m_apellido;
}

string Persona::getmail() {
    return m_mail;
}
