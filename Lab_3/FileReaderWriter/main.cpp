#include <QCoreApplication>

#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>
#include <iostream>

using namespace std;

void rewrite(QString fileFrom, QString fileTo){

    QFile qfileFrom(fileFrom);
    if(!qfileFrom.open(QFile::ReadOnly |
                  QFile::Text))
    {
        qDebug() << " Could not open the file for reading";
        return;
    }
    cout << "opened the file to read from" << endl;

    QTextStream in(&qfileFrom);


    QFile qfileTo(fileTo);
    if(!qfileTo.open(QFile::WriteOnly |
                  QFile::Text))
    {
        qDebug() << " Could not open file for writing";
        return;
    }
    cout << "opened the file to write to" << endl;

    QTextStream out(&qfileTo);

    while(!in.atEnd()){
        out << in.readLine().append(' ').replace('\t', ' ');
    }

    qfileTo.flush();
    qfileTo.close();
    qfileFrom.close();

    cout << "finished writing" << endl;
}

int main(int argc, char *argv[])
{
    QString filename1 = "C:/Users/Yaroslava/Qt/KMA_POOP_2020/Lab_3/FileReaderWriter/MyFile1.txt";
    QString filename2 = "C:/Users/Yaroslava/Qt/KMA_POOP_2020/Lab_3/FileReaderWriter/MyFile2.txt";

    rewrite(filename1, filename2);
}
