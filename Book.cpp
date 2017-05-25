/*
 * Book.cpp
 *
 *  Created on: 23.05.2017 ã.
 *      Author: ddada
 */

#include "Book.h"
#include<iostream>
using namespace std;
Book::Book() {
	setId("");
	setAuthor("");
	setGenre("");
	setTitle("");
	setPrice(0);
	setPublishDate(0);

}

Book::~Book() {
	// TODO Auto-generated destructor stub
}

const string& Book::getAuthor() const {
	return author;
}

void Book::setAuthor(const string& author) {
	this->author = author;
}

const string& Book::getGenre() const {
	return genre;
}

void Book::setGenre(const string& genre) {
	this->genre = genre;
}

const string& Book::getId() const {
	return id;
}

void Book::setId(const string& id) {
	this->id = id;
}

double Book::getPrice() const {
	return price;
}

void Book::setPrice(double price) {
	this->price = price;
}

int Book::getPublishDate() const {
	return publish_date;
}

void Book::setPublishDate(int publishDate) {
	publish_date = publishDate;
}

const string& Book::getTitle() const {
	return title;
}

void Book::setTitle(const string& title) {
	this->title = title;
}

Book::Book(string id, string author, string title,
		string genre, double price, int publish_date) {
	setId(id);
	setAuthor(author);
	setTitle(title);
	setGenre(genre);
	setPrice(price);
	setPublishDate(publish_date);
}

void Book::print() {
	cout<<"Title :"<<getTitle()<<" "<<"Author:"<<getAuthor()<<endl;
	cout<<"Price :"<<getPrice()<<endl;
}
