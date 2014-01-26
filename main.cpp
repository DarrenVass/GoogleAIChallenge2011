#include <QtCore/QCoreApplication>
#include "jollybot.h"

using namespace std;

int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);

    cout.sync_with_stdio(0); //this line makes your bot faster

    JollyBot bot;
    bot.playGame();

    return 0 ; // a.exec();
}
