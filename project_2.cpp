#include<iostream>
using namespace std;

float calculateSalary(string Pos,float Day) {
        float salary;
        if(Pos=="Software Engineer"){
            salary=200*Day;
            return salary;
        }
        if(Pos=="Project Manager"){
           salary=250*Day; 
           return salary;
        }
        salary=150*Day;
        return salary;
        }
int main(){
    int Employee_ID[]={101,102,103,104,105};
    string Employee_Name[]={"John Doe","Alice Smith","Bob John","Mary Brown","James Wilson"};
    string Position[]={"Software Engineer","Project Manager","Software Engineer","QA Analyst","Developer"};
    int Working_Days[]={20,22,18,21,19};
    string Department[]={"IT","HR","IT","Quality","IT"};
    float employeesalaries[]={};

calculateSalary("Software Engineer",20);
    }
