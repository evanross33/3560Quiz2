//********************
//Matthew Aberegg
//Project 3
//CS 2401
//10/8/2015
//********************
/** @file college.h @brief Declares functions for College class */

#include <iostream>
#include <fstream>
#include <string>
#include "course.h"
#include "node.h"


#ifndef COLLEGE_H
#define COLLEGE_H


class College{
	public:
	College(std::string s);
	~College();
	College(const College& other);
	/*! @brief Will set one college variable equal to another using =
	 * @param other[in] The other college variable to set the original equal to
	 *  @return returns the original college varibale holding the same info as the second college variable
	 */
	College& operator =(const College& other);
	/*! @brief Will add a course to the list of enrolled courses
	 * @param c[in] c is a course varibale that will be added to the list
	 *  @return This function has no return
	 */
	void add(course& c);
	/*! @brief Will remove a course from the list of enrolled courses
	 * @param coursename[in] coursename is a course varibale that will be removed from the list
	 *  @return This function has no return
	 */
	void remove(std::string coursename);
	void display(std::ostream& outs);
	double hours();
	double gpa();
	void save(std::ostream& outs);
	void load(std::istream& ins);
	private:
	std::string name;
	node * head;




};
#endif
