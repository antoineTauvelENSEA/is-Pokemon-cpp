cmake_minimum_required(VERSION 3.21)
project(PokemonIS)

set(CMAKE_CXX_STANDARD 14)

add_executable(PokemonIS main.cpp Pokemon.cpp SetOfPokemon.cpp Pokedex.cpp Pokedex.h Pokeball.cpp Pokeball.h PokemonParty.cpp PokemonParty.h)
