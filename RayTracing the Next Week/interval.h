﻿#ifndef INTERVAL_H
#define INTERVAL_H
#include<cmath>
#include<climits>
class interval {
public:
    double min, max;

    double size() const {
        return max - min;
    }
    interval expand(double delta) const {
        auto padding = delta / 2;
        return interval(min - padding, max + padding);
    }
    interval() : min(std::numeric_limits<double>::infinity()), max(-std::numeric_limits<double>::infinity()) {} // Default interval is empty

    interval(double _min, double _max) : min(_min), max(_max) {}

    bool contains(double x) const {
        return min <= x && x <= max;
    }

    bool surrounds(double x) const {
        return min < x && x < max;
    }
    double clamp(double x) const {
        if (x < min) return min;
        if (x > max) return max;
        return x;
    }
    static const interval empty;
    static const interval universe;
};

const  interval interval::empty = interval(std::numeric_limits<double>::infinity(), -std::numeric_limits<double>::infinity());
const  interval interval::universe = interval(-std::numeric_limits<double>::infinity(), std::numeric_limits<double>::infinity());

interval operator+(const interval& ival, double displacement) {
    return interval(ival.min + displacement, ival.max + displacement);
}

interval operator+(double displacement, const interval& ival) {
    return ival + displacement;
}
#endif