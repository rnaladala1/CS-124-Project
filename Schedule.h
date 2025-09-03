#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <string>
#include "course.h"
using namespace std;

const int MAX_NUM_COURSES = 10;

class Schedule {


private:
    //array
    Course* schedule[MAX_NUM_COURSES];
    int num_courses = 0;

    Time start;
    Time end;
    string course_name;
    int course_id;
    string course_day;
    string course_location;
    string course_instructor_name;



public:
    // Constructor
    Schedule(string n, int id, Time s, Time e, string d, string lo, string in);

    // Setters
    void setCourseName(const string& n);
    void setCourseId(int id);
    void setStart(Time s);
    void setEnd(Time e);
    void setCourseDay(const string& d);
    void setCourseLocation(const string& lo);
    void setCourseInstructorName(const string& in);
    //add course !
    void addCourse(string n, int id, Time s, Time e, string d, string lo, string in);


    // Getters
    string getCourseName() const;
    int getCourseId() const;
    Time getStart() const;
    Time getEnd() const;
    string getCourseDay() const;
    string getCourseLocation() const;
    string getCourseInstructorName() const;

    //  functions later
    // // void removeCourse(int start, int end, string day[]);
    void displayCourses() const;

};

#endif
