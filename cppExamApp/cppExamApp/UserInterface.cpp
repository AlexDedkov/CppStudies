#include <iostream>
#include <vector>
#include <memory>
#include <fstream>
#include <sstream>
#include "Human.h"
#include "Job.h"

class UserInterface {
private:
    std::vector<std::shared_ptr<Human>> people;

public:
    void run() {
        readFromFile("people.txt");  // Read existing data from the file first

        char choice;
        do {
            addPerson();
            std::cout << "Do you want to add another person? (y/n): ";
            std::cin >> choice;
        } while (choice == 'y' || choice == 'Y');

        saveToFile("people.txt");
    }

    void addPerson() {
        std::string name, surname, phoneNumber, jobType;
        std::cout << "Enter Name: ";
        std::cin >> name;
        std::cout << "Enter Surname: ";
        std::cin >> surname;
        std::cout << "Enter Phone Number: ";
        std::cin >> phoneNumber;
        std::cout << "Enter Job (Student, Teacher, Worker, Principal): ";
        std::cin >> jobType;

        std::shared_ptr<Human> person;

        //Factory Method Pattern

        if (jobType == "Student") {
            person = std::make_shared<Student>(name, surname, phoneNumber);
            person->setJob(std::make_shared<StudentJob>());
        }
        else if (jobType == "Teacher") {
            person = std::make_shared<Teacher>(name, surname, phoneNumber);
            person->setJob(std::make_shared<TeacherJob>());
        }
        else if (jobType == "Worker") {
            person = std::make_shared<Worker>(name, surname, phoneNumber);
            person->setJob(std::make_shared<WorkerJob>());
        }
        else if (jobType == "Principal") {
            person = std::make_shared<Principal>(name, surname, phoneNumber);
            person->setJob(std::make_shared<PrincipalJob>());
        }
        else {
            std::cout << "Invalid job type. Try again." << std::endl;
            return;
        }

        people.push_back(person);
    }
    void saveToFile(const std::string& filename) const {
        std::ofstream file(filename);
        if (file.is_open()) {
            file << people.size() << std::endl;  // Write the number of entries
            for (const auto& person : people) {
                file << person->getName() << " "
                    << person->getSurname() << " "
                    << person->getPhoneNumber() << " ";
                // Save job type as a string
                if (dynamic_cast<StudentJob*>(person->getJob().get())) file << "Student";
                else if (dynamic_cast<TeacherJob*>(person->getJob().get())) file << "Teacher";
                else if (dynamic_cast<WorkerJob*>(person->getJob().get())) file << "Worker";
                else if (dynamic_cast<PrincipalJob*>(person->getJob().get())) file << "Principal";
                file << std::endl;  // Ensure each entry ends with a newline
            }
            file.close();
        }
        else {
            std::cerr << "Unable to open file." << std::endl;
        }
    }

    void readFromFile(const std::string& filename) {
        std::ifstream file(filename);
        if (file.is_open()) {
            size_t numberOfEntries;
            file >> numberOfEntries;
            file.ignore();  // Ignore the newline character after the number

            people.clear();  // Clear existing data before loading new data

            for (size_t i = 0; i < numberOfEntries; ++i) {
                std::string line;
                std::getline(file, line);
                std::istringstream iss(line);
                std::string name, surname, phoneNumber, jobType;
                iss >> name >> surname >> phoneNumber >> jobType;

                std::shared_ptr<Human> person;

                if (jobType == "Student") {
                    person = std::make_shared<Student>(name, surname, phoneNumber);
                    person->setJob(std::make_shared<StudentJob>());
                }
                else if (jobType == "Teacher") {
                    person = std::make_shared<Teacher>(name, surname, phoneNumber);
                    person->setJob(std::make_shared<TeacherJob>());
                }
                else if (jobType == "Worker") {
                    person = std::make_shared<Worker>(name, surname, phoneNumber);
                    person->setJob(std::make_shared<WorkerJob>());
                }
                else if (jobType == "Principal") {
                    person = std::make_shared<Principal>(name, surname, phoneNumber);
                    person->setJob(std::make_shared<PrincipalJob>());
                }
                else {
                    std::cout << "Invalid job type in file. Skipping entry." << std::endl;
                    continue;
                }

                people.push_back(person);
            }
            file.close();
        }
        else {
            std::cerr << "Unable to open file." << std::endl;
        }
    }
};