// Copyright

#include "include/shape.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace shape {
namespace {

TEST(ShapeTest1, RectangleSize_true) {
  Rectangle rect(10, 2);
  EXPECT_EQ(rect.GetSize(), 20);
}

TEST(ShapeTest1, RectangleSize_false) {
  Rectangle rect(10, 2);
  EXPECT_EQ(rect.GetSize(), 10);
}

TEST(ShapeTest2, RectangleSize_false) {
  Rectangle rect(10, 2);
  EXPECT_EQ(rect.GetSize(), 10);
}

}  // namespace
}  // namespace shape
