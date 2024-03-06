#include <bits/stdc++.h>
using namespace std;

class Person
{
protected:
    std::string name;

public:
    Person() : name("Satyendra")
    {
        std::cout << "Person default constructor called." << std::endl;
    }

    Person(const std::string &n) : name(n)
    {
        std::cout << "Person parameterized constructor called with name: " << name << std::endl;
    }

    Person(const Person &other) : name(other.name)
    {
        std::cout << "Person copy constructor called for " << name << std::endl;
    }

    std::string getName() const
    {
        return name;
    }

    ~Person()
    {
        std::cout << "Person destructor called for " << name << std::endl;
    }
};

class Student : public Person
{
protected:
    int studentId;

public:
    Student() : Person(), studentId(0)
    {
        std::cout << "Student default constructor called." << std::endl;
    }

    Student(const std::string &n, int id) : Person(n), studentId(id)
    {
        std::cout << "Student parameterized constructor called with name: " << name << ", ID: " << studentId << std::endl;
    }

    Student(const Student &other) : Person(other), studentId(other.studentId)
    {
        std::cout << "Student copy constructor called for " << name << ", ID: " << studentId << std::endl;
    }

    int getStudentId() const
    {
        return studentId;
    }

    ~Student()
    {
        std::cout << "Student destructor called for " << name << ", ID: " << studentId << std::endl;
    }
};

class GraduateStudent : public Student
{
private:
    std::string researchTopic;

public:
    GraduateStudent() : Student(), researchTopic("Not specified")
    {
        std::cout << "GraduateStudent default constructor called." << std::endl;
    }

    GraduateStudent(const std::string &n, int id, const std::string &topic)
        : Student(n, id), researchTopic(topic)
    {
        std::cout << "GraduateStudent parameterized constructor called with name: " << getName()
                  << ", ID: " << getStudentId() << ", Research Topic: " << researchTopic << std::endl;
    }

    GraduateStudent(const GraduateStudent &other) : Student(other), researchTopic(other.researchTopic)
    {
        std::cout << "GraduateStudent copy constructor called for " << getName() << ", ID: " << getStudentId()
                  << ", Research Topic: " << researchTopic << std::endl;
    }

    GraduateStudent(const Student &student, const std::string &topic)
        : Student(student), researchTopic(topic)
    {
        std::cout << "GraduateStudent constructor with Student object called for " << getName() << ", ID: " << getStudentId()
                  << ", Research Topic: " << researchTopic << std::endl;
    }

    std::string getResearchTopic() const
    {
        return researchTopic;
    }

    ~GraduateStudent()
    {
        std::cout << "GraduateStudent destructor called for " << getName() << ", ID: " << getStudentId() << std::endl;
    }
};

int main()
{

    Person personDefault;

    Person personParameterized("Sharad");

    Person personCopy = personParameterized;

    Student studentDefault;

    Student studentParameterized("Shailendra", 123);

    Student studentCopy = studentParameterized;

    GraduateStudent gradStudentDefault;

    GraduateStudent gradStudentParameterized("Sagar", 456, "Machine Learning");

    Student anotherStudent("Rohit", 789);
    GraduateStudent gradStudentWithStudent(anotherStudent, "Artificial Intelligence");

    return 0;
}
