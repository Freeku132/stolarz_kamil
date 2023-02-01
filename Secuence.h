#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <vector>

/**
 * @brief Klasa Sequence reprezentuje sekwencję wartości.
 * Zapewnia zestaw funkcji do obliczania całki oznaczonej
 * sekwencji na określonym przedziale.
 */
class Sequence {
public:
  /**
   * @brief Konstruuje domyślną sekwencję.
   */
  Sequence();

  /**
   * @brief Konstruuje kopię innej sekwencji.
   * @param other Sekwencja do skopiowania.
   */
  Sequence(const Sequence &other);

  /**
   * @brief Niszczy sekwencję.
   */
  ~Sequence();

  /**
   * @brief Zwraca wartość w określonym indeksie.
   * @param index Indeks wartości.
   * @return Wartość w określonym indeksie.
   */
  double getValue(int index) const;

  /**
   * @brief Ustawia wartość w określonym indeksie.
   * @param index Indeks wartości.
   * @param value Wartość do ustawienia.
   */
  void setValue(int index, double value);

  /**
   * @brief Oblicza całkę oznaczoną sekwencji na określonym przedziale.
   * @param start Początek przedziału.
   * @param end Koniec przedziału.
   * @return Całka oznaczona sekwencji na określonym przedziale.
   */
  double computeIntegral(double start, double end) const;

private:
  std::vector<double> values;
};

#endif