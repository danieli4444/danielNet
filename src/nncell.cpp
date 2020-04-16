#include "NNcell.h"
#include <iostream>

// cell constructor
NNcell::NNcell(void){
    std::cout << "TOREMOVE created new cell" << std::endl;
}
// cell destructor
NNcell::~NNcell(void){
    std::cout << "TOREMOVE created new cell" << std::endl;
}

//copy constructor
NNcell::NNcell(const NNcell &other){
    weight = other.weight;
    bias = other.bias;
}    

/* simple methods: */
int NNcell::get_weight(void){
    return this->weight;
}
int NNcell::set_weight(int new_weight){
    this->weight = new_weight;
}

int NNcell::get_bias(void){
    return this->weight;
}
int NNcell::set_bias(int new_weight){
    this->weight = new_weight;
}
/* simple methods: */

