//
// Created by Selene on 02/05/2023.
//

#include "Materia.h"
#include <iostream>
using namespace std;

Materia::Materia(float nota, int codigo, string nombre) : m_nota{nota}, m_codigo{codigo},
m_nombre{nombre} {}

void Materia::setnota(float nota) {
    m_nota=nota;
}

void Materia::setcodigo(int codigo) {
    m_codigo=codigo;
}

void Materia::setnombre(string nombre) {
    m_nombre=nombre;
}

float Materia::getnota() {
    return m_nota;
}

int Materia::getcodigo() {
    return m_codigo;
}

string Materia::getnombre() {
    return m_nombre;
}

Materia::Materia() : m_nota{0}, m_codigo{0}, m_nombre{""} {}
