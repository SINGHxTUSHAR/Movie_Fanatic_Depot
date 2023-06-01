# Movie_Fanatic_Depot
THIS PROJECT IS DEVELOPED TO UNDERSTAND THE OOPS CONCEPTS IN A BETTER AND PRACTICAL WAY AND IMPLEMENTING THE KNOWLDEGE GAINED FROM THE CONCEPT.

⭐DESCRIPTION FOR THE PROJECT:

For this project we are developing the foundation for a program 
for movie fanatics to keep track of what movies they have watched
and how many times they watched each movie.

⭐The program must support the following:

class Movie - models a movie which includes
- movie name
- movie rating (G, PG, PG-13, R)
- watched - the number of times the movie has been watched

Obviously, Movies needs to know about Movie since it is a collection of Movie object
However, our main driver should only interact with the Movies class.

For example. a simple main should be able to

- create a Movies object
- ask the Movies object to add a movie by providing the movie name, rating and watched count
- ask the Movies object to increment the watched count by 1 for a movie given its name
- ask the Movies object to display all of its movies

Additionally, 

- if we try to add a movie whose name is already in the movies collection 
we should display this error to the user
- if we try to increment the watched count for a movie whose name is not in the movies
collection we should display this error to the user

⭐Here is what your project files should look like:

-Movie.h - include file with the Movie class specification
-Movie.cpp -  file with the Movie class implementation
-Movies.h - include file with the Movies class specification
-Movies.cpp -  file with the Movies class implementation
-main.cpp - the main driver that creates a Movies object and adds and increments movies







