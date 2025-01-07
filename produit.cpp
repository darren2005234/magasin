#include "produit.h"

Produit::Produit (std::string titre, std::string description, int pu, int qte): _titre(titre), _description(description), _pu(pu),_qte(qte){

}
Produit::Produit (std::string titre, std::string description, int pu): _titre(titre), _description(description), _pu(pu){

}
