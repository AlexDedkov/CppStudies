#include "Job.h"
#include <iostream>

// StudentJob methods
void StudentJob::displayJob() const {
    std::cout << "Job: Student" << std::endl;
}

// TeacherJob methods
void TeacherJob::displayJob() const {
    std::cout << "Job: Teacher" << std::endl;
}

// WorkerJob methods
void WorkerJob::displayJob() const {
    std::cout << "Job: Worker" << std::endl;
}

// PrincipalJob methods
void PrincipalJob::displayJob() const {
    std::cout << "Job: Principal" << std::endl;
}
