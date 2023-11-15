
#include"Menu.h"

int main() {
	try {
		List list;
		return Menu(list);
	}
	catch (MyException& exception){
		cout << "Exception occurred : " << exception.what() << "\n";
	}
	catch (exception& exception){
		cout << "Some other exception occurred : " << exception.what() << "\n";
	}
}
