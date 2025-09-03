#ifndef TIME_H
#define TIME_H

#include <string>

class Time{
private:
    int hours;
    int minutes;
public:
    Time(int,int);
    void set_minutes(int mins);
    void set_hours(int hrs);
    int get_minutes() const { return minutes; }
    int get_hours() const { return hours; }
    std::string toString() const {
        return std::to_string(hours) + ":" + (minutes < 10 ? "0" : "") + std::to_string(minutes);
    }
};
#endif
