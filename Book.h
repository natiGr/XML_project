/*
 * Book.h
 *
 *  Created on: 23.05.2017 ã.
 *      Author: ddada
 */

#ifndef BOOK_H_
#define BOOK_H_
#include<string>
using namespace std;

class Book {
public:
	Book();
	Book(string,string,string,string,double,int);
	void print();
	virtual ~Book();
	const string& getAuthor() const;
	void setAuthor(const string& author);
	const string& getGenre() const;
	void setGenre(const string& genre);
	const string& getId() const;
	void setId(const string& id);
	double getPrice() const;
	void setPrice(double price);
	int getPublishDate() const;
	void setPublishDate(int publishDate);
	const string& getTitle() const;
	void setTitle(const string& title);

private:
	string id;
	string author;
	string title;
	string genre;
	double price;
	int publish_date;

};

#endif /* BOOK_H_ */
