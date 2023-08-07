// qubit_x_system_algorithms.cpp

#include "Qubit.h"
#include "QuantumGate.h"

// Function to entangle two qubits
void entangleQubits(Qubit& qubit1, Qubit& qubit2) {
    QuantumGate gate;
    gate.applyHadamard(qubit1); // Apply a Hadamard gate to the first qubit
    // The second qubit state depends on the state of the first qubit
    if (qubit1.measure() == 0) { 
        qubit2.applyPauliX();
    }
}

// Function to apply a series of gates to a system of qubits
void applyGateSequence(std::vector<Qubit>& qubits, std::vector<std::function<void(Qubit&)>>& gateSequence) {
    for (auto& qubit : qubits) {
        for (auto& gate : gateSequence) {
            gate(qubit);
        }
    }
}
