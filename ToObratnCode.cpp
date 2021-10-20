#include <iostream>

using namespace std;


int My_Pow_Ten(int i)
{
    int i2 = 1;
    int r = 1;
    while (i2 < i)
    {
        r = r * 10;
        i2 ++;
    }
    return r;
}

int ToPryamCode(int a)
{
    int a2 = a;
    int r = 1000000000;
    int i = 1;
    while (a2 > 0)
    {
        r = r + (a2 % 2) * My_Pow_Ten(i);
        i ++;
        a2 = a2 / 2;
    }
    return r;
}

void RetObrCode(int a, int ish)
{
    int i = 1;
    int Step_des;
    int Step_des2;
    if(ish >= 0)
    {
        cout <<0;
        while (i < 8)
        {
            Step_des = My_Pow_Ten(8 - i);
            Step_des2 = My_Pow_Ten(i);
            cout <<(a / Step_des) % 10;
            i ++;
        }
    }
    else
    {
        cout <<1;
        //cout <<"ELSE  ";
        while (i < 8)
        {
            Step_des = My_Pow_Ten(8 - i);
            Step_des2 = My_Pow_Ten(i);
            //cout <<"(a / step_des) % 10 = " <<(a / Step_des) % 10 <<endl;
            if((a / Step_des) % 10 == 0)
                cout <<1;
            if((a / Step_des) % 10 == 1)
                cout <<0;
            i ++;
        }
    }
}

void Out_P_Code(int a)
{
    int i = 1;
    int Step_des;
    int Step_des2;
    while (i < 8)
    {
        Step_des = My_Pow_Ten(8 - i);
        Step_des2 = My_Pow_Ten(i);
        //cout <<(a / Step_des) % 10;
        i ++;
    }
}

int My_Abs(int a)
{
    if(a < 0)
        return a * (-1);
    return a;
}

int main()
{
    int a, a2;
    cin >>a;
    int P_Code;
    int isOtr = 0;
    if(a > -128 && a < 127)
    {
        if(a < 0)
        {
            isOtr = 1;
        }
        a2 = My_Abs(a);
        P_Code = ToPryamCode(a2);
        //cout <<endl <<endl;
        //cout <<isOtr;
        //Out_P_Code(P_Code);
        //cout <<"P_Code = " <<P_Code <<endl <<endl;
        RetObrCode(P_Code, a);
    }
    else
        cout <<-1;
    return 0;
}
