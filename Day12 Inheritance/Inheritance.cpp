class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        Student(string firstName, string lastName, int id, vector<int> scores) : Person(firstName, lastName, id){
            this->testScores = scores;//!!
        }

        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        char calculate(){//type!!
            int sum;
            for(int i=0; i < this->testScores.size(); i++){//this->testScores!!
                sum += this->testScores[i];//?
            }
            int scores = sum / testScores.size();
            
            if (scores<=100 && scores >=90)
                return 'O';
            else if(scores >= 80)
                return 'E';
            else if (scores >=70)
                return 'A';
            else if (scores >=55)
                return 'P';
            else if (scores >=40)
                return 'D';
            else return 'T';
        }
    
};