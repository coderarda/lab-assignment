#ifndef USER_H
#define USER_H

namespace User {
	class User {

	public:
		string userName;
		string userSurname;
		User::Address userAddress;
	private:
		string userPassword;
	public:
		string userEmail;
	private:
		Function::Reservation reservedItems;
	};
}

#endif
