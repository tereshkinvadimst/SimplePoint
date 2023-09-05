#ifndef POINT_HPP
#define POINT_HPP
#include <array>
namespace simple_point {
  template<class T, std::size_t DIMENSIONAL, class CoordynateSystem>
  class Point {
  public:
    using ValueType = T;
    using SystemType = CoordynateSystem;
    using DataType  = std::array<T, DIMENSIONAL>;

    static const auto DIM = DIMENSIONAL;

    Point():
      data_{} {};
    Point(const T& value) {
      for(auto& d : data_) {
        d = value;
      }
    };
    Point(const Point& point): data_{point.data_} {};

    template<std::size_t INDEX>
    void set(const T& value) {
      data_[INDEX] = value;
    }
    
    template<std::size_t INDEX>
    constexpr T const& get() {
      return data_[INDEX];
    }
  private:
    DataType data_;
  };
} // namespace simple_point

#endif //POINT_HPP