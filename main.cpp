#include <iostream>
#include <string>
#include "Schedule.h"
#include "course.h"
#include "time.h"

using namespace std;

int main() {
    // Create Time objects for course start and end times
    Time start1(9, 0);   // 9:00 AM
    Time end1(10, 30);   // 10:30 AM

    Time start2(11, 0);  // 11:00 AM
    Time end2(12, 30);   // 12:30 PM

    // Create a Schedule object
    Schedule mySchedule("Math 101-Pre Calculus", 101, start1, end1, "Monday", "Room 101", "Dr. Smith");

    // Add courses to the schedule
    mySchedule.addCourse("Physics 201", 201, start2, end2, "Wednesday", "Room 202", "Dr. Johnson");
    mySchedule.addCourse("Chemistry 301", 301, Time(13, 0), Time(14, 30), "Friday", "Room 303", "Dr. Lee");

    // Display all courses in the schedule
    mySchedule.displayCourses();

    return 0;
}
