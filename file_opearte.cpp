#include <fstream>
#include <iomanip>
#include <iostream>
#include <math.h>
#include <sstream>
#include <vector>

using namespace std;
int main()
{
    ifstream ifs;
    vector<string> data;
    vector<vector<string>> split_data;
    vector<vector<string>> output;

    ifs.open("aaa.txt");//to read file (if have chinese in file encoding need to be ANSI)
    if (!ifs.is_open())
    {
        cout << "fail";
    }
    else
    {
        cout << "file read\n";
        string name;
        while (getline(ifs, name))
        {
            cout << name << "\n";
            stringstream ss(name);
            vector<string> rows_data;
            while (getline(ss, name, '\t'))//use tab to split
            {
                rows_data.push_back(name);
            }
            split_data.push_back(rows_data);
            data.push_back(name);
        }
        ifs.close();
    }
    int sitename_count = 0;
    vector<float> sum_data(9, 0);
    string now_sitename = split_data[1][0];
    output.push_back(split_data[0]);
    for (int i = 1; i < split_data.size(); i++) //deal with data
    {
        if (now_sitename != split_data[i][0] || i == split_data.size() - 1) //if is the end ->input the output array
        {
            if (i == split_data.size() - 1)
            {
                sitename_count++;
                for (int j = 2; j < split_data[i].size(); j++)
                {

                    if (split_data[i][j] != "")
                    {
                        sum_data[j] += stof(split_data[i][j]);
                    }
                }
            }
            now_sitename = split_data[i][0];
            vector<string> output_row;
            output_row.push_back(split_data[i - 1][0]);
            output_row.push_back(split_data[i - 1][1]);
            for (int k = 2; k < sum_data.size(); k++)
            {
                float input_data = (sum_data[k] / sitename_count);
                output_row.push_back(to_string(input_data));
                sum_data[k] = 0;
            }
            output.push_back(output_row);
            sitename_count = 0;
        }
        sitename_count++;
        for (int j = 2; j < split_data[i].size(); j++)
        {

            if (split_data[i][j] != "")
            {
                sum_data[j] += stof(split_data[i][j]);
            }
        }
    }

    ofstream ofs("123.txt"); //write the file
    if (!ofs.is_open()) 
    {
        cout << "fail to write";
    }
    else
    {
        for (int i = 0; i < output.size(); i++)
        {

            for (int j = 0; j < output[i].size(); j++)
            {
                if (i > 0 && j > 1)
                {
                    float output_round = stof(output[i][j]);
                    ofs << setprecision(1) << fixed << output_round << "\t"; //to set precision for float
                    cout << setprecision(1) << fixed << output_round << "  ";
                }
                else
                {
                    stringstream ss;
                    ss << setprecision(1) << output[i][j];
                    ofs << ss.str() << "\t";
                    cout << setprecision(1) << fixed << output[i][j] << "  ";
                }
            }
            ofs << "\n";
            cout << "\n";
        }
        ofs.close();
    }
    system("PAUSE");
    return 0;
}