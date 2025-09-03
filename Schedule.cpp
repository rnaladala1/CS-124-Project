#include <iostream>
#include <string>
#include "Schedule.h"
#include "course.h"

using namespace std;

// Constructor (initializer list style — recommended)
Schedule::Schedule(string n, int id, Time s, Time e, string d, string lo, string in) : 
        course_name(n), course_id(id), start(s), end(e),
        course_day(d), course_location(lo), course_instructor_name(in) {
    for (int i = 0; i < MAX_NUM_COURSES; i++) {
        schedule[i] = nullptr;
    }
    num_courses = 0;
}

// ----- Setters -----
void Schedule::setCourseName(const string& n) {
    this->course_name = n;
}

//add course
void Schedule::addCourse(string n, int id, Time s, Time e, string d, string lo, string in) {
    if (num_courses < MAX_NUM_COURSES) {
        Course* c = new Course(n, id, s, e, d, lo, in);
        schedule[num_courses] = c;
        num_courses++;
    }
}

void Schedule::setCourseId(int id) {
    this->course_id = id;
}

void Schedule::setStart(Time s) {
    this->start = s;
}

void Schedule::setEnd(Time e) {
    this->end = e;
}

void Schedule::setCourseDay(const string& d) {
    this->course_day = d;
}

void Schedule::setCourseLocation(const string& lo) {
    this->course_location = lo;
}

void Schedule::setCourseInstructorName(const string& in) {
    this->course_instructor_name = in;
}

// ----- Getters -----
string Schedule::getCourseName() const {
    return this->course_name;
}

int Schedule::getCourseId() const {
    return this->course_id;
}

Time Schedule::getStart() const {
    return this->start;
}

Time Schedule::getEnd() const {
    return this->end;
}

string Schedule::getCourseDay() const {
    return this->course_day;
}

string Schedule::getCourseLocation() const {
    return this->course_location;
}

string Schedule::getCourseInstructorName() const {
    return this->course_instructor_name;
}

void Schedule::displayCourses() const {
    cout << "Courses in Schedule:" << endl;
    for (int i = 0; i < num_courses; i++) {
        Course* c = schedule[i];
        if (c != nullptr) {
            cout << "Course Name: " << c->get_name() << endl;
            cout << "Course ID: " << c->get_id() << endl;
            cout << "Day: " << c->getDay() << endl;
            cout << "Location: " << c->getLocation() << endl;
            cout << "Instructor: " << c->getInstructor() << endl;
            cout << "Start Time: " << c->get_timeStart().toString() << endl;
            cout << "End Time: " << c->get_timeEnd().toString() << endl;
            cout << "------------------------" << endl;
        }
    }
}
