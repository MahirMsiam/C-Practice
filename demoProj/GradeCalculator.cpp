#include<iostream>
using namespace std;

class findGrade{
    float q1,q2,qT,midMarks,finalMarks;
    float percentage,percQ,percM,percF;
    string grade;
    public:
    void getMarks();
    void calcMarks();
    void calcGrade();
    void showGrade();
}obj;

int main(){

    obj.getMarks();
    obj.calcMarks();
    obj.calcGrade();
    obj.showGrade();

    return 0;
}
void findGrade :: getMarks(){
    cout<<"\nEnter obtained marks of Quiz # 1 out of (10) :: ";
    cin>>q1;
    cout<<"Enter obtained marks of Quiz # 2 out of (10) :: ";
    cin>>q2;
    cout<<"Enter obtained marks of Mids term out of (100) :: ";
    cin>>midMarks;
    cout<<"Enter obtained marks of Final term out of (100) :: ";
    cin>>finalMarks;
    cout<<endl;
}
void findGrade :: calcMarks(){
    qT = q1 + q2;
    percQ = (25.0 / 20.0) * qT;
    percM = (25.0 / 100.0) * midMarks;
    percF = (50.0 / 100.0) * finalMarks;
    percentage = percQ + percM + percF;
}
void findGrade :: calcGrade(){
    if (percentage >= 90.0)
        grade = "A";
    if (percentage >= 80.0 && percentage < 90.0)
        grade = "B";
    if (percentage >= 70.0 && percentage < 80.0)
        grade = "C";
    if (percentage >= 60.0 && percentage < 70.0)
        grade = "D";
    if (percentage >= 50.0 && percentage < 60.0)
        grade = "E";
    if (percentage >= 0.0 && percentage < 50.0)
        grade = "Fail";
}
void findGrade :: showGrade(){
    cout<<"\n\n";
    cout<<"-----------------------------------------"<<endl;
    cout<<"The Obtained Grade :: "<<grade<<endl;
    cout<<"-----------------------------------------"<<endl;
}
