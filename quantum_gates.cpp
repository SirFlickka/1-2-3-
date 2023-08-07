// quantum_gates.cpp

#include "quantum_gates.h"
#include <complex>
#include <cmath>

void QuantumGate::applyHadamard(Qubit& qubit) {
    std::complex<double> oldStateZero = qubit.stateZero;
    std::complex<double> oldStateOne = qubit.stateOne;

    qubit.stateZero = (oldStateZero + oldStateOne) / std::sqrt(2);
    qubit.stateOne = (oldStateZero - oldStateOne) / std::sqrt(2);
}

void QuantumGate::applyPauliX(Qubit& qubit) {
    std::swap(qubit.stateZero, qubit.stateOne);
}

void QuantumGate::applyPauliY(Qubit& qubit) {
    std::complex<double> i(0, 1);
    std::complex<double> oldStateZero = qubit.stateZero;
    std::complex<double> oldStateOne = qubit.stateOne;

    qubit.stateZero = i * oldStateOne;
    qubit.stateOne = -i * oldStateZero;
}

void QuantumGate::applyPauliZ(Qubit& qubit) {
    qubit.stateOne *= -1;
}

void QuantumGate::applyPhase(Qubit& qubit, double theta) {
    std::complex<double> phaseShift(cos(theta), sin(theta));
    qubit.stateOne *= phaseShift;
}

void QuantumGate::applyCNOT(Qubit& control, Qubit& target) {
    if (std::abs(control.stateOne) > 1e-10) {
        applyPauliX(target);
    }
}
