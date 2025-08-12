#ifndef CPP_TRAINING_SHAPE_H_
#define CPP_TRAINING_SHAPE_H_

#include <enums.h>

// Interface
class Shape {
 public:
  virtual unsigned int id() const = 0;
  virtual ShapeType type() const = 0;
  virtual void Draw() const = 0;
  virtual void Move(const Direction& direction, int distance) = 0;
};

#endif  // !CPP_TRAINING_SHAPE_H_
