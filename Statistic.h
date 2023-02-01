/**
 * @file Statistic.h
 * @brief Plik nagłówkowy klasy Statistic.
 * 
 * Plik zawiera definicję klasy Statistic, która służy do obliczania rozkładu normalnego.
 */

#ifndef STATISTIC_H
#define STATISTIC_H

/**
 * @class Statistic
 * @brief Klasa służąca do obliczania rozkładu normalnego.
 * 
 * Klasa zawiera konstruktor domyślny, konstruktor kopiujący, destruktor, funkcję dostępu do składowych oraz funkcję obliczeniową obliczającą rozkład normalny.
 */
class Statistic {
    public:
        /**
         * @brief Konstruktor domyślny.
         * 
         * Inicjalizuje średnią i odchylenie standardowe domyślnymi wartościami.
         */
        Statistic();

        /**
         * @brief Konstruktor kopiujący.
         * 
         * Kopiuje obiekt podanego jako argument.
         * 
         * @param s Obiekt do skopiowania.
         */
        Statistic(const Statistic &src);

        /**
         * @brief Destruktor.
         * 
         * Zwalnia pamięć zaalokowaną dla obiektu.
         */
        ~Statistic();

        /**
         * @brief Funkcja ustawiająca średnią.
         * 
         * Ustawia średnią rozkładu normalnego.
         * 
         * @param m Średnia do ustawienia.
         */
        void setMean(double mean);

        /**
         * @brief Funkcja ustawiająca odchylenie standardowe.
         * 
         * Ustawia odchylenie standardowe rozkładu normalnego.
         * 
         * @param s Odchylenie standardowe do ustawienia.
         */
        void setStdDev(double stdDev);

        /**
         * @brief Funkcja zwracająca średnią.
         * 
         * Zwraca średnią rozkładu normalnego.
         * 
         * @return Średnia rozkładu normalnego.
         */
        double getMean() const;

        /**
        * @brief Funkcja dostępu do składowej mean
        * 
        * Zwraca wartość średnią.
        * 
        * @return Wartość średnia
        */
        double getStdDev() const;

        /**
        * @brief Funkcja obliczająca rozkład normalny dla danych wejściowych
        * @param x Wartość dla której obliczamy rozkład normalny
        * @return Rozkład normalny dla danych wejściowych
        */
        double normalDistribution(double x) const;
        
    private:
        /**
        * @brief Reprezentuje wartość średnią zbioru danych
        */
        double mean;
        /**
        * @brief Reprezentuje wartość odchylenia standardowego zbioru danych
        */
        double stdDev;
};

#endif