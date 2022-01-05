// Copyright
#ifndef SHAPE_H_
#define SHAPE_H_

namespace shape {

class Rectangle {
 public:
  Rectangle(float w, float h);

  float GetSize() const;
  void Print() const;

 private:
  float w_, h_;
};

}  // namespace shape

#endif  // SHAPE_H_
