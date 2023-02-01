#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <vector>

class Sequence {
public:
  Sequence();
  Sequence(const Sequence &other);
  ~Sequence();

  double getValue(int index) const;
  void setValue(int index, double value);

  double computeIntegral(double start, double end) const;

private:
  std::vector<double> values;
};

#endif