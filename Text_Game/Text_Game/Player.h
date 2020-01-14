/*
	Specifies that the complier includes the header file only once, when compiling a source code file.
	The use of #pragma once can reduce the first #include of the file in the translation unit.
	It's called the multiple-include optimization.
	More information, go to: https://docs.microsoft.com/en-us/cpp/preprocessor/once?view=vs-2019
*/
#pragma once

//A class which holds all of the information for a 'Player'.
//By default, a class is set to 'PRIVATE' (discussed further below).
class PlayerStats {

	//PRIVATE means that only variables, functions etc can only be called within the class it's in.
private:
	int health;
	bool isDead;

	//PUBLIC means that the variables, functions etc can be called anywhere within the program.
public:

	//This is a function that is used to set the players health.
//As the 'health' variable is private, we need to use public functions to access it within
//the class, and the public functions to access it else where.
//This function has a 'VOID' return type as we're only setting the value here, not returning it.
	void setHealth(int h)
	{
		//H is set as another variable to store the value in when passing it.
        //health = h means that the health variable will be set to whatever h is.
		health = h;
	}
	
	//This function has a INT return type as we're returning the health value and nothing else.
    //This 'gets' the players health which has been set from the function above.
	int getHealth()
	{
		//As explained above 'RETURN' means just return the value of that specific variable.
		//This can be any data type. int, float, double, bool etc.
		return health;
	}

	//This is a 'Constructor'.
	//A constructor is basically a 'function' that sets all variable initially.
	PlayerStats()
	{
		//If we look at the 'setHealth' function, you can see the function requires one arugment to be passed in.
		//So, doing 'setHealth(100)' will set the players health to 100. This value can be whatever you like.
		setHealth(100);
		//isDead = false;
	}

	//This is a function that will only take damage away from the player.
	//This function will need a integer passed as an argument.
	//This is explained in 'main.cpp'
	void damagePlayer(int damageAmount)
	{
		//This function will deduct the amount passed into it.
		//Health is assigned to health - damageAmount to assign it to the main health variable.
		health = health - damageAmount;
	}

	//bool isDead() 
	//{
	//	if (health <= 0) 
	//	{
	//		cout << "You're dead!" << endl;
	//	}

	//	return isDead;
	//}

};