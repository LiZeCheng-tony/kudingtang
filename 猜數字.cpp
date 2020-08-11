#include <iostream>
#include <ctime>
#include <unistd.h>
#include <stdio.h>
using namespace std;
int flag = 0;
int main()
{
    int a, MIN = 20, MAX = 50;
    srand((int)time(NULL));
    int ans = MIN + rand() % (MAX - MIN + 1);
    cout << "正在载入游戏,请稍等";
    for (int i = 1; i <= 6; i++)
    {
        sleep(0.5);
        cout << ".";
    }
    cout << "\n游戏加载完成!";
    sleep(1);
    system("clear");
    int hp = 10;
    cout << "欢迎进入猜数游戏!" << endl;
    for (int i = 1; i <= hp; i++)
    {
        cout << "HP:" << hp - i + 1 << endl;
        cout << "请输入一个在" << MIN << "~" << MAX << "之间的整数" << endl;
        cin >> a;
        if (a == ans && i == 1)
        {
            cout << "运气爆表!第一次就对啦!~(>o<)~!\n";
            break;
        }
        else if (a == 9999 && flag == 0)
        {
            printf("恭喜发现彩蛋!\n");
            printf("HP+5\n");
            hp += 5;
            flag = 1;
        }
        else if (a = 9999 && flag == 1)
        {
            cout << "你在想什么?\n";
            return 0;
        }
        else if (a == ans && i > 1)
        {
            cout << "猜对啦!0(n _ n )o~\n";
            break;
        }
        else if (a > ans && i <= hp)
        {
            cout << "猜的大了点\n";
        }
        else if (a < ans && i < hp)
        {
            cout << "猜的小了点\n";
        }
        else
        {
            cout << "很遗憾,你没有猜中!再接再厉哦\n\n";
            char de;
            printf("是否重新开始?[Y]es/no:");
            cin >> de;
            if (de == 'Y' | de == 'y' | de == '\n')
            {
                main();
            }
        }
    }
    return 0;
}