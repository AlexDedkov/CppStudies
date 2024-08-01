#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <memory>
#include <string>
#include "Job.h"

class Human {
protected:
    std::string name;
    std::string surname;
    std::string phoneNumber;
    std::shared_ptr<Job> job;

public:
    Human(const std::string& name, const std::string& surname, const std::string& phoneNumber);
    virtual void display() const = 0;
    virtual ~Human() = default;
    void setJob(std::shared_ptr<Job> job);

    std::string getName() const;
    std::string getSurname() const;
    std::string getPhoneNumber() const;
    std::shared_ptr<Job> getJob() const;  // New getter method for job
};

class Student : public Human {
public:
    Student(const std::string& name, const std::string& surname, const std::string& phoneNumber);
    void display() const override;
};

class Teacher : public Human {
public:
    Teacher(const std::string& name, const std::string& surname, const std::string& phoneNumber);
    void display() const override;
};

class Worker : public Human {
public:
    Worker(const std::string& name, const std::string& surname, const std::string& phoneNumber);
    void display() const override;
};

class Principal : public Human {
public:
    Principal(const std::string& name, const std::string& surname, const std::string& phoneNumber);
    void display() const override;
};

#endif // HUMAN_H
