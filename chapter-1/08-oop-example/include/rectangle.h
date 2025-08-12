#ifndef CPP_TRAINING_RECTANGLE_H_
#define CPP_TRAINING_RECTANGLE_H_
#include <point.h>
#include <shape.h>

class Rectangle : public Shape {
 private:
  unsigned int id_;
  Point left_top_;
  unsigned int width_;
  unsigned int height_;

 public:
  unsigned int id() const override;
  ShapeType type() const override;
  void Draw() const override;
  void Move(const Direction& direction, int distance) override;
};

#endif  // !CPP_TRAINING_RECTANGLE_H_
