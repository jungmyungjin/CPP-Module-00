#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <sstream>
#include <cstdio>

/*
	char *first_name;
	char *last_name;
	char *nick_name;
	char *phone_number;
	char *darkest_secret;
*/



namespace phone_book
{

#define COLUMN_SIZE 10;
	class PhoneBook
	{
		private:
			int idx;
			std::string first_name;
			std::string last_name;
			std::string nick_name;
			std::string phone_number;
			std::string darkest_secret;
		
		public:
			void add_contact (int _idx)
			{
				idx = _idx;
				std::cout << "First name : ";
				std::getline(std::cin, first_name);
				std::cout << "Last name : ";
				std::getline(std::cin, last_name);
				std::cout << "Nick name : ";
				std::getline(std::cin, nick_name);
				std::cout << "Phone number : ";
				std::getline(std::cin, phone_number);
				std::cout << "darkest secret... : ";
				std::getline(std::cin, darkest_secret);
			}

			void print_page(void)
			{
				std::cout << "First name : " << first_name << std::endl;
				std::cout << "Last name : " << last_name << std::endl;
				std::cout << "Nick name : " << nick_name << std::endl;
				std::cout << "Phone number : " << phone_number << std::endl;
				std::cout << "Darkest secret : " << darkest_secret << std::endl;
			}
			void print_column(std::string _text)
			{
				if (_text.length() <= 10)
					std::cout << std::right << std::setw(10) << _text;
				else
				{
					_text =  _text.substr(0,9) + ".";
					std::cout << std::right << std::setw(10) << _text;
				}
			}
			void print_privew(int index)
			{
				// 색인, 이름, 성, 이름, 별명 까지.
				print_column(std::to_string(index));
				std::cout << "|";
				print_column(first_name);
				std::cout << "|";
				print_column(last_name);
				std::cout << "|";
				print_column(nick_name);
				std::cout << "|";
				print_column(phone_number);
				std::cout << "|";
				print_column(darkest_secret);
				std::cout << std::endl;
			}
	};
}


#endif