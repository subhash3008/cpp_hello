//
//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <cstdlib>
//#include <vector>
//
//struct Student {
//	std::string name;
//	int marks;
//};
//
//int getStudentsCount() {
//	int studentCount {};
//	do {
//		std::cout << "How many students are there in the class? ";
//		std::cin >> studentCount;
//	} while (studentCount <= 0);
//	return studentCount;
//}
//
//std::vector<Student> getStudents() {
//	using vector_type = std::vector<Student>;
//	int studentCount { getStudentsCount() };
//	vector_type students(static_cast<vector_type::size_type>(studentCount));
//
//	int studentNumber { 1 };
//
//	for (auto& student: students) {
//		std::cout << "Enter name # " << studentNumber << ": ";
//		std::cin >> student.name;
//		std::cout << "Enter " << student.name << "'s marks " << ": ";
//		std::cin >> student.marks;
//		++studentNumber;
//	}
//	return students;
//}
//
//bool compareMarks(const Student& a, const Student& b) {
//	return (a.marks > b.marks);
//}

//int main() {
//
//	std::vector<Student> students { getStudents() };
//
//	std::sort(students.begin(), students.end(), compareMarks);
//
//	for (const auto& student: students) {
//		std:: cout << student.name << " got " << student.marks << " marks.\n";
//	}
//
//	return 0;
//
//}
