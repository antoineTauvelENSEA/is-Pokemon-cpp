//
// Created by antotauv on 11/09/2024.
//

#ifndef POKEMONIS_POKEBALL_H
#define POKEMONIS_POKEBALL_H


#include "SetOfPokemon.h"
#include "Pokedex.h"

class Pokeball : public SetOfPokemon{
public:
    Pokemon* getOnePokemonByName(string name);
    Pokemon* getOnePokemonById(int id);

    Pokeball();

    void addOnePokemonFromPokedex(Pokedex * pokedex, int index);
    void fillPokeballRandom(Pokedex *pokedex, int number);

    void captureOnePokemon(Pokemon *pokemon);

    Pokemon *getOnePokemonByIndexInList(int index);
};


#endif //POKEMONIS_POKEBALL_H
