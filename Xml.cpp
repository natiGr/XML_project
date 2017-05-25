//============================================================================
// Name        : Xml.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "pugixml.hpp"
#include<vector>
#include<string>
#include "Book.h"
using namespace std;

vector<Book*>books;
vector <Book*> Traverse(const char* fName){

// traverse
	pugi::xml_document doc;
	if (!doc.load_file(fName))
		cout<<"error";

	pugi::xml_node catalog = doc.child("catalog");



	// tag::basic[]
	for (pugi::xml_node book = catalog.child("book"); book;
			book = book.next_sibling("book")) {
		std::cout << "Book:";
/*
		for (pugi::xml_attribute attr = book.first_attribute(); attr;
				attr = attr.next_attribute()) {
			std::cout << " " << attr.name() << "=" << attr.value();
		}
		*/

		std::cout << std::endl;
	}
	// end::basic[]

	std::cout << std::endl;

	// tag::data[]
	for (pugi::xml_node book = book.child("book"); book; book = book.next_sibling("book")) {
		for (pugi::xml_attribute attr = book.first_attribute(); attr;
						attr = attr.next_attribute()) {
					std::cout << " " << attr.name() << "=" << attr.value();
				}
		std::cout << "Book " << book.attribute("fName").value();
		book.child("title").text().as_string();
		book.child("author").text().as_string();
		book.child("genre").text().as_string();
		book.child("price").text().as_double();
		book.child("publish date").text().as_int();
		std::cout << "id'" << book.attribute("id").as_int()
				<< "'\n";
		// object creation
		// add to vector/map
	}
	// end::data[]

	std::cout << std::endl;

	return books;
}

int main() {


	Book book1("123","Vladislav","live","romantic",23.3,1998);
	Book book2("124","Peter","mirorr","criminal",35.5,2000);
	books.push_back(&book1);
    books.push_back(&book2);
    for (unsigned i = 0; i < books.size(); i++) {
    			books[i]->print();
    		}

	return 0;
}
