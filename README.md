# CSC 340 Summer 2016 
# A5 - Assignment 5: Sorted Lists
##Introduction
This assignment is intended to introduce you to a number of concepts in C++:
* C++ dynamic arrays
* C++ pointers & pointer manipulation
* Linked lists
* Overriding subscript operator
* Overloading stream insertion operator
* Introduction to Doxygen comments

You will be introduced to these concepts by programming a sorted list class.  In this version of the assignment, you'll be storing integers as the values in the list.
##Description
As with the previous assignment, you will again be given skeleton code for a class and unit tests.  Grading will be based solely on passing the unit tests!  

For this assignment, the class you are implementing is the SortedListA and SortedListL classes.  SortedListA and SortedListL have the identical API, but SortedListA is implemented using arrays, and SortedListL is implemented using linked lists.  For both classes, each time an element is inserted or deleted, the list is kept in order.

Full class documentation is available in the respective header and implementation files.

Note:  To exit a program with an error, use exit(EXIT_FAILURE).  EXIT_FAILURE is included from stdlib.h.
 
##Submission
You will submit your file by pushing to this repository before the due date.  Be sure to update your README.md file with appropriate information about your work.  Also, include the travis-ci badge at the top of the file.  Your code will be compiled and run through the unit tests.  Grading will be based on the unit tests.

##Grading
|Criteron|Percent|
|--------|-------:|
|README.md|16|
|14 tests @ 6% ea.|84|
|Total|100|