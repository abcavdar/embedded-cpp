#include "circle.h"

#include <iostream>

unsigned int Circle::id() const { return this->id_; }

ShapeType Circle::type() const { return ShapeType::kCircle; }

void Circle::Draw() const {
  std::cout << "Circle [" << id_ << "]: Center: (" << center_.x << ", "
            << center_.y << "), Radius: " << radius_ << std::endl;
}

void Circle::Move(const Direction& direction, int distance) {
  switch (direction) {
    case Direction::kNorth:
      center_.y = ((center_.y - radius_ - distance) >= 0)
                      ? (center_.y - distance)
                      : center_.y;
      break;
    case Direction::kSouth:
      center_.y = ((center_.y + radius_ + distance) <= kWindowHeight)
                      ? (center_.y + distance)
                      : center_.y;
      break;
    case Direction::kEast:
      center_.x = ((center_.x + radius_ + distance) <= kWindowWidth)
                      ? (center_.x + distance)
                      : center_.x;
      break;
    case Direction::kWest:
      center_.x = ((center_.x - radius_ - distance) >= 0)
                      ? (center_.x - distance)
                      : center_.x;
      break;

    default:
      break;
  }
  std::cout << "The position after Move: ";
  Draw();
}
