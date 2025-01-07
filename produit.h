#include <iostream>
#include <string>

class Produit{
    private:
    std::string _titre;
    std::string _description;
    int _pu;
    int _qte;
    public:
    Produit(std::string titre, std::string description, int pu, int qte);
    Produit(std::string titre, std::string _description, int pu);
    void ajouter_p(int qte);
    bool test_qte(int n);
    void dimunuer_p(int qte); 
};