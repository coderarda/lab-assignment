#ifndef EMPLOYEE_H
#define EMPLOYEE_H

namespace User {
	class Employee : SysAdmin, User::User {

	public:
		string<length6> employeeID;
	};
}

#endif
