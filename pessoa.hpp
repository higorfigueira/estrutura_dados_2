class Pessoa{
  protected:
    int id;
    Pessoa *direita, *esquerda;

  public:
    Pessoa(){
      id = 0;
      direita = esquerda = NULL;
    };

    Pessoa(int id, Pessoa *direta, Pessoa *direita){
      id = id;
      direita = NULL;
      esquerda = NULL;
    };

    ~Pessoa(){
    };

    //Gets e Sets
    int getId (){
      return id;
    };

    void setId(int id){
      id=id;
    }
    Pessoa *getDireita (){
      return direita;
    };

    void setDireita(Pessoa *direita){
      direita=direita;
    }
    Pessoa *getEsquerda (){
      return esquerda;
    };

    void setEsquerda(Pessoa *esquerda){
      esquerda=esquerda;
    }
    //FIM GET e SET


    /*int inserir(Pessoa *novo){
      if(novo->id >= this->id){
              if(this->direita == NULL){
                this->direita = novo;
                return 1;
              }
          else
          this->direita->inserir(novo);
      }
      else{
          if(this->esquerda == NULL){
            this->esquerda = novo;
            return 1;
          }
          else
          this->esquerda->inserir(novo);
        }

    }
*/


};
