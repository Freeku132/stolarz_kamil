#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <vector>

/**
 * @brief Klasa Sequence reprezentuje sekwencję wartości.
 * Zapewnia zestaw funkcji do obliczania całki oznaczonej
 * sekwencji na określonym przedziale.
 * 
 * @tableofcontents
 *
 * @section constructor Konstruktory
 *  - Sequence()
 *  - Sequence(const Sequence &other)
 *
 * @section destructor Destruktor
 *  - ~Sequence()
 *
 * @section access Funkcje dostępu
 *  - double getValue(int index) const
 *  - void setValue(int index, double value)
 *
 * @section calculation Funkcje obliczeniowe
 *  - double computeIntegral(double start, double end) const
 */
class Sequence {
public:
  /**
   * @brief Konstruuje domyślną sekwencję.
   */
  Sequence(){}

  /**
   * @brief Konstruuje kopię innej sekwencji.
   * @param other Sekwencja do skopiowania.
   */
  Sequence(const Sequence &other){}

  /**
   * @brief Niszczy sekwencję.
   */
  ~Sequence(){}

  /**
   * @brief Zwraca wartość w określonym indeksie.
   * @param index Indeks wartości.
   * @return Wartość w określonym indeksie.
   */
  double getValue(int index) const{
    return values[index];
  }

  /**
   * @brief Ustawia wartość w określonym indeksie.
   * @param index Indeks wartości.
   * @param value Wartość do ustawienia.
   */
  void setValue(int index, double value){
    values[index] = value;
  }

  /**
   * @brief Oblicza całkę oznaczoną sekwencji na określonym przedziale.
   * 
   * Całka oznaczona jest obliczana jako suma wartości sekwencji
   * pomnożona przez długość przedziału. Wzór na całkę oznaczoną:
   * 
   * @f[
   * \int_{a}^{b} f(x) dx = \sum_{i=0}^{n-1} values_i \cdot \frac{b-a}{n}
   * @f]
   * 
   * @param start Początek przedziału.
   * @param end Koniec przedziału.
   * @return Całka oznaczona sekwencji na określonym przedziale.
   */
  double computeIntegral(double start, double end) const{
    double sum = 0;
    for (int i = 0; i < values.size() - 1; ++i) {
      sum += (values[i] + values[i + 1]) * (end - start) / 2;
      start = end;
      end = start + (end - start) / values.size();
    }
    return sum;
  }

private:
  std::vector<double> values;
};

#endif