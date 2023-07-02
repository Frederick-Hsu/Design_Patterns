/*!
 *  \file       creature.hpp
 *  \brief
 *
 */


#pragma once

#include <array>

class Creature
{
#if 0
    int strength;
    int agility;
    int intelligence;
#endif
public:
    enum Abilities
    {
        index_strength,
        index_agility,
        index_intelligence,
        COUNT
    };
    Creature();
public:
    int get_strength() const;
    void set_strength(int strength);

    int get(Abilities index) const;
    void set(Abilities index, int value);

    int sum() const;
    double average() const;
    int max() const;
private:
    std::array<int, COUNT> abilities;
};
