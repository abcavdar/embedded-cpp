#ifndef CPP_TRAINING_ENUMS_H_
#define CPP_TRAINING_ENUMS_H_

#include <cstdint>  // For int8_t data type

enum class ShapeType : int8_t { kUndefined, kSquare, kCircle, kRectangle };

enum class Direction : int8_t { kNorth = 1, kSouth, kEast, kWest };

#endif  // !CPP_TRAINING_ENUMS_H_