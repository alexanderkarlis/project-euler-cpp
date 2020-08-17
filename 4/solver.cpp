#include <algorithm>
#include <iostream>
#include <string>
#include <math.h>

int main(int argc, char **argv)
{
    std::string strNum = argv[1];
    std::size_t pos;

    int x = std::stoi(strNum, &pos);
    std::string rangenum(x, '9');

    int powNum = std::pow(10, x) - 1;
    int highestNum = 0;
    int p = 2;
    for (int i = 1; i <= powNum; i++)
    {
        for (int j = 1; j <= powNum; j++)
        {
            std::string strMul = std::to_string(j * i);
            int strLen = strMul.length();
            if (strLen % 2 != 0)
            {
                continue;
            }
            int strSplitVal = strLen / 2;
            std::string firstHalf = strMul.substr(0, strSplitVal);
            std::string secondHalf(strMul.substr(strSplitVal, strLen));
            std::reverse(secondHalf.begin(), secondHalf.end());
            if (firstHalf == secondHalf)
            {  
                if (j * i  > highestNum) {
                    highestNum = j * i;
                    std::cout << "first: " << firstHalf << std::endl;
                    std::cout << "second: " << secondHalf << std::endl;
                    std::cout << "FOUND MATCH: " << strMul << std::endl;
                    std::cout << std::endl;
                }
            }
        }
    }
    return 0;
}