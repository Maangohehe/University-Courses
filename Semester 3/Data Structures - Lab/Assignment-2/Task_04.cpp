#include <iostream>
using namespace std;
class Friends
{
    bool arr[5][5];
    int total_common, common_friends[5][4], size;

public:
    Friends(bool arr[5][5])
    {
        total_common = 0;
        size = 5;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                common_friends[i][j] = 0;
            }
        }
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                this->arr[i][j] = arr[i][j];
            }
        }
    }

    void find_common()
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                // If index has no friend then skip
                if (!arr[i][j])
                {
                    continue;
                }
                // Top edge cases
                if (i == 0)
                {
                    if (j == 0)
                    {
                        //Check what pair is common
                        if (arr[i][j] == arr[i][j + 1])
                        {
                            //if pair common increment and assign their numbers
                            total_common++;
                            common_friends[i][0] = i;
                            common_friends[i][1] = j;
                            common_friends[i][2] = i;
                            common_friends[i][3] = j + 1;
                        }
                        if (arr[i][j] == arr[i + 1][j])
                        {
                            total_common++;
                            common_friends[i][0] = i;
                            common_friends[i][1] = j;
                            common_friends[i][2] = i + 1;
                            common_friends[i][3] = j;
                        }
                    }
                    else if (j == size - 1)
                    {
                        if (arr[i][j] == arr[i][j - 1])
                        {
                            total_common++;
                            common_friends[i][0] = i;
                            common_friends[i][1] = j;
                            common_friends[i][2] = i;
                            common_friends[i][3] = j - 1;
                        }
                        if (arr[i][j] == arr[i + 1][j])
                        {
                            total_common++;
                            common_friends[i][0] = i;
                            common_friends[i][1] = j;
                            common_friends[i][2] = i + 1;
                            common_friends[i][3] = j;
                        }
                    }
                    else if (j > 0 && j < size - 1)
                    {
                        if (arr[i][j] == arr[i][j - 1])
                        {
                            total_common++;
                            common_friends[i][0] = i;
                            common_friends[i][1] = j;
                            common_friends[i][2] = i;
                            common_friends[i][3] = j - 1;
                        }
                        if (arr[i][j] == arr[i + 1][j])
                        {
                            total_common++;
                            common_friends[i][0] = i;
                            common_friends[i][1] = j;
                            common_friends[i][2] = i + 1;
                            common_friends[i][3] = j;
                        }
                        if (arr[i][j] == arr[i][j + 1])
                        {
                            total_common++;
                            common_friends[i][0] = i;
                            common_friends[i][1] = j;
                            common_friends[i][2] = i;
                            common_friends[i][3] = j + 1;
                        }
                    }
                }

                
                //Bottom edge cases
                else if (i == size - 1)
                {
                    if (j == 0)
                    {
                        if (arr[i][j] == arr[i][j + 1])
                        {
                            total_common++;
                            common_friends[i][0] = i;
                            common_friends[i][1] = j;
                            common_friends[i][2] = i;
                            common_friends[i][3] = j + 1;
                        }
                        if (arr[i][j] == arr[i - 1][j])
                        {
                            total_common++;
                            common_friends[i][0] = i;
                            common_friends[i][1] = j;
                            common_friends[i][2] = i - 1;
                            common_friends[i][3] = j;
                        }
                    }

                    else if (j == size - 1)
                    {
                        if (arr[i][j] == arr[i][j - 1])
                        {
                            total_common++;
                            common_friends[i][0] = i;
                            common_friends[i][1] = j;
                            common_friends[i][2] = i;
                            common_friends[i][3] = j - 1;
                        }
                        if (arr[i][j] == arr[i - 1][j])
                        {
                            total_common++;
                            common_friends[i][0] = i;
                            common_friends[i][1] = j;
                            common_friends[i][2] = i - 1;
                            common_friends[i][3] = j;
                        }
                    }
                }
                //mid cases
                else
                {
                    if (j == 0)
                    {
                        if (arr[i][j] == arr[i][j + 1])
                        {
                            total_common++;
                            common_friends[i][0] = i;
                            common_friends[i][1] = j;
                            common_friends[i][2] = i;
                            common_friends[i][3] = j + 1;
                        }
                        if (arr[i][j] == arr[i - 1][j])
                        {
                            total_common++;
                            common_friends[i][0] = i;
                            common_friends[i][1] = j;
                            common_friends[i][2] = i - 1;
                            common_friends[i][3] = j;
                        }
                        if (arr[i][j] == arr[i + 1][j])
                        {
                            total_common++;
                            common_friends[i][0] = i;
                            common_friends[i][1] = j;
                            common_friends[i][2] = i + 1;
                            common_friends[i][3] = j;
                        }
                    }
                    else if (j == size - 1)
                    {
                        if (arr[i][j] == arr[i][j - 1])
                        {
                            total_common++;
                            common_friends[i][0] = i;
                            common_friends[i][1] = j;
                            common_friends[i][2] = i;
                            common_friends[i][3] = j - 1;
                        }
                        if (arr[i][j] == arr[i - 1][j])
                        {
                            total_common++;
                            common_friends[i][0] = i;
                            common_friends[i][1] = j;
                            common_friends[i][2] = i - 1;
                            common_friends[i][3] = j;
                        }
                        if (arr[i][j] == arr[i + 1][j])
                        {
                            total_common++;
                            common_friends[i][0] = i;
                            common_friends[i][1] = j;
                            common_friends[i][2] = i + 1;
                            common_friends[i][3] = j;
                        }
                    }
                    else
                    {
                        if (arr[i][j] == arr[i][j - 1])
                        {
                            total_common++;
                            common_friends[i][0] = i;
                            common_friends[i][1] = j;
                            common_friends[i][2] = i;
                            common_friends[i][3] = j - 1;
                        }
                        if (arr[i][j] == arr[i][j + 1])
                        {
                            total_common++;
                            common_friends[i][0] = i;
                            common_friends[i][1] = j;
                            common_friends[i][2] = i;
                            common_friends[i][3] = j + 1;
                        }
                        if (arr[i][j] == arr[i - 1][j])
                        {
                            total_common++;
                            common_friends[i][0] = i;
                            common_friends[i][1] = j;
                            common_friends[i][2] = i - 1;
                            common_friends[i][3] = j;
                        }
                        if (arr[i][j] == arr[i + 1][j])
                        {
                            total_common++;
                            common_friends[i][0] = i;
                            common_friends[i][1] = j;
                            common_friends[i][2] = i + 1;
                            common_friends[i][3] = j;
                        }
                    }
                }
            }
        }
    }

    void print()
    {
        cout << "Printing\n\n\n";
        for (int i = 0; i < 5; i++)
        {
             cout << common_friends[i][0] << ", " << common_friends[i][1] << " is friends with " << common_friends[i][2] << ", " << common_friends[i][3] << endl;  
        }
    }
};

int main(void)
{
    bool arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Is true[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> arr[i][j];
        }
    }
    Friends f1(arr);
    f1.find_common();
    f1.print();
}