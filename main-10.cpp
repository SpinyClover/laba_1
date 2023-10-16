#include <iostream>
#include <string>
#include <ctime>

class FamilyMember {
private:
    std::string fullName;
    std::string parentsInfo;
    std::string spouseInfo;
    std::string childrenInfo;
    std::string birthDate;
    std::string deathDate;
    int age;

public:
    // ����������� � �����������
    FamilyMember(const std::string& name, const std::string& parents, const std::string& spouse,
        const std::string& children, const std::string& birth, const std::string& death)
        : fullName(name), parentsInfo(parents), spouseInfo(spouse), childrenInfo(children),
        birthDate(birth), deathDate(death) {
        // ������������ ������� �� ������ ���� ��������
        calculateAge();
        std::cout << "Object created using parameterized constructor." << std::endl;
    }

    // ����������� ��� ����������
    FamilyMember()
        : age(0) {
        std::cout << "Object created using default constructor." << std::endl;
    }

    // ����������� �����������
    FamilyMember(const FamilyMember& other)
        : fullName(other.fullName), parentsInfo(other.parentsInfo), spouseInfo(other.spouseInfo),
        childrenInfo(other.childrenInfo), birthDate(other.birthDate), deathDate(other.deathDate),
        age(other.age) {
        std::cout << "Object created using copy constructor." << std::endl;
    }

    // ����������
    ~FamilyMember() {
        std::cout << "Object destroyed using destructor." << std::endl;
    }

    // ������ set � get
    void setFullName(const std::string& name) {
        fullName = name;
    }

    std::string getFullName() const {
        return fullName;
    }

    // ������ ������ ��� ��������� � ��������� ��������...

private:
    // ����� ��� ������� ��������
    void calculateAge() {
        // ���������� ������� �������� �� ������ ���� ��������
        // ��� ����� ����������� ������������� ��������� ��� ������ � ������, ��������, <ctime>
    }
};

int main() {
    // ������ ������������� ������
    FamilyMember person1("John Doe", "Parents: Unknown", "Spouse: Jane Doe", "Children: None",
        "01-01-1980", "Still alive");

    FamilyMember person2;
    person2.setFullName("Jane Doe");

    FamilyMember person3 = person1;  // ����� ����������� ������������

    // �������������� �������� � ���������...

    return 0;
}
