/* Program name: lecture_activityB.cpp
 * Author: Sahar Musleh
 * Date last updated: 11/13/2025
 * Purpose: Use makeClock() to create a dynamic clock and add it to a movie's showtimes. Clean up memory.
 */

#include <iostream>
#include <string>
#include "movieTimes.h"

int main() {
    // Create movies and enter initial times
    MovieTimes predator("Predator: Badlands", 107, "PG-13");
    predator.enterTimes();

    MovieTimes regrettingYou("Regretting You", 117, "PG-13");
    regrettingYou.enterTimes();

    MovieTimes sarahsOil("Sarah's Oil", 103, "PG");
    sarahsOil.enterTimes();

    // Display initial times
    std::cout << predator.tostring() << std::endl;
    std::cout << regrettingYou.tostring() << std::endl;
    std::cout << sarahsOil.tostring() << std::endl;
