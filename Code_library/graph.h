/********************************************************************************
* WARNING: Please do not remove or modify this comment block.
 *
 * Student Information:
 * Name: Amro Elsafoury
 * Student ID: 900242312
 * Section Number: 01
 *
 * Instructions:
 * - Fill out your name, student ID, and section number above.
 * - This information is mandatory for the submission of your assignment.
 * - Do not modify this file beyond the specified tasks and guidelines.
 *
 ********************************************************************************/

#pragma once
#include <vector>
#include <string>

extern int n, m;
extern std::vector<std::vector<std::pair<int,int>>> adjList;
extern std::vector<std::vector<int>> adjMatrix;

void readGraph(const std::string& filename);
