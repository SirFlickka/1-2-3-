// quantum_gates.h

#pragma once

#include <complex>
#include "qubit.h"

class QuantumGate {
public:
    // Apply a Hadamard gate to the qubit
    static void applyHadamard(Qubit& qubit);
    
    // Apply a Pauli-X gate to the qubit
    static void applyPauliX(Qubit& qubit);
    
    // Apply a Pauli-Y gate to the qubit
    static void applyPauliY(Qubit& qubit);
    
    // Apply a Pauli-Z gate to the qubit
    static void applyPauliZ(Qubit& qubit);
    
    // Apply a phase shift to the qubit
    static void applyPhase(Qubit& qubit, double theta);
    
    // Apply a controlled NOT (CNOT) gate to two qubits
    static void applyCNOT(Qubit& control, Qubit& target);
};
