#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define _USE_MATH_DEFINES

#include "sinewave.hpp"

SineWave::SineWave(int freq, float duration)
{
  const unsigned int sample_rate = 48000;

  int num_samples_ = static_cast<int>(duration * sample_rate);
  for(int i = 0;i<num_samples_;i++)
  {
    values_.push_back(sin((2.0 * M_PI * freq * i) / sample_rate));
  }
}

SineWave::~SineWave() {
}

void SineWave::print() {
  for(const float& value : values_) 
    std::cout << value << std::endl;
}
