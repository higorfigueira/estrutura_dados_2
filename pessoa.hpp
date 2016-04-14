using namespace std;
// int inserir(Pessoa *novo);
//bool busca (int idade);
// void mostra ();

class Pessoa{



  protected:
    int id;
    Pessoa *direita, *esquerda, *pai;

  public:

    //Pessoa* busca (int idade);

    Pessoa(){
      id = 0;
      direita = esquerda = NULL;
    };

    Pessoa(int id){
      this->id = id;
      direita = NULL;
      esquerda = NULL;
      pai = NULL;
    };

    ~Pessoa(){

    };

    //Gets e Sets
    int getId (){
      return id;
    };

    void setId(int id){
      id=id;
    };
    Pessoa *getDireita (){
      return direita;
    };

    void setDireita(Pessoa *direita){
      direita=direita;
    };

    Pessoa *getEsquerda (){
      return esquerda;
    };

    void setEsquerda(Pessoa *esquerda){
      esquerda=esquerda;
    };

    Pessoa *getPai (){
      return pai;
    };

    void setPai(Pessoa *pai){
      pai=pai;
    };
    //FIM GET e SET


    int inserir(Pessoa *novo){
      // if (/* condition */) {
      //   /* code */
      // }
      if(novo->id >= this->id){
              if(this->direita == NULL){
                novo->pai = this;
                this->direita = novo;
                return 1;
              }
          else
          this->direita->inserir(novo);
      }
      else{
          if(this->esquerda == NULL){
            novo->pai = this;
            this->esquerda = novo;
            return 1;
          }
          else
          this->esquerda->inserir(novo);
        }

    }


    //função bucar PESSOA

    Pessoa* busca (int idade){
      if(idade == this->id) {
        cout << "encontrado" << endl;
        return this;
      }
      else {
        if(this->id < idade && this->direita!=NULL){
          return this->direita->busca(idade);
        }
        else
          if(this->esquerda != NULL)
            return this->esquerda->busca(idade);
      }

      cout << "Não encontrado " << this->id << endl;
      return NULL;
    };

    void mostra (){
      cout << this->getId() << endl;
      if(this->esquerda == NULL && this->esquerda == NULL)
        return;

      else{
        if(this->esquerda!=NULL)
          this->esquerda->mostra();
        if(this->direita!=NULL)
          this->direita->mostra();
      }
    };



    //função DELETAR PESSOA
    bool deletar (int idade){
      Pessoa *apagar = this->busca(idade);
      if(apagar->getPai() == NULL && apagar->getDireita() == NULL && apagar->getEsquerda() == NULL){
        delete apagar;
        return true;
      }

      if (apagar->getDireita() != NULL && apagar->getEsquerda() == NULL && apagar->getPai() != NULL){
          apagar->pai->setDireita(apagar->getDireita());
          apagar->direita->setPai(apagar->getPai());
          delete apagar;
          return true;
      }

      if (apagar->getEsquerda() != NULL && apagar->getDireita() == NULL && apagar->getPai() != NULL){
        apagar->pai->setEsquerda(apagar->getEsquerda());
        apagar->esquerda->setPai(apagar->getPai());
        delete apagar;
        return true;
      }

    };









    //   if(this->id == idade){
    //     if (this->pai == NULL && this->direita==NULL && this->esquerda==NULL)
    //       delete this;
    //
    //     if (this->id < idade){
    //       if(this->direita->id == idade){
    //         this->direita->direita->pai = this;
    //         this->direita = this->direita->direita;
    //         delete this;
    //       }
    //       else
    //         return this->deletar(idade);
    //     }
    //     if(this->id > idade){
    //       if(this->esquerda->id == idade){
    //         this->esquerda->esquerda->pai = this;
    //         this->esquerda = this->esquerda->esquerda;
    //         delete this;
    //       }
    //       else
    //         return this->deletar(idade)
    //     }
    //
    //   }

};
