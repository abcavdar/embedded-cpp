#include "rectangle.h"

#include <iostream>

#include "constants.h"

unsigned int Rectangle::id() const { return this->id_; }

ShapeType Rectangle::type() const { return ShapeType::kRectangle; }

void Rectangle::Draw() const {
  std::cout << "Rectangle [" << id_ << "]: Left-Top Corner: (" << left_top_.x
            << ", " << left_top_.y << "), Width: " << width_
            << ", Height: " << height_ << std::endl;
}

void Rectangle::Move(const Direction& direction, int distance) {
  switch (direction) {
    case Direction::kNorth:
      left_top_.y = ((left_top_.y - distance) >= 0) ? (left_top_.y - distance)
                                                    : left_top_.y;
      break;
    case Direction::kSouth:
      left_top_.y = ((left_top_.y + height_ + distance) <= kWindowHeight)
                        ? (left_top_.y + distance)
                        : left_top_.y;
      break;
    case Direction::kEast:
      left_top_.x = ((left_top_.x + width_ + distance) <= kWindowWidth)
                        ? (left_top_.x + distance)
                        : left_top_.x;
      break;
    case Direction::kWest:
      left_top_.x = ((left_top_.x - distance) >= 0) ? (left_top_.x - distance)
                                                    : left_top_.x;
      break;

    default:
      break;
  }
  std::cout << "The position after Move: ";
  Draw();
}
