#include "produit.h"

Produit::Produit (std::string titre, std::string description, int pu, int qte): _titre(titre), _description(description), _pu(pu),_qte(qte){

}
Produit::Produit (std::string titre, std::string description, int pu): _titre(titre), _description(description), _pu(pu){

}

void ajouter_p(int qte){
    _qte+= qte;
}
bool test_qte(int n){
    return _qte>=n;
}

void diminuer_p(int qte){
    if test_qte(qte){
        _qte-= qte;
    }
    else{
        std::cout<<"quantite insuffisane en stock"<<std::endl;
    }
}
