//
// Created by Ryan Phadnis on 10/3/19.
//
#include <string>
using namespace std;

Faculty::Faculty()
{
    name = " ";
    id = "-1";
    address = "-1";
    DoB = "1/1/00";
    degree = "None";
    salary = -1;
    SSN = -1;
}

Faculty::Faculty(string n, string i, string a, string db, string d, double s, double ss)
{
    name = n;
    id = i;
    address = a;
    DoB = db;
    degree = d;
    salary = s;
    SSN = ss;
}

void Faculty::setSalary(double s){
    salary=s;
}

void Faculty::setSSN(double ss)
{
    SSN = ss;
}

void Faculty::setName(string n)
{
    name = n;
}

string Faculty::getName()
{
    return name;
}

void Faculty::setId(string i)
{
    id = i;
}

string Faculty::getId() {return id;}

void Faculty::setAddress(string add) {address = add;}
string Faculty::getAddress() {return address;}

void Faculty::setDoB(string d) {DoB = d;}
string Faculty::getDob() {return DoB;}

void Faculty::setDegree(string d) {degree = d;}
string Faculty::getDegree() {return degree;}