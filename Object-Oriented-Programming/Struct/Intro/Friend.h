#pragma once
enum gender{male, female, non};

struct Friend
{
private:
	gender sex;
	char name[32];
	char actor[32];
	int age;
	char job[32];

public:
	Friend(); // default constructor
	Friend(gender sex, const char* name, const char* actor, int age, const char* job); 
	// параметричен конструктор, конструктор с общо ползване

	// setters
	void setGender(gender sex);
	void setName(const char* name);
	void setActor(const char* actor);
	void setAge(int age);
	void setJob(const char* job);

	// getters
	gender getGender();
	char* getName();
	char* getActor();
	int getAge();
	char* getJob();

	void printFriend();
	void input();
};

