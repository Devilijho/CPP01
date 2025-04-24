#pragma once

#include <string>
#include <iostream>

class Weapon {
	public:
		Weapon(std::string type);
		void setType(std::string type);
		const std::string &getType() const;
	private:
		std::string _type;
};
