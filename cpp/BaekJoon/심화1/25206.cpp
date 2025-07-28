#include <iostream>
#include <string>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    string str;
    float totalsum = 0.0;
    float totalcredit = 0.0;

    while (getline(cin, str))
    {
        float grade = -1.0;
        string coursename, degree, grading;
        int index1, index2;
        int count = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == ' ' && count == 0)
            {
                coursename = str.substr(0, i);
                index1 = i + 1;
                count++;
                continue;
            }
            if (str[i] == ' ' && count == 1)
            {
                degree = str.substr(index1, i - index1);
                grading = str.substr(i + 1, str.size() - i - 1);
                break;
            }
        }
        if (grading == "A+")
            grade = 4.5;
        else if (grading == "A0")
            grade = 4.0;
        else if (grading == "B+")
            grade = 3.5;
        else if (grading == "B0")
            grade = 3.0;
        else if (grading == "C+")
            grade = 2.5;
        else if (grading == "C0")
            grade = 2.0;
        else if (grading == "D+")
            grade = 1.5;
        else if (grading == "D0")
            grade = 1.0;
        else if (grading == "F")
            grade = 0.0;
        else if (grading == "P")
            continue;
        totalcredit += stof(degree);
        totalsum += (stof(degree) * grade);
    }
    cout.precision(7);
    cout << (totalsum / totalcredit) << endl;

    return 0;
}
