#include<iostream>
using namespace std;

const int maxStudents = 40; //setting constant variable for 40 students maximum
const int maxQuizzes = 5; //setting constant variable for 5 Quizes maximum
string stdname[maxStudents]; //String Array for Students Names
int quizMarks[maxStudents][5]; //Int Array for Students Quiz Marks 
int studentcounter = 0; //studentcounter for using in loops
int userstudents = 0; //userstudent--> How many Student user Inputs

void getQuizData(){ //Function for Getting Data of Students
    string name;
    cout<<"Enter the Name of the Student " << studentcounter + 1 << ": ";
    cin.ignore(); // to clear the newline character from the input buffer
    getline(cin, name); //read full name including spaces
    stdname[studentcounter]=name; //Storing Student name in Array
    cout<<"Enter Marks for Quiz 1 - 5 (Press Enter for New Marks): \n";
    for (int i=0;i<maxQuizzes;i++){ //loop for storing Quiz Marks
        cin>>quizMarks[studentcounter][i];
    }
    studentcounter++; //Increment in studentcounter to Iterate in loop
}

void MaximumAndMinimumMarks(){ //Function for Maximum and Minimum Marks
    cout << "\n~~~~~~~MAXIMUM MARKS~~~~~~~\n\n";
    for(int i=0;i<maxQuizzes;i++) {
        int max=quizMarks[0][i]; // Initialize max with the first student's mark
        for (int j=1;j<studentcounter;j++) {
            if(quizMarks[j][i]>max){ //checking if marks in the array is greater than max variable
            max= quizMarks[j][i]; //then assigning those marks into max variable
            }
        }
        
        cout<<"Maximum Marks for Quiz "<<i+1<<" is: "<<max<<endl;
    }

    cout<<"\n~~~~~~~MINIMUM MARKS~~~~~~~\n\n";
    for (int i=0;i<maxQuizzes;i++) { //loop upto 5 quizez
        int min=quizMarks[0][i]; // Initialize min with the first student's mark for the current quiz
        for (int j=1;j<studentcounter;j++){
            if (quizMarks[j][i]<min){ //checking if marks in the array is lesser than max variable
                min =quizMarks[j][i]; //checking if marks in the array is lesser than max variable
            }
        }
        cout<<"Minimum Marks for Quiz "<<i+1<<" is: "<<min<<endl;
    }
}

void AverageQuizMarks(){ //Function for Average Quiz Marks
    cout <<"\n~~~~~~~AVERAGE MARKS~~~~~~~\n\n";
    for(int i=0;i<maxQuizzes;i++){ //loop upto maxQuizzes which are 5
        int totalMarks=0; //totalMarks set to 0
        for(int j=0;j<studentcounter;j++){ //loop upto student counter(student user entered)
            totalMarks=totalMarks+quizMarks[j][i]; //assigning quizmarks[j][i] to totalMarks variable 
        }
        double averageMarks=totalMarks/(double)studentcounter; //using double varibale for average of quizes
        cout<<"Average Marks of Quiz "<<i+1<<" are: "<<averageMarks<<endl;
      
      }

}

void ShowData() { //Function for Displaying all Data
    cout << "\n~~~~~~~ALL STUDENTS DATA~~~~~~~\n\n";
    for (int i = 0; i < studentcounter; i++) { //loop upto student counter(student user entered)
        cout << "Student Name: " << stdname[i] << endl << endl;
        cout << "Quiz Marks [1 to 5]: ";
        for (int j = 0; j < maxQuizzes; j++) { // loop for printing quiz marks
            cout << quizMarks[i][j] << " "; // printing quiz marks
        }
        cout << endl << endl;

         int max=quizMarks[i][0]; // Initialize max with the first quiz mark
        for (int j=1;j<5;j++){     //loop upto max Quizes which is 5
            if (quizMarks[i][j]>max){ //checking if Array quizMarks is greater than max variable
                max=quizMarks[i][j]; //then assigning current index of array to max variable
            }
        }
        cout<<"\nMaximum Marks of Student "<<stdname[i]<<" is: "<<max<< endl;


        cout<<endl;
        int min=quizMarks[i][0]; // Initialize min with the first quiz mark
        for(int j=1;j<5;j++){
            if(quizMarks[i][j]<min){
                
                min =quizMarks[i][j];
            }
        }
        cout<<"\nMinimum Marks of Student " <<stdname[i]<<" is: "<<min<<endl;
    

        int totalMarks=0;
        for(int j=0;j<5;j++){
            totalMarks=totalMarks+quizMarks[i][j];
        }
        double averageMarks=totalMarks/5.0;
    cout <<"\nAverage Marks of Student " << stdname[i] << " is: " << averageMarks<<endl<<endl;    
    
    
    // Display total marks for the five quizzes
    cout << "Total Marks of Student " << stdname[i] << " for 5 quizzes is: " << totalMarks << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
    
    
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
    }

    //     for(int i=0;i<maxQuizzes;i++){
    //         int total=0;
    //         total+=quizMarks[studentcounter][i];
        
    // cout<<"\nTotal Marks of Student "<<stdname[i]<<" are: "<<total<<endl<<endl;    
    //     }
}
  

int main() {
    cout <<"Enter Number of Students you want to Enter: ";
    cin >> userstudents;

    for (int i = 0; i < userstudents; i++){ //loop for getting student info upto fixed students
        getQuizData(); //calling getQuizdata Function for storing student info
    }

    // Finding Maximum Marks in Each Quiz
    MaximumAndMinimumMarks();

    //displaying Average Marks of Each Quiz
    AverageQuizMarks();

    // Displaying student data
    ShowData();
    return 0;
}