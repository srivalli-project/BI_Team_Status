

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
    int start=0,sum=0;
    if(gender=='g')
    start=1;
    for(;start<number_of_students;start+=2)
    sum+=*(marks+start);
    return sum;
  //Write your code here.
}

