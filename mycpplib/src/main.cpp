#include <iostream>
#include <sstream>
#include "sinewave.hpp"

int main(int argc, char *argv[]){
  if(argc > 2){
    std::istringstream ss1(argv[1]);
    int freq = 0;
    if (!(ss1 >> freq)) {
      std::cerr << "Invalid freq: " << argv[1] << '\n';
    } else if (!ss1.eof()) {
      std::cerr << "Trailing characters after number: " << argv[1] << '\n';
    }
    std::istringstream ss2(argv[2]);
    float duration = 0.0;
    if (!(ss2 >> duration)) {
      std::cerr << "Invalid duration: " << argv[2] << '\n';
    } else if (!ss2.eof()) {
      std::cerr << "Trailing characters after number: " << argv[2] << '\n';
    }
    SineWave *mywave = new SineWave(freq, duration);
    mywave->print();
    delete mywave;
  }
  return 0;
}
