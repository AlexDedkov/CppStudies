#ifndef JOB_H
#define JOB_H

class Job {
public:
    virtual void displayJob() const = 0;
    virtual ~Job() = default;
};

class StudentJob : public Job {
public:
    void displayJob() const override;
};

class TeacherJob : public Job {
public:
    void displayJob() const override;
};

class WorkerJob : public Job {
public:
    void displayJob() const override;
};

class PrincipalJob : public Job {
public:
    void displayJob() const override;
};

#endif // JOB_H
