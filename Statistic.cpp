#include <iostream>
#include <cmath>

class Statistic {
    public:
        Statistic();
        Statistic(const Statistic &src);
        ~Statistic();
        void setMean(double mean);
        void setStdDev(double stdDev);
        double getMean() const;
        double getStdDev() const;
        double normalDistribution(double x) const;

    private:
        double mean;
        double stdDev;
};

Statistic::Statistic() {
    mean = 0;
    stdDev = 0;
}

Statistic::Statistic(const Statistic &src) {
    mean = src.mean;
    stdDev = src.stdDev;
}

Statistic::~Statistic() {
    // do nothing
}

void Statistic::setMean(double mean) {
    this->mean = mean;
}

void Statistic::setStdDev(double stdDev) {
    this->stdDev = stdDev;
}

double Statistic::getMean() const {
    return mean;
}

double Statistic::getStdDev() const {
    return stdDev;
}

double Statistic::normalDistribution(double x) const {
    double exponent = -0.5 * pow((x - mean) / stdDev, 2);
    return (1.0 / (stdDev * sqrt(2.0 * M_PI))) * exp(exponent);
}