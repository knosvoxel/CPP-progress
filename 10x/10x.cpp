#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int enterStudentAmount(){


    int amount{};

    do{
        std::cout << "How many student do you want to enter? \n";
        std::cin >> amount;
    }
    while(amount <= 0);
    
    return amount;

}

struct Student{
    std::string name{};
    int grade{};
};

std::vector<Student> getStudents()
{
    using vector_type = std::vector<Student>;

    int numberOfStudents{enterStudentAmount()};

    vector_type students(static_cast<vector_type::size_type>(numberOfStudents));

    int studentNumber{1};

    for(auto& student: students)
    {
        std::cout << "Enter name #" << studentNumber << ": ";
        std::cin >> student.name;
        std::cout << "Enter grade #" << studentNumber << ": ";
        std::cin >> student.grade;

        ++studentNumber;
    }

    return students;

}

bool compareStudents(const Student& a, const Student& b)
{
    return (a.grade > b.grade);
}

void swapValues(int& a, int& b){
    int c{a};
    a = b;
    b = c;
}

int main(){

    /*auto students{getStudents()};

    std::sort(students.begin(), students.end(), compareStudents);

    for(const auto& student : students)
    {
        std::cout << student.name << " got a grade of " << student.grade << '\n';
    }

    return 0;
*/
    int a{15};
    int b{20};

    std::cout << a << ' ' << b << std::endl;

    swapValues(a, b);

    std::cout << a << ' ' << b << std::endl;

    return 0;
}

