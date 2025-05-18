#include <cmath>
#include <iostream>
#include <stdexcept>
using namespace std;

class Vecteur
{
  static int compt;

private:
  int ID;
  float *T;
  int nb;
  // Identifiant unique pour chaque objet
  // Adresse du tableau des composant (cartésiennes)
  // Le nombre des composantes (cartésiennes)
public:
  Vecteur ();
  Vecteur (int n);
  // Pour créer un vecteur qui possédera
  // trois composantes nulles.
  // Pour créer un vecteur possédera
  // n composantes nulles
  Vecteur (const Vecteur &);
  ~Vecteur ();
  // les méthodes
  int appartient (int);
  int cardinal ();
  float norme () const;
  // Teste l’appartenance d'un composant.
  // Retourne la position de l’élément
  // s’il existe, -1 si non
  // Retourne la taille d’un vecteur :
  // le nombre de composants.
  // La norme d’une vecteur :
  // Redéfinition des Opérateurs :
  Vecteur &operator= (Vecteur &); // L’affectation ‘=’
  bool operator== (const Vecteur);
  bool operator!= (const Vecteur); // L’égalité ‘==’
  // La différence ‘!=’
  // Pour comparer deux vecteurs, selon la norme.
  bool operator> (const Vecteur);
  // La plus grande norme
  bool operator>= (const Vecteur);
  bool operator< (const Vecteur);
  // La plus petite norme
  bool operator<= (const Vecteur);
  Vecteur operator+ (const Vecteur &);
  Vecteur operator- (const Vecteur &);
  float operator* (const Vecteur); // Somme de deux vecteurs
  // Soustraction de deux vecteurs
  // Produit scalaire de deux vecteurs.
  float &operator[] (int); // Pour retourner un composant
  // connu par sa position.
  // L’opérateur << pour l’affichage d’un vecteur. L’affichage doit
  // être sous la forme : < composante1, composante2, composante3 >
  friend ostream &operator<< (ostream &, const Vecteur &);
  // L’opérateur >> pour la lecture des composant d’une liste.
  friend istream &operator>> (istream &, Vecteur &);
};
// Fin de la déclaration de la classe Vecteur