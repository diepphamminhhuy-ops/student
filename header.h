#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;

#ifndef HEADER_H
#define HEADER_H

struct student{
    string name;
    int namsinh;
    int age;
    string _class = "11A1";
};


void inhs(student &hs);
void kickstudent( vector<student> &kick);
void prinths(const student &hs);
void addstudent(student &hs, vector<student> &add);


#endif
