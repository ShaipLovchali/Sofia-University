#pragma once
struct FMI
{
private:
	int id;
	char dekan[32];

public:
	FMI(); // default
	FMI(int id, const char* dekan); // parametric
	FMI(int id); 

	void setId(int id);
	void setDekan(const char* dekan);
	
	int getId() const;
	const char* getDekan()const; // indicates that we are not going to modify the data in here;

	void input();
	void print()const;
};

