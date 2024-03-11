#ifndef SINE_WAVE_HPP_
#define  SINE_WAVE_HPP_
#include <vector>

class SineWave {
public:
  SineWave(int freq, float duration);
  ~SineWave();
  void print();
private:
  std::vector<float> values_;
};

#endif // SINE_WAVE_HPP_
