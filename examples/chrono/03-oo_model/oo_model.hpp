
#ifndef OO_MODEL_HPP
#define OO_MODEL_HPP

/* 
Cynthia Baran           135371
Guilherme Fontebasso    135973
*/


class Corpo {
  private:
  float massa;
  float aceleracao;
  float velocidade;
  float posicao;

  public:
  Corpo(float massa, float velocidade, float posicao);
  void update(float nova_aceleracao, float nova_velocidade, float nova_posicao);
  float get_massa();
  float get_aceleracao();
  float get_velocidade();
  float get_posicao();
};

class ListaDeCorpos {
 private:
    std::vector<Corpo*> *corpos;

  public:
    ListaDeCorpos();
    void add_corpo(Corpo *c);
    std::vector<Corpo*> *get_corpos();
};

class Fisica {
  private:
    ListaDeCorpos *lista;

  public:
    Fisica(ListaDeCorpos *ldc);
    void add_corpo(Corpo *c);
    void update(float deltaT);
};
#endif
