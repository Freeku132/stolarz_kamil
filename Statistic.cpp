#include <iostream>
#include <cmath>

/**
 * @class Statistic
 * @brief Reprezentuje rozkład normalny z średnią i odchyleniem standardowym.
 * 
 * Ta klasa zapewnia reprezentację rozkładu normalnego z średnią i odchyleniem standardowym.
 * Również zapewnia metody do obliczania rozkładu normalnego dla danej wartości.
 * Wzór na rozkład normalny użyty w tej klasie to:
 * 
 * \f$ f(x) = \frac{1}{\sigma\sqrt{2\pi}}e^{-\frac{1}{2}(\frac{x-\mu}{\sigma})^2} \f$
 * 
 * gdzie \f$ \mu \f$ jest średnią, a \f$ \sigma \f$ jest odchyleniem standardowym.
 */
class Statistic {
    public:
        /**
         * @brief Konstruktor domyślny.
         * 
         * Tworzy nową instancję klasy Statistic z średnią i odchyleniem standardowym ustawionymi na 0.
         */
        Statistic::Statistic(){
            mean = 0;
            stdDev = 0;
        }

        /**
         * @brief Konstruktor kopiujący.
         * 
         * Tworzy nową instancję klasy Statistic jako kopię danej instancji.
         * 
         * @param src Instancja do skopiowania.
         */
        Statistic::Statistic(const Statistic &src){
            mean = src.mean;
            stdDev = src.stdDev;
        }

        /**
         * @brief Destruktor.
         */
        Statistic::~Statistic(){
            //do nothing
        }

        /**
         * @brief Ustawia średnią rozkładu normalnego.
         * 
         * @param mean Średnia rozkładu normalnego.
         */
        void Statistic::setMean(double mean){
            this->mean = mean;
        }

        /**
         * @brief Ustawia odchylenie standardowe rozkładu normalnego.
         * 
         * @param stdDev Odchylenie standardowe rozkładu normalnego.
         */
        void Statistic::setStdDev(double stdDev){
            this->stdDev = stdDev;
        }

        /**
         * @brief Pobiera średnią rozkładu normalnego.
         * 
         * @return Średnia rozkładu normalnego.
         */
        double Statistic::getMean() const{
            return mean;
        }

        /**
         * @brief Pobiera odchylenie standardowe rozkładu normalnego.
         * 
         * @return Odchylenie standardowe rozkładu normalnego.
         */
        double getStdDev() const{
            return stdDev;
        }

        /**
         * @brief Oblicza rozkład normalny du danej wartości.
        *
        * Oblicza wartość funkcji rozkładu normalnego dla danej wartości.
        *
        * @param x Wartość dla której chcemy obliczyć rozkład normalny.
        * @return Wartość rozkładu normalnego dla danej wartości.
        */
        double Statistic::normalDistribution(double x) const{
            double exponent = -0.5 * pow((x-mean) / stdDev, 2);
            return (1.0/(stdDev * sqrt(2.0 * M_PI))) * exp(exponent);
        }
        private:
            double mean;  ///< Średnia rozkładu normalnego
            double stdDev;  ///< Odchylenie standardowe rozkładu normalnego
        };