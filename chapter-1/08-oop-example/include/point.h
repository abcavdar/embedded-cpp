#ifndef CPP_TRAINING_POINT_H_
#define CPP_TRAINING_POINT_H_

struct Point {
  unsigned int x{0};
  unsigned int y{0};

  Point() : x(0), y(0) {}

  Point(unsigned int x, unsigned int y) : x(x), y(y) {}
};

#endif  // !CPP_TRAINING_POINT_H_
