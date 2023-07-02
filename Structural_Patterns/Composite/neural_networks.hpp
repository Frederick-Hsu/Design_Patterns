/*!
 *  \file       neural_networks.hpp
 *  \brief
 *
 */



#pragma once

#include <vector>
#include <iostream>

/* Prototype =====================================================================================*/
struct Neuron;

template<typename Self>
class SomeNeurons
{
public:
    template<typename T> void connect_to(T& other);
};

struct Neuron : public SomeNeurons<Neuron>
{
    std::vector<Neuron*> in;
    std::vector<Neuron*> out;
    unsigned int id;

    Neuron();
    Neuron* begin();
    Neuron* end();
    friend std::ostream& operator<<(std::ostream& os, const Neuron& obj);
};

class NeuronLayer : public std::vector<Neuron>, public SomeNeurons<NeuronLayer>
{
public:
    NeuronLayer(int count);
    friend std::ostream& operator<<(std::ostream& os, NeuronLayer& obj);
};


/* Implementation ================================================================================*/

template<typename Self> template<typename T>
void SomeNeurons<Self>::connect_to(T& other)
{
    for (Neuron& from : *static_cast<Self*>(this))
    {
        for (Neuron& to : other)
        {
            from.out.push_back(&to);
            to.in.push_back(&from);
        }
    }
}
