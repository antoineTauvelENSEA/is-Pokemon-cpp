//
// Created by antotauv on 12/09/2024.
//

#ifndef POKEMONIS_POKEMONPARTY_H
#define POKEMONIS_POKEMONPARTY_H


#include "SetOfPokemon.h"
#include "Pokeball.h"
#include <vector>

using std::vector;

class PokemonParty : public SetOfPokemon {
public:
    PokemonParty(Pokeball * ppokeball, vector<int> vectorOfIndexInPokeball);

    Pokemon * getOnePokemonById(int id) override;
    Pokemon* getOnePokemonByName(string name) override;


};


#endif //POKEMONIS_POKEMONPARTY_H
