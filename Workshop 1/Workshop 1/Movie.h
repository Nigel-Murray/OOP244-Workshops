#ifndef SDDS_MOVIE_H
#define SDDS_MOVIE_H

struct Movie {
	char m_title[128];
	int m_year;
	char m_rating[6];
	int m_duration;
	char m_genres[10][11];
	float m_consumerRating;
};

namespace sdds {
	// loads all the moves into the global array of structures.
	bool loadMovies();

	// returns true is the genre arg is substring of any of the
	// genres of the target of the mvp (Movie*) arg.
	bool hasGenre(const Movie* mvp, const char genre[]);

	// displays the movie info
	void displayMovie(const Movie* mvp);

	// displays all the movies containing the genre arg
	void displayMoviesWithGenre(const char genre[]);
}
#endif
