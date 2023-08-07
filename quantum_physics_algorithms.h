// quantum_physics_algorithms.h

#pragma once
#include <complex>
#include <vector>

class QuantumPhysics {
public:
    // Calculate the wave function for a particle at position x, with wave number k and the wave centered at position x0.
    static std::complex<double> waveFunction(double x, double k, double x0);

    // Create a superposition of quantum states, each with a corresponding probability.
    static std::vector<std::complex<double>> superposition(std::vector<std::complex<double>> states, std::vector<double> probabilities);
};
