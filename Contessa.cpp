#include "headers/Contessa.hpp"

#ifndef ASSASSIN_H
#define ASSASSIN_H
#include "headers/Assassin.hpp"
#endif

void coup::Contessa::block(coup::Assassin &player)
{
    player.uncoup();
}