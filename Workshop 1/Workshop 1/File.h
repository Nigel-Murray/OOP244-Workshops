#ifndef SDDS_FILE_H
#define SDDS_FILE_H

namespace sdds {
	// opens the data file and returns true is successful
	bool openFile(const char filename[]);

	// closes the data file
	void closeFile();

	// reads the title of the movie from the global fptr File pointer
	// returns true if successful
	bool readTitle(char title[]);

	// reads the year of the movie from the global fptr File pointer
	// returns true if successful
	bool readYear(int* year);

	// reads the year of the movie from the global fptr File pointer
	// returns true if successful
	bool readMovieRating(char rating[]);

	// reads the duration of the movie from the global fptr File pointer
	// returns true if successful
	bool readDuration(int* duration);

	// reads the genras of the movie from the global fptr File pointer
	// returns true if successful
	bool readGenres(char genre[][11]);

	// reads the consumerRating of the movie from the global fptr File pointer
	// returns true if successful
	bool readConsumerRating(float* rating);
}

#endif
