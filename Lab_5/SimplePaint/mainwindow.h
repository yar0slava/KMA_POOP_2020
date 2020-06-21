#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
#include <QFileDialog>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    virtual void mousePressEvent(QMouseEvent *event);
    virtual void mouseReleaseEvent(QMouseEvent *event);
    virtual void paintEvent(QPaintEvent *event);

private slots:
    void on_actionBlack_triggered();
    void on_actionWhite_triggered();
    void on_actionRed_triggered();
    void on_actionGreen_triggered();
    void on_actionBlue_triggered();
    void on_action10px_triggered();
    void on_action5px_triggered();
    void on_action2px_triggered();
    void on_actionClean_triggered();
    void on_actionSave_triggered();

    void on_actionLine_triggered();
    void on_actionRectangle_triggered();
    void on_actionElipse_triggered();
    void on_actionPoint_triggered();
    void on_actionRoundedRect_triggered();

private:
    enum Mode {Point, Line, Rectangle, Elipse, RoundedRect};

    Ui::MainWindow *ui;
    QImage image;
    bool drawing;
    QPoint lastPoint;
    int brushSize;
    QColor brushColor;
    Mode currentMode;

};
#endif // MAINWINDOW_H
