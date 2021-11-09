#include <iostream>
#include <algorithm>
#include <string>

enum Type{shata, hajar, lakh, kuti, end};

std::string fn_toBangla(std::string str_Num);
std::string fn_FixedNum(std::string str_Num);

int main()
{
    int intCount = 1;

    for(std::string str_Num; std::cin>> str_Num; intCount++)
    {
        if(intCount < 10) std::cout<< "   " << intCount << ". " << fn_toBangla(str_Num) << '\n';
        else std::cout<< "  " << intCount << ". " << fn_toBangla(str_Num) << '\n';
    }

    return 0;
}

std::string fn_FixedNum(std::string str_Num)
{
    if(str_Num.length() == 2)
    {
        if(str_Num[1] == '0') return (str_Num[0] == '0') ? ("") : (str_Num.substr(0, 1));
        else return str_Num;
    }
    else if(str_Num.length() == 1) return (str_Num[0] == '0') ? ("") : str_Num;
}

std::string fn_toBangla(std::string str_Num)
{
    if(str_Num.length() < 3) return str_Num;

    std::string str_Result = "";
    std::string str_CurrNum = "";

    std::reverse(str_Num.begin(), str_Num.end());

    str_CurrNum += str_Num[0];
    str_CurrNum += str_Num[1];

    str_Result += fn_FixedNum(str_CurrNum);

    for(int i = 2, int_Type = shata;;)
    {
        str_CurrNum = "";

        switch(int_Type)
        {
            case shata:
                str_CurrNum += str_Num[i++];

                if(i >= str_Num.length())
                {
                    int_Type = end;

                    if(str_CurrNum[0] != '0')
                    {
                        str_Result += " atahs ";
                        str_Result += str_CurrNum;
                    }

                    break;
                }
                else
                {
                    int_Type = hajar;

                    if(str_CurrNum[0] != '0')
                    {
                        str_Result += " atahs ";
                        str_Result += str_CurrNum;
                    }
                }

                break;

            case hajar:
                str_CurrNum += str_Num[i++];

                if(i >= str_Num.length())
                {
                    int_Type = end;

                    if(str_CurrNum[0] != '0')
                    {
                        str_Result += " rajah ";
                        str_Result += str_CurrNum;
                    }

                    break;
                }

                str_CurrNum += str_Num[i++];

                if(i >= str_Num.length())
                {
                    int_Type = end;
                    str_CurrNum = fn_FixedNum(str_CurrNum);

                    if(str_CurrNum != "")
                    {
                        str_Result += " rajah ";
                        str_Result += str_CurrNum;
                    }

                    break;
                }
                else
                {
                    int_Type = lakh;
                    str_CurrNum = fn_FixedNum(str_CurrNum);

                    if(str_CurrNum != "")
                    {
                        str_Result += " rajah ";
                        str_Result += str_CurrNum;
                    }
                }

                break;

            case lakh:
                str_CurrNum += str_Num[i++];

                if(i >= str_Num.length())
                {
                    int_Type = end;

                    if(str_CurrNum[0] != '0')
                    {
                        str_Result += " hkal ";
                        str_Result += str_CurrNum;
                    }

                    break;
                }

                str_CurrNum += str_Num[i++];

                if(i >= str_Num.length())
                {
                    int_Type = end;
                    str_CurrNum = fn_FixedNum(str_CurrNum);

                    if(str_CurrNum != "")
                    {
                        str_Result += " hkal ";
                        str_Result += str_CurrNum;
                    }

                    break;
                }
                else
                {
                    int_Type = kuti;
                    str_CurrNum = fn_FixedNum(str_CurrNum);

                    if(str_CurrNum != "")
                    {
                        str_Result += " hkal ";
                        str_Result += str_CurrNum;
                    }
                }

                break;

            case kuti:
                str_CurrNum += str_Num[i++];

                if(i >= str_Num.length())
                {
                    int_Type = end;
                    str_Result += " ituk";

                    if(str_CurrNum[0] != '0')
                    {
                        str_Result += " ";
                        str_Result += str_CurrNum;
                    }

                    break;
                }

                str_CurrNum += str_Num[i++];

                if(i >= str_Num.length())
                {
                    int_Type = end;
                    str_CurrNum = fn_FixedNum(str_CurrNum);
                    str_Result += " ituk";

                    if(str_CurrNum != "")
                    {
                        str_Result += " ";
                        str_Result += str_CurrNum;
                    }

                    break;
                }
                else
                {
                    int_Type = shata;
                    str_CurrNum = fn_FixedNum(str_CurrNum);
                    str_Result += " ituk";

                    if(str_CurrNum != "")
                    {
                        str_Result += " ";
                        str_Result += str_CurrNum;
                    }
                }

                break;
        }

        if(int_Type == end) break;
    }

    if(str_Result[0] == ' ') str_Result = str_Result.substr(1, str_Result.length() - 1);

    std::reverse(str_Result.begin(), str_Result.end());

    return str_Result;
}
