#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "time.h"
using namespace std;

class Course {
private:
    string name;
    int id;
    Time start;
    Time end;
    string day;
    string location;
    string instructor;

public:
    Course(string name, int id, Time s, Time e, string d, string lo, string in);

    void set_name(string n);
    void set_id(int id);  // Fixed: id is int, not string
    void set_timeStart(Time s);
    void set_timeEnd(Time e);
    void set_day(string d);
    void set_location(string lo);
    void set_instructor(string in);

    string get_name() const {
        return name;
    }

    int get_id() const {
        return id;
    }

    Time get_timeStart() const {
        return start;
    }

    Time get_timeEnd() const {
        return end;
    }

    string getDay() const {
        return day;
    }

    string getLocation() const {
        return location;
    }

    string getInstructor() const {
        return instructor;
    }
};

#endif
