#ifndef _BUDGET_H_
#define _BUDGET_H_

using namespace std;

class Budget{
private:
	int maxNumberOfYears, minNumberOfYears, maxSalary, minSalary;

public:
	int getMaxNumberOfYears();
	void setMaxNumberOfYears(int max_y);
	int getMinNumberOfYears();
	void setMinNumberOfYears(int min_y);
	int getMaxSalary();
	void setMaxSalary(int max_s);
	int getMinSalary();
	void setMinSalary(int min_s);

};

#endif