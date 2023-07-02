/*!
 *  \file       neural_networks.cpp
 *  \brief
 *
 */



#include "neural_networks.hpp"

Neuron::Neuron()
{
    static int id = 1;
    this->id = id++;
    // Neuron::id = id++;
}

Neuron* Neuron::begin()
{
    return this;
}

Neuron* Neuron::end()
{
    return this+1;
}

std::ostream& operator<<(std::ostream& os, const Neuron& obj)
{
    for (Neuron* neuron : obj.in)
    {
        os << neuron->id << "\t--->\t[" << obj.id << "]" << std::endl;
    }
    for (Neuron* neuron : obj.out)
    {
        os << "[" << obj.id << "]\t--->\t" << neuron->id << std::endl;
    }
    return os;
}

NeuronLayer::NeuronLayer(int count)
{
    while (count-- > 0)
    {
        emplace_back(Neuron{});
    }
}

std::ostream& operator<<(std::ostream& os, NeuronLayer& obj)
{
    for (auto& n : obj)
    {
        os << n;
    }
    return os;
}
