#include <iostream>
using namespace std;

class Employee {
private:
    int empid;
    string name;
    string mobile;
    double basic;

    double getDA() {
        return 0.90 * basic;
    }

    double getHRA() {
        return 0.65 * basic;
    }

    double getPF() {
        return 0.12 * basic;
    }

public:
    Employee(int empid, string name, string mobile, double basic) {
        this->empid = empid;
        this->name = name;
        this->mobile = mobile;
        this->basic = basic;
    }

    void setName(string name) {
        this->name = name;
    }

    void setMobile(string mobile) {
        this->mobile = mobile;
    }

    void setBasic(double basic) {
        this->basic = basic;
    }

    int getEmpid() {
        return empid;
    }

    string getName() {
        return name;
    }

    string getMobile() {
        return mobile;
    }

    double getBasic() {
        return basic;
    }

    double getSalary() {
        return basic + getDA() + getHRA() - getPF();
    }

    static void calcSalary(double basic) {
        double da = 0.90 * basic;
        double hra = 0.65 * basic;
        double pf = 0.12 * basic;
        double salary = basic + da + hra - pf;
        cout << "Tentative salary for basic " << basic << " is " << salary << endl;
    }
};

int main() {
    int empid;
    string name, mobile;
    double basic;

    cout << "Enter Employee ID: ";
    cin >> empid;
    cin.ignore(); // Ignore newline character from previous input

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Mobile: ";
    getline(cin, mobile);

    cout << "Enter Basic Salary: ";
    cin >> basic;

    Employee emp(empid, name, mobile, basic);
    cout << "Salary of " << emp.getName() << " with employee id " << emp.getEmpid() << " is " << emp.getSalary() << endl;

    cout << "Enter Basic Salary to calculate tentative salary: ";
    double tentativeBasic;
    cin >> tentativeBasic;
    Employee::calcSalary(tentativeBasic);

    return 0;
}


