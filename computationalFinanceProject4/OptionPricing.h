//
// Created by paragonhao on 22/1/19.
//

#ifndef COMPUTATIONALFINANCE_OPTIONPRICING_H
#define COMPUTATIONALFINANCE_OPTIONPRICING_H


class OptionPricing {
public:
    static long double * callOptionPriceSimulation(long double *w_t, int size, double r, double sigma, double T, double s0, double x);
    static long double callOptionSimAntithetic(int seed, int size, double r, double sigma, double T, double s0, double x);
    static double callOptionPriceBS(double r, double sigma, double T, double s0, double x);
    static long double callOptionEuropeanBinomial(const double& S, const double& K, const double& r,
                                                  const double& sigma, const double& t, const int& steps);
};


#endif //COMPUTATIONALFINANCE_OPTIONPRICING_H
