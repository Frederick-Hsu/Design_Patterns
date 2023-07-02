/*!
 *  \file       creature.cpp
 *  \brief
 *
 */


#include "creature.hpp"

#include <algorithm>
#include <numeric>

Creature::Creature() : abilities{}
{
}

int Creature::get_strength() const
{
    return abilities[index_strength];
}

void Creature::set_strength(int value)
{
    abilities[index_strength] = value;
}

int Creature::get(Creature::Abilities index) const
{
    if (index >= Creature::Abilities::COUNT)
    {
        throw std::range_error("Exceeded the index range.");
    }
    return abilities[index];
}

void Creature::set(Abilities index, int value)
{
    if (index >= Abilities::COUNT)
    {
        throw std::range_error("Exceeded the index range.");
    }
    abilities[index] = value;
}

int Creature::sum() const
{
    return std::accumulate(abilities.begin(), abilities.end(), 0);
}

double Creature::average() const
{
    return sum() / static_cast<double>(COUNT);
}

int Creature::max() const
{
    return *std::max_element(abilities.begin(), abilities.end());
}
