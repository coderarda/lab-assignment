#ifndef SYSADMIN_H
#define SYSADMIN_H

class SysAdmin : User::User {

public:
	Address AdminAddress;
	string AdminEmail;
	string AdminName;
	string AdminPassword;
	string AdminSurname;
	string AdminUsername;
};

#endif
