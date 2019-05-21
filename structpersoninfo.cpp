#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
struct Person {
	char name[100];
	char surname[100];
	int age;
	float salary;
	};
Person GetData (Person x) {
	printf("Enter full name  : ");
		scanf("%s %s",x.name,x.surname);
		printf("\nEnter age : ");
		scanf("%d",&x.age);
		printf("\nEnter salary: ");
		scanf("%f",&x.salary);
		
		return x;
}
void DataDisplay(Person n){
	printf("Displaying information : \n\n");
	printf("Name: %s %s",n.name,n.surname);
	printf("\nAge: %d",n.age);
	printf("\nSalary: %.3f",n.salary);
}
	int main() {
		Person x;
		x = GetData(x);
		DataDisplay(x);
	return 0;
	}
