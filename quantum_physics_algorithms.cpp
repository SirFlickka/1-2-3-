// quantum_physics_algorithms.cpp

#include "quantum_physics_algorithms.h"
#include <cmath>
#include <complex>
#include <vector>

std::complex<double> QuantumPhysics::waveFunction(double x, double k, double x0) {
    const std::complex<double> i(0, 1);
    double insideExp = k * (x - x0);
    return std::exp(i * insideExp);
}

std::vector<std::complex<double>> QuantumPhysics::superposition(std::vector<std::complex<double>> states, std::vector<double> probabilities) {
    std::vector<std::complex<double>> superpositionState;
    if(states.size() != probabilities.size()) {
        throw "States and probabilities vectors must be the same size.";
    }
    double probSum = 0;
    for(double p : probabilities) {
        probSum += p;
    }
    if(std::abs(probSum - 1.0) > 1e-10) {
        throw "Probabilities must sum to 1.";
    }
    for(int i = 0; i < states.size(); i++) {
        superpositionState.push_back(std::sqrt(probabilities[i]) * states[i]);
    }
    return superpositionState;
}
