// qubit.cpp

#include "qubit.h"
#include <complex>
#include <cmath>

Qubit::Qubit() : stateZero(1), stateOne(0) {}

std::complex<double> Qubit::getStateZero() {
    return this->stateZero;
}

std::complex<double> Qubit::getStateOne() {
    return this->stateOne;
}

void Qubit::setStateZero(std::complex<double> stateZero) {
    this->stateZero = stateZero;
}

void Qubit::setStateOne(std::complex<double> stateOne) {
    this->stateOne = stateOne;
}

double Qubit::getProbabilityZero() {
    return std::norm(this->stateZero);
}

double Qubit::getProbabilityOne() {
    return std::norm(this->stateOne);
}
