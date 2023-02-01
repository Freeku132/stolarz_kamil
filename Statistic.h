#ifndef STATISTIC_H
#define STATISTIC_H

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

#endif
