
#include "course.h"

Course::Course(string n, int i, Time s, Time e, string d, string lo, string in) :
    name(n), id(i), start(s), end(e), day(d), location(lo), instructor(in) {}

void Course::set_name(string n) {
    name = n;
}

void Course::set_id(int i) {
    id = i;
}

void Course::set_timeStart(Time s) {
    start = s;
}

void Course::set_timeEnd(Time e) {
    end = e;
}

void Course::set_day(string d) {
    day = d;
}

void Course::set_location(string lo) {
    location = lo;
}

void Course::set_instructor(string in) {
    instructor = in;
}

