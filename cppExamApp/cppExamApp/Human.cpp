#include "Human.h"

// Human methods
Human::Human(const std::string& name, const std::string& surname, const std::string& phoneNumber)
    : name(name), surname(surname), phoneNumber(phoneNumber) {}

void Human::setJob(std::shared_ptr<Job> job) {
    this->job = job;
}

std::string Human::getName() const {
    return name;
}

std::string Human::getSurname() const {
    return surname;
}

std::string Human::getPhoneNumber() const {
    return phoneNumber;
}

std::shared_ptr<Job> Human::getJob() const {
    return job;
}

// Student methods
Student::Student(const std::string& name, const std::string& surname, const std::string& phoneNumber)
    : Human(name, surname, phoneNumber) {}

void Student::display() const {
    std::cout << "Student: " << name << " " << surname << ", Phone: " << phoneNumber << std::endl;
    if (job) {
        job->displayJob();
    }
}

// Teacher methods
Teacher::Teacher(const std::string& name, const std::string& surname, const std::string& phoneNumber)
    : Human(name, surname, phoneNumber) {}

void Teacher::display() const {
    std::cout << "Teacher: " << name << " " << surname << ", Phone: " << phoneNumber << std::endl;
    if (job) {
        job->displayJob();
    }
}

// Worker methods
Worker::Worker(const std::string& name, const std::string& surname, const std::string& phoneNumber)
    : Human(name, surname, phoneNumber) {}

void Worker::display() const {
    std::cout << "Worker: " << name << " " << surname << ", Phone: " << phoneNumber << std::endl;
    if (job) {
        job->displayJob();
    }
}

// Principal methods
Principal::Principal(const std::string& name, const std::string& surname, const std::string& phoneNumber)
    : Human(name, surname, phoneNumber) {}

void Principal::display() const {
    std::cout << "Principal: " << name << " " << surname << ", Phone: " << phoneNumber << std::endl;
    if (job) {
        job->displayJob();
    }
}
