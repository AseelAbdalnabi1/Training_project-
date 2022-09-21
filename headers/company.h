/*
 * company.h
 *
 *  Created on: Sep 8, 2022
 *      Author: aseel
 */

#ifndef COMPANY_H_
#define COMPANY_H_
#include "department.h"
#include "employee.h"
#include <iostream>
#include <vector>
class Employee;
class Department;

class Company {
private:
    Employee *CeoEmp=NULL;
    std::vector<Department> MainDeps;
    static Company *compObject;
    Company();
    ~Company();
public:
    static std::vector<Department> DepsOfAllCompany;
    static std::vector<Employee> EmpsOfAllCompany;//all employees in company(regardless if they are in deps or not)
    static std::vector<Employee> allEmpsOfDepartments;//employees in Deps in company
    static Company *getCompObject(){
    	if(!(compObject))
    		compObject=new Company;
    	return compObject;
    }
    Employee getCeoEmp();
    void setCeoEmp(Employee CeoEmp);
    void setMainDeps(std::vector<Department> MainDeps);
    std::vector<Department>* getMainDeps();
    void addMainDepToCompany(Department dep);
    void removeMainDepFromCompany(Department dep);
    void addEmpToCompany(Employee emp);
    void removeEmpFromCompany(Employee emp);
    std::vector<Employee> allEmployees();
    void empsWithSameSalary(Company *compObj);
    void empsOfMultiDeps();
    void loop_IN_Deps();
    void floatingEmps();


};



#endif /* COMPANY_H_ */