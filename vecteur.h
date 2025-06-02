#ifndef VECTEUR_H
#define VECTEUR_H

#include <cmath>
#include <iostream>
#include <stdexcept>
#include <algorithm> // For std::fill
using namespace std;

class Vecteur {
    static int compt; // Compteur d'instances pour identifiant unique

private:
    int ID;      // Identifiant unique pour chaque objet
    float *T;    // Tableau dynamique des composantes
    int nb;      // Nombre de composantes

public:
    // Constructeurs et destructeur
    Vecteur();                          // Vecteur de taille 3 initialisé à 0
    Vecteur(int n);                     // Vecteur de taille n initialisé à 0
    Vecteur(const Vecteur &other);      // Constructeur de copie
    ~Vecteur();                         // Destructeur

    // Méthodes principales
    int appartient(int valeur) const;   // Retourne la position de la valeur, -1 si absente
    int cardinal() const;               // Retourne le nombre de composantes
    float norme() const;                // Calcule la norme du vecteur

    void clear();                       // Met toutes les composantes à zéro

    // Opérateurs
    Vecteur &operator=(const Vecteur &rhs);         // Affectation
    bool operator==(const Vecteur &rhs) const;      // Égalité (éléments identiques)
    bool operator!=(const Vecteur &rhs) const;      // Différence
    bool operator>(const Vecteur &rhs) const;       // Norme supérieure
    bool operator>=(const Vecteur &rhs) const;      // Norme supérieure ou égale
    bool operator<(const Vecteur &rhs) const;       // Norme inférieure
    bool operator<=(const Vecteur &rhs) const;      // Norme inférieure ou égale

    Vecteur operator+(const Vecteur &rhs) const;    // Addition
    Vecteur operator-(const Vecteur &rhs) const;    // Soustraction
    float operator*(const Vecteur &rhs) const;      // Produit scalaire

    float &operator[](int index);                   // Accès/modification d'une composante
    const float &operator[](int index) const;       // Accès lecture d'une composante

    // Entrée/Sortie
    friend ostream &operator<<(ostream &os, const Vecteur &vec);
    friend istream &operator>>(istream &is, Vecteur &vec);
};

#endif // VECTEUR_H
