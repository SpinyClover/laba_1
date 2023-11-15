#pragma once
#include "FamillyMember.h"

typedef struct Element {
	FamillyMember* data {};
	Element* pNext = 0;
} Element;

class List {
private:
	Element* Head;
	Element* Tail;
	int count;

public:
	List();
	~List();

	List& Del();
	List& Del(int cnt);
	void Del_head();
	void DelAll();

	List& operator++();
	Element* operator[](const int index);

	void AddElem(Element* elem);

	List& Edit();

	void Print();

	List& RemoveSimilar();

	int GetCount();
	void SetCount(int);

	Element* GetHead();
	void SetHead(Element*);

	Element* GetTail();
	void SetTail(Element*);

	bool IsEmpty();
};
