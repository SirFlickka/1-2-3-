// qubit.h

#pragma once
#include <complex>

class Qubit {
public:
    Qubit();

    std::complex<double> getStateZero();
    std::complex<double> getStateOne();

    void setStateZero(std::complex<double> stateZero);
    void setStateOne(std::complex<double> stateOne);

    double getProbabilityZero();
    double getProbabilityOne();

private:
    std::complex<double> stateZero;
    std::complex<double> stateOne;
};
