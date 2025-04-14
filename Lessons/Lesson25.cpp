/*
Sydney Flower
CE 122
Lecture 24
12 April 2025
*/

#include <iostream>
#include <string>
using namespace std;


struct studentStanding {
    string studentName;
    //string year;
    //int numCreditsTotal;
    //int numCreditsCurrent;
    //double GPA;
    //double GPAmajor;
    double quizScores[5];
};

studentStanding inputScores();
void printStanding(const studentStanding& standing); //function to print a house struct

int main() {
    //declares and initialized a new houseType called myHouse
   /* studentStanding student1{ "Rebecca","Junior",89,18,3.8,3.2 };
    studentStanding student2{ "Joe","Freshman",12,14,3.1,3.8 };
    studentStanding student3{ "Francessca","Sophmore",45,4,3.1,3.5 };*/

    //printStanding(student1);
    printStanding myStudent;
    myStudent = inputScores();
    printStanding(myStudent);

    return 0;
}

studentStanding inputScores()
{
    studentStanding student;
    cout << "What is the students name :";
    cin >> student.studentName;
    cout << "What are the students quiz score ";
    for (int i = 0; i < 5; i++)
    {
        cin >> student.quizScores[i]
    }
    return student;
}

void printStanding(const studentStanding& student)
{
    cout << "*****************************" << endl;
    cout << "Student Name: " << student.studentName << endl;
    //cout << "Year: " << standing.year << endl;
    //cout << "Total Credits Completed:  " << standing.numCreditsTotal << endl;
    //cout << "Number of Credits Currently Enrolled: " << standing.numCreditsCurrent << endl;
    //cout << "Current GPA: " << standing.GPA << endl;
    //cout << "Major GPA: " << standing.GPAmajor << endl;
    cout << "The quiz scores : ";
    for (int i =0; i<5;i++)
    { 
        cout << student.quizScores[i] << " ";
    }
    cout << endl;
}
