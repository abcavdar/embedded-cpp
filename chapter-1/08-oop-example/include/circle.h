#ifndef CPP_TRAINING_CIRCLE_H_
#define CPP_TRAINING_CIRCLE_H_

#include <constants.h>
#include <point.h>
#include <shape.h>

class Circle : public Shape {
 private:
  unsigned int id_;
  unsigned int radius_;
  Point center_;

 public:
  unsigned int id() const override;
  ShapeType type() const override;
  void Draw() const override;
  virtual void Move(const Direction& direction, int distance) override;
};

#endif  // !CPP_TRAINING_CIRCLE_H_
