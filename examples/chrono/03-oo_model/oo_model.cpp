#include <vector>

#include "oo_model.hpp"

#include <iostream>
#include <cmath>


Corpo::Corpo(float massa, float velocidade, float posicao) {
  this->massa = massa;
  this->aceleracao = 0;
  this->velocidade = velocidade;
  this->posicao = posicao;
}

void Corpo::update(float nova_aceleracao, float nova_velocidade, float nova_posicao) {
  this->aceleracao = nova_aceleracao;
  this->velocidade = nova_velocidade;
  this->posicao = nova_posicao;
}

float Corpo::get_massa() {
  return this->massa;
}

float Corpo::get_aceleracao() {
  return this->aceleracao;
}

float Corpo::get_velocidade() {
  return this->velocidade;
}

float Corpo::get_posicao() {
  return this->posicao;
}

ListaDeCorpos::ListaDeCorpos() {
  this->corpos = new std::vector<Corpo *>(0);
}

void ListaDeCorpos::add_corpo(Corpo *c) {
  (this->corpos)->push_back(c);
  std::cout << "Agora tenho: " << this->corpos->size() << " elementos" << std::endl;
}

std::vector<Corpo*> *ListaDeCorpos::get_corpos() {
  return (this->corpos);
}

Fisica::Fisica(ListaDeCorpos *ldc) {
  this->lista = ldc;
}

void Fisica::update(float deltaT) {
  // Atualiza parametros dos corpos!
  std::vector<Corpo *> *c = this->lista->get_corpos();
  float K_ELASTICA = 20;
  float FATOR_AMORT = 10;

  for (int i = 0; i < (*c).size(); i++) {
    float forca_elastica = (-1) * K_ELASTICA * (*c)[i]->get_posicao();
    float forca_amortecedor = FATOR_AMORT * (*c)[i]->get_velocidade();
    float new_acel = (*c)[i]->get_aceleracao() + forca_amortecedor / (*c)[i]->get_massa() + forca_elastica / (*c)[i]->get_massa();
    float new_vel = (*c)[i]->get_velocidade() + (float)deltaT / 1000 * new_acel;
    float new_pos = (*c)[i]->get_posicao() + (float)deltaT * new_vel/1000;
    (*c)[i]->update(new_acel, new_vel, new_pos);
  }
}


