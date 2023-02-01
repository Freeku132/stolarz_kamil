#include <vector>

class Sequence {
public:
  // Konstruktor domyślny
  Sequence() {}

  // Konstruktor kopiujący
  Sequence(const Sequence &other) {}

  // Destruktor
  ~Sequence() {}

  // Funkcja dostępu do składowych
  double getValue(int index) const { return values[index]; }
  void setValue(int index, double value) { values[index] = value; }

  // Funkcja obliczeniowa
  double computeIntegral(double start, double end) const {
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