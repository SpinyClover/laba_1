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
    // Конструктор с параметрами
    FamilyMember(const std::string& name, const std::string& parents, const std::string& spouse,
        const std::string& children, const std::string& birth, const std::string& death)
        : fullName(name), parentsInfo(parents), spouseInfo(spouse), childrenInfo(children),
        birthDate(birth), deathDate(death) {
        // Рассчитываем возраст на основе даты рождения
        calculateAge();
        std::cout << "Object created using parameterized constructor." << std::endl;
    }

    // Конструктор без параметров
    FamilyMember()
        : age(0) {
        std::cout << "Object created using default constructor." << std::endl;
    }

    // Конструктор копирования
    FamilyMember(const FamilyMember& other)
        : fullName(other.fullName), parentsInfo(other.parentsInfo), spouseInfo(other.spouseInfo),
        childrenInfo(other.childrenInfo), birthDate(other.birthDate), deathDate(other.deathDate),
        age(other.age) {
        std::cout << "Object created using copy constructor." << std::endl;
    }

    // Деструктор
    ~FamilyMember() {
        std::cout << "Object destroyed using destructor." << std::endl;
    }

    // Методы set и get
    void setFullName(const std::string& name) {
        fullName = name;
    }

    std::string getFullName() const {
        return fullName;
    }

    // Другие методы для установки и получения значений...

private:
    // Метод для расчета возраста
    void calculateAge() {
        // Реализация расчета возраста на основе даты рождения
        // Это может потребовать использования библиотек для работы с датами, например, <ctime>
    }
};

int main() {
    // Пример использования класса
    FamilyMember person1("John Doe", "Parents: Unknown", "Spouse: Jane Doe", "Children: None",
        "01-01-1980", "Still alive");

    FamilyMember person2;
    person2.setFullName("Jane Doe");

    FamilyMember person3 = person1;  // Вызов копирующего конструктора

    // Дополнительные операции с объектами...

    return 0;
}
