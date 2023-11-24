#include<bits/stdc++.h>
using namespace std;
class Student_data
{
    public:
        string name;
        int cls;
        char section;
        int st_id;
        int math_mark;
        int eng_mark;
};

// defining compair function
// float cmp(Student_data a, Student_data b){
//     if(a.math_mark+a.eng_mark > b.math_mark+b.eng_mark)
//     {
//         return true;
//     }
//     else if(a.math_mark+a.eng_mark == b.math_mark+b.eng_mark)
//     {
//          if(a.st_id>b.st_id)
//         {
//             return false;
//         }
//         else{
//             return true;
//         }
//     }
//     else{
//        return false;
//     }
// }

// another way
float cmp(Student_data a, Student_data b){
    if(a.math_mark+a.eng_mark > b.math_mark+b.eng_mark)
    {
        return true;
    }
    else if(a.math_mark+a.eng_mark < b.math_mark+b.eng_mark)
    {
      return false;
    }
    else{
          if(a.st_id>b.st_id)
        {
            return false;
        }
        else{
            return true;
        }
    }
}
int main()
{
    int test_case;
    cin >> test_case;
    Student_data student[test_case];
    
    // Taking input
    for(int i=0; i<test_case; i++)
    {
        cin >>student[i].name >> student[i].cls >> student[i].section>> student[i].st_id >> student[i].math_mark >> student[i].eng_mark;
    }

    sort(student,student+test_case,cmp);
    // Giving output
     for(int i=0; i<test_case; i++)
    {
        cout <<student[i].name <<" "<< student[i].cls <<" "<< student[i].section<<" "<< student[i].st_id <<" "<< student[i].math_mark <<" "<< student[i].eng_mark << endl;
    }

    return 0;
}