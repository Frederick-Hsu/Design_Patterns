/*!
 *  \file       test_creature.c++
 *  \brief
 *
 */


#include "test_creature.h++"

TEST_F(UTester4Creature, CheckArrayBackedProperties)
{
    creature.set_strength(125);
    EXPECT_EQ(creature.get_strength(), 125);

    auto agility = 25;
    creature.set(Creature::Abilities::index_agility, agility);
    EXPECT_EQ(creature.get(Creature::Abilities::index_agility), agility);

    EXPECT_EQ(creature.get(Creature::Abilities::index_intelligence), 0);

    std::cout << "Sum = " << creature.sum() << std::endl;

    EXPECT_EQ(creature.max(), 125);
}
