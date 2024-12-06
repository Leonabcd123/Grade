#include <iostream>
#include <vector>
#include <limits>

class Student
{

public:
    std::string name;
    std::vector<double> grades;

    Student(std::string name, std::vector<double> grades)
    {
        this->name = name;
        this->grades = grades;
    }

    void printStudentGrades()
    {

        double total = 0;
        int counter = 0;

        std::cout << name << "'s" << " Grades Are: ";

        for (double grade : grades)
        {
            std::cout << grade << ' ';
            total += grade;
            counter++;
        }

        std::cout << '\n';

        std::cout << name << "'s" << " Average Is: " << total / counter;
    }
};

int main()
{

    std::string name;
    std::vector<double> grades;
    std::string temp;

    std::cout << "Enter Your Student Name: \n";
    std::getline(std::cin, name);

    while (true)
    {
        std::cout << "Enter Your Grade Or 'Q' To Quit: ";
        std::cin >> temp;

        if (temp == "Q" || temp == "q")
        {
            break;
        }

        grades.push_back(std::stod(temp));
    }

    Student student1(name, grades);

    student1.printStudentGrades();

    return 0;
}