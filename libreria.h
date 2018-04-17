std::string australianToAmerican(int grade)
{
    if (grade >= 0 and grade <= 100)
    {
        if(grade >= 83 and grade <= 100)
            return("HD");
        else if(grade >= 73 and grade <= 82.99)
            return("D");
        else if(grade >= 63 and grade <= 72.99)
            return("C");
        else if(grade >= 50 and grade <= 62.99)
            return("P");
        else if (grade >= 0 and grade <= 49.99)
            return("N");
    }
    else
        return ("fail");
}

std::string veredicto(std::string expected, std::string actual)
{
	if (expected == actual)
		return "pass";
	else
		return "fail";
}