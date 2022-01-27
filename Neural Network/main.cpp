// main.cpp
 
// don't forget to include out neural network
#include "NeuralNetwork.hpp"
 
//... data generator code here
 
typedef std::vector<RowVector*> data;
int main()
{
    NeuralNetwork n({ 2, 3, 1 });
    data in_dat, out_dat;
    genData("test");
    ReadCSV("test-in", in_dat);
    ReadCSV("test-out", out_dat);
    n.train(in_dat, out_dat);
    return 0;
}