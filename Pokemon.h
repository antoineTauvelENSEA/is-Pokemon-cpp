//
// Created by antotauv on 05/09/2024.
//

#ifndef POKEMONIS_POKEMON_H
#define POKEMONIS_POKEMON_H

#include <string>

using std::string;

class Pokemon {
private:
    string name;
    int id;
    double hitPoint;
    double attackValue;
    double defense;
    int generation;
    void sustainDamage(int value);
    static int numberOfPokemon;

public:
    Pokemon() = delete;
    Pokemon(const string name);
    Pokemon(const string name, int id, double hitPoint, double attack, double defense, int generation);
    Pokemon(const Pokemon& anotherPokemon);
    void attack(Pokemon& anotherPokemon);
    void scream();
    void displayInfo();

    static int getNumberOfPokemon();

    ~Pokemon();

    const string &getName() const;

    int getId() const;
};


#endif //POKEMONIS_POKEMON_H
