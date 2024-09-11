//
// Created by antotauv on 09/09/2024.
//

#ifndef POKEMONIS_POKEDEX_H
#define POKEMONIS_POKEDEX_H

#include "SetOfPokemon.h"

class Pokedex : public SetOfPokemon{
private :
    Pokedex(string name);
    static Pokedex * instance;
public:

    static Pokedex * getInstance();
    Pokemon* getOnePokemonByName(string name);
    Pokemon* getOnePokemonById(int id);
    ~Pokedex();
};


#endif //POKEMONIS_POKEDEX_H
