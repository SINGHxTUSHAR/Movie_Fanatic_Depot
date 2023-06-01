/******************************************************************
 * AUTHOR : TUSHAR SINGH RAWAT
 * source : learn_programming_academy PROJECTS
 * 
 * main.cpp
 * 
 * Test the Movies project
 * 
 * ***************************************************************/
#include <iostream>
#include "Movies.h"

// Function prototypes
void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string name, std::string rating, int watched);

/******************************************************************
 * helper function 
 * increment_watched expects a reference to a Movies object 
 * and the name of the movie to increment the watched count
 *
 * If the watched count was incremented successfully it
 * displays a success message
 * otherwise the watched count could not be incremented
 * because the name of the movie was not found
 * ***************************************************************/

void increment_watched(Movies &movies, std::string name) {
    if (movies.increment_watched(name)) {
        std::cout << name << " watch incremented" <<  std::endl;
    } else {
        std::cout << name << " not found" <<  std::endl;
    }
}

/******************************************************************
* helper function
* add_movie expects a reference to a Movies object 
* and the name of the movie, the rating and the watched count
*
* If the movie was successfully added to the movies object it
* displays a success message
* otherwise the movie was not added 
* because the name of the movie was already in movies
* ***************************************************************/
void add_movie(Movies &movies, std::string name, std::string rating, int watched) {
    if (movies.add_movie(name,rating,watched)) {
        std::cout << name << " added" << std::endl;
    } else {
        std::cout << name << " already exists" <<  std::endl;
    }
}

/***********************************************************************************************
* We can also include the menu driven system to add the movies and to increment the watch count.
* For the basic understanding for the classes and objects in OOPS .
* All the major topics in OOPS is used here .
***********************************************************************************************/


int main() {
    
    Movies my_movies;
    
    my_movies.display();
    
    add_movie(my_movies, "Baahubali The Conclusion", "PG-13",2);                 // OK
    add_movie(my_movies,"Bajrangi Bhaijaan", "PG",5);             // OK
    add_movie(my_movies,"Tanhaji: The Unsung Warrior", "PG",7);            // OK
     
    my_movies.display();   // Baahubali The Conclusion, Bajrangi Bhaijaan, Tanhaji: The Unsung Warrior
    
    add_movie(my_movies,"Tanhaji: The Unsung Warrior", "PG",7);            // Already exists
    add_movie(my_movies,"Pathaan", "PG",12);              // OK
 
    my_movies.display();    // Baahubali The Conclusion, Bajrangi Bhaijaan, Tanhaji: The Unsung Warrior, Pathaan
    
    increment_watched(my_movies,"Baahubali The Conclusion");                    // OK
    increment_watched(my_movies,"Pathaan");              // OK
    
   my_movies.display();    // Baahubali The Conclusion and Pathaan watched count incremented by 1
    
    increment_watched(my_movies,"Padmaavat");     // Padmaavat not found

	return 0;
}