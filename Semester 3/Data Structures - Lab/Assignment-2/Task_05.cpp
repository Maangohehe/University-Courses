#include <iostream>
using namespace std;
class GPA{
    double **arr = nullptr;
    int *size = nullptr;
    const int credit_hrs;
    double gpa;
    public:
    //Program will take gpa of 5 student having 5 subjects
        GPA(int credit_hrs): credit_hrs(credit_hrs)
        {
            gpa = 0.0;
            arr = new double*[5];
            size = new int[5];
            for (int i = 0; i < 5; i++)
            {
                cout << "Size of row " << i + 1 << ": ";
                cin >> size[i];
                arr[i] = new double[size[i]];
            }
        }
        void getGPA()
        {
            for (int i = 0; i < 5; i++)
            {
                cout << "Input gpa for student " << i + 1 << endl;
                for (int j = 0; j < size[i]; j++)
                {
                    cout << "GPA for subject " << j + 1 << ": ";
                    cin >> arr[i][j];
                }
            }
        }

        void printGPA()
        {
            for (int i = 0; i < 5; i++)
            {
                cout << "GPA of student " << i + 1 << endl;
                for (int j = 0; j < size[i]; j++)
                {
                    cout << "GPA of subject " <<  j + 1 << ": " << arr[i][j] << endl;
                }
            }
        }

        void calculateGPA()
        {
            for (int i = 0; i < 5; i++)
            {
                gpa = 0.0;
                for (int j = 0; j < size[i]; j++)
                {
                    gpa += arr[i][j] * 3;
                }
                gpa /= 3 * size[i];
                cout << "GPA of student " << i + 1 << " is: " << gpa << endl;
            }
        }
        ~GPA()
        {
            for (int i = 0; i < 5; i++)
            {
                delete[] arr[i];
            }
            delete[] size;
            delete[] arr;
        }
};

int main(void)
{
    GPA g1(3);
    g1.getGPA();
    g1.calculateGPA();
    // g1.printGPA();
}