```md
# 💻 Algorithmes en langage C — Manipulation de tableaux

## 📌 Présentation du projet

Ce dépôt regroupe plusieurs algorithmes implémentés en langage C.  
Ils portent sur la manipulation de tableaux, la recherche de valeurs,  
le comptage d’occurrences et des calculs statistiques simples.

Les algorithmes ont été initialement écrits en pseudo-code, puis traduits en C  
afin de consolider les bases de l’algorithmique et de la programmation procédurale.

---

## 🛠️ Technologies utilisées

- Langage : C (ANSI C)  
- Bibliothèque standard : `stdio.h`  
- Concepts abordés :
  - Tableaux
  - Boucles (`for`, `while`)
  - Conditions (`if / else`)
  - Recherche et comptage
  - Calculs de moyenne et d’extrémums

---

## 📂 Structure du dépôt

- `calcul_moyenne.c`  
- `comptage_occurrences.c`  
- `extremunm_avec_position.c`  
- `fusion_tableaux.c`  
- `moyenne_ecart.c`  
- `notes_mentions.c`  
- `Recherche _valeur.c`  
- `recherhe_toutes_occurences.c`  

---

## 📘 Description des algorithmes

### 📄 calcul_moyenne.c
- Lecture de 15 notes  
- Calcul de la somme et de la moyenne  
- Affichage de la moyenne  
- Déroulement exact :  
  1. Saisie des 15 notes  
  2. Calcul de la somme des notes  
  3. Calcul de la moyenne (somme / 15)  
  4. Affichage du résultat

### 📄 comptage_occurrences.c
- Lecture de 25 nombres entiers compris entre 1 et 10  
- Initialisation d’un tableau d’occurrences à 0  
- Comptage du nombre de fois où chaque nombre apparaît  
- Affichage du résultat pour chaque nombre (nombre d’occurrences)

### 📄 extremunm_avec_position.c
- Lecture de 12 températures  
- Initialisation du maximum et minimum avec le premier élément  
- Parcours du tableau pour trouver :  
  - la température maximale et sa position  
  - la température minimale et sa position  
- Affichage des températures extrêmes avec leurs positions

### 📄 fusion_tableaux.c
- Lecture de deux tableaux de 5 éléments chacun  
- Copie du premier tableau dans le tableau fusion  
- Copie du deuxième tableau après le premier dans le tableau fusion  
- Affichage du tableau fusionné de 10 éléments

### 📄 moyenne_ecart.c
- Lecture de 10 notes  
- Calcul de la moyenne  
- Comptage des notes supérieures et inférieures à la moyenne  
- Affichage de :  
  - la moyenne  
  - le nombre de notes au-dessus de la moyenne  
  - le nombre de notes en dessous de la moyenne

### 📄 notes_mentions.c
- Lecture des notes de 20 étudiants  
- Calcul de la moyenne de la classe  
- Attribution d’une mention pour chaque étudiant selon la note :  
  - ⭐ Très Bien (≥ 16)  
  - 👍 Bien (≥ 14)  
  - ✔️ Assez Bien (≥ 12)  
  - 🟡 Passable (≥ 10)  
  - ❌ Insuffisant (< 10)  
- Affichage de la note et de la mention pour chaque étudiant

### 📄 Recherche _valeur.c
- Lecture de 20 nombres entiers  
- Saisie du nombre à rechercher  
- Parcours du tableau pour vérifier si le nombre est présent  
- Si trouvé : affichage de sa position  
- Sinon : affichage d’un message indiquant qu’il n’est pas présent

### 📄 recherhe_toutes_occurences.c
- Lecture de 15 nombres entiers  
- Saisie du nombre à rechercher  
- Parcours du tableau pour trouver toutes les positions où il apparaît  
- Comptage du nombre total d’occurrences  
- Affichage des positions et du total d’occurrences  
- Si le nombre n’apparaît pas, affichage d’un message approprié

---

## ▶️ Compilation et exécution

Exemple avec GCC :

```bash
gcc calcul_moyenne.c -o calcul_moyenne
./calcul_moyenne
```

---

## 🎯 Objectifs du projet

- Appliquer les concepts fondamentaux de l’algorithmique  
- Traduire des algorithmes en pseudo-code vers le langage C  
- Développer la logique et la rigueur en programmation  

---

## 👤 Auteur
 
Vyx
```
