#ifndef MOVIE_H
#define MOVIE_H

namespace Item {
	class Movie : Item::Item {

	public:
		int movieID;
		string movieName;
		string movieGenre;
		string releaseDate;
		string directorName;
	};
}

#endif
