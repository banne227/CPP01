C++ - Module 01

Allocation mémoire, pointeurs, références et switch
Version : 11.1

Résumé

Ce module initie à la programmation orientée objet avec C++98, en abordant :

Allocation mémoire (pile vs tas)

Pointeurs et références

Classes et méthodes

Instructions switch

Les exercices permettent de comprendre la manipulation de la mémoire et les bases de la POO.

Règles principales

Compiler avec :

c++ -Wall -Wextra -Werror -std=c++98


Classes : UpperCamelCase, fichiers : ClassName.hpp / ClassName.cpp

Chaque message affiché doit se terminer par un saut de ligne

Interdit : bibliothèques externes, using namespace, friend, STL avant le module 08, fonctions C (printf, alloc, free)

Éviter les fuites mémoire et respecter la forme canonique orthodoxe

Exercices
Ex00 – BraiiiiiiinnnzzzZ

Créer une classe Zombie avec un attribut name et une méthode announce().
Fonctions : newZombie(name) (tas) et randomChump(name) (pile).

Ex01 – Moar brainz!

Créer une horde de N zombies avec zombieHorde(int N, string name) et tester announce().

Ex02 – HI THIS IS BRAIN

Manipuler une string avec un pointeur et une référence, afficher adresses et valeurs.

Ex03 – Unnecessary violence

Créer les classes Weapon, HumanA et HumanB pour gérer armes et attaques :

HumanA : arme obligatoire (référence)

HumanB : arme optionnelle (pointeur)

Ex04 – Sed is for losers

Remplacer toutes les occurrences de s1 par s2 dans un fichier et créer <filename>.replace.
Interdit : fonctions C pour fichiers et std::string::replace.

Ex05 – Harl 2.0

Classe Harl avec méthodes privées debug(), info(), warning(), error() et méthode complain(level) utilisant pointeurs sur fonctions membres.

Ex06 – Harl filter

Filtrer les messages selon le niveau choisi avec switch.
Nom de l’exécutable : harlFilter.
