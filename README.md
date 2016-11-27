# Compte rendu TP1
## Exercice 1
### Traces d'éxécution
#### Les échanges

a : 9 b : 12 // affichage des nombres de base

a : 12 b : 9// echange par adresse / pointeur

a : 9 b : 12 // échange par référence


a : 9 b : 12 // échange par valeur, il est normal qu'aucun échange ne soit fait

#### Le tableau

Entrer le nombre de valeurs a entrer : 9

Element no 0 : 4

Element no 1 : 5

Element no 2 : 1

Element no 3 : 2

Element no 4 : 7

Element no 5 : 9

Element no 6 : 8

Element no 7 : 11

Element no 8 : 15

// affichage des élements dans l'ordre

4;5;1;2;7;9;8;11;15;

// tirage d'un élément aléatoire

rng = 2

// minimum et maximum

min = 1

max = 15

// mélange du tableau et affichage

2;15;11;4;1;8;9;5;7;

### Erreurs

En premier lieu lorsqu'on se contentait d'écrire les trois fonctions d'échange,sans namespace, on obtenait une erreur.

Le problème ici vient de la surcharge, il a de la peine à faire la différence entre le passage par valeur et le passage par référence, du coup il trouve cela ambigu et ne peut pas décider de laquelle il faut se servir.
