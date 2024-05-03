#ifndef DOCUMENTARY_H
#define DOCUMENTARY_H

namespace Item {
	class Documentary : Item::Item {

	public:
		int docId;
		string docTitle;
		string docDirector;
		string docSubject;
		string docReleaseDate;
	};
}

#endif
