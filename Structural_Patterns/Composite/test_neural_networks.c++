/*!
 *  \file       test_neural_networks.c++
 *  \brief
 *
 */


#include <gtest/gtest.h>

#include "neural_networks.hpp"


TEST(UTester4NeuralNetworks, CheckHowScalarObjectBehavesLikeIterableCollectionOfObjects)
{
    using namespace std;

    Neuron my_neuron, your_neuron;
    my_neuron.connect_to(your_neuron);

    cout << my_neuron << your_neuron << endl;

    NeuronLayer convolutional_layer(5);
    Neuron conv_neuron;
    convolutional_layer.connect_to(conv_neuron);

    cout << "Neuron " << conv_neuron.id << endl << conv_neuron << endl;
    cout << "Layer " << endl << convolutional_layer << endl;

    NeuronLayer layer2(2), layer3(3);
    layer2.connect_to(layer3);
    cout << "Layer 2" << endl << layer2;
    cout << "Layer 3" << endl << layer3;
}
