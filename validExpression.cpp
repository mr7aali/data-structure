#include <iostream>
using namespace std;

int main()
{
    // string reg_ex="a(bc)*de";
    string reg_ex = "[^aeiou]";

    int k = 0;

    string text = "bdefrp";

    string temp = "";

    int text_len = text.size();
    int reg_ex_len = reg_ex.size();
    int isValid = true;
    int LeftRen = -1;
    int RightRen = -1;
    for (int i = 0; i < text_len; i++)
    {

        if ('(' == reg_ex[k])
        {
            k++;
            while (')' != reg_ex[k])
            {
                temp.push_back(reg_ex[k]);
                k++;
            }

            if (reg_ex[k + 1] == '+')
            {
                int temp_len = temp.size();
                for (int j = 0; j < temp_len; j++)
                {
                    if (temp[j] == text[i])
                    {
                        i++;
                    }
                    else
                    {
                        isValid = false;
                        break;
                    }
                }
            }
            if (reg_ex[k + 1] == '?')
            {
                int temp_len = temp.size();
                int subCkh = 0;
                for (int j = 0; j < temp_len; j++)
                {

                    if ((temp[j] == text[i]))
                    {
                        if (text[i] == text[i + temp_len])
                        {
                            subCkh++;
                        }

                        i++;
                    }

                    if (subCkh >= temp_len)
                    {
                        isValid = false;
                    }
                }
            }

            k += 2;
        }


       if('['== reg_ex[k] && '^' == reg_ex[k+1]){
            k +=2;
          //  string tem_str="";
          //  int tem_str_len = tem_str.size();

          //  while (']' != reg_ex[k]){
          //      temp.push_back(tem_str[k]);
          //      k++;
          //  }
           while(']' != reg_ex[k]){
              if(text[i] == 'a' || text[i] =='e' || text[i] =='i' || text[i]=='o' || text[i]=='u' ){
                isValid= false ;
                break;
              }
              else{
                i++;
                k++;
              }

           }


       }

        if ('[' == reg_ex[k])
        {
            k++;
            LeftRen = reg_ex[k];
            k += 2;
            RightRen = reg_ex[k];

            k += 3;
        }





        if (!isValid)
        {
            break;
        }

        if (reg_ex[k] == text[i])
        {
            k++;
        }
        else if (text[i] == temp[0])
        {
            int temp_len = temp.size();
            for (int j = 0; j < temp_len; j++)
            {
                if (text[i] == temp[j])
                {
                    i++;
                    continue;
                }
                else
                {
                    isValid = false;
                    break;
                }
            }
            i--;
        }
        else if (LeftRen != -1)
        {
            int c_decimal = text[i];
            if (c_decimal < LeftRen || c_decimal > RightRen)
            {
                isValid = false;
                break;
            }
        }

        else
        {
            // cout<<"Invalid text"<<endl;
            isValid = false;
            break;
        }
        if (((i + 1) == text_len) && (reg_ex_len == k))
        {
            isValid = true;
        }
    }

    if (isValid)
    {
        cout << "Valid text" << endl;
    }
    else
    {
        cout << "Invalid text" << endl;
    }
    return 0;
}
