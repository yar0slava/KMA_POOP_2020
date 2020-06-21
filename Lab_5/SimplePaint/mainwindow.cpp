#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    image = QImage(this ->size(), QImage::Format_RGB32);
    image.fill(Qt::white);
    drawing = false;
    brushColor = Qt::black;
    brushSize = 2;
    currentMode = RoundedRect;
    setWindowTitle(tr("Simple Paint"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *event){
    if(event->button() == Qt::LeftButton){
        drawing = true;
        lastPoint = event->pos();
    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event){
    if(drawing){
        QPainter painter(&image);
        painter.setPen(QPen(brushColor, brushSize, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));

        switch (currentMode) {
        case Line:
            painter.drawLine(lastPoint, event->pos());
            break;
        case Rectangle:
            painter.drawRect(lastPoint.x(), lastPoint.y(), event->pos().x()-lastPoint.x(), event->pos().y()-lastPoint.y());
            break;
        case Elipse:
            painter.drawEllipse(lastPoint.x(), lastPoint.y(), event->pos().x()-lastPoint.x(), event->pos().y()-lastPoint.y());
            break;
        case Point:
            painter.drawPoint(lastPoint);
            break;
        case RoundedRect:
            qreal width = event->pos().x()-lastPoint.x();
            qreal height = event->pos().y()-lastPoint.y();
            qreal startX, startY;

            if(width < 0){
                startX = event->pos().x();
            }else{
                startX = lastPoint.x();
            }
            if(height < 0){
                startY = event->pos().y();
            }else{
                startY = lastPoint.y();
            }

            width = width<0 ? -1*width : width;
            height = height<0 ? -1*height : height;

            painter.drawRoundedRect(startX, startY, width, height, width/8, height/8, Qt::AbsoluteSize);
            break;
        }

        lastPoint = event ->pos();
        this ->update();
    }
}
void MainWindow::paintEvent(QPaintEvent *event){
    QPainter canvasPainter(this);
    canvasPainter.drawImage(this->rect(), image, image.rect());
}

void MainWindow::on_actionBlack_triggered(){
    brushColor = Qt::black;
}

void MainWindow::on_actionWhite_triggered(){
    brushColor = Qt::white;
}

void MainWindow::on_actionRed_triggered(){
    brushColor = Qt::red;
}

void MainWindow::on_actionGreen_triggered(){
    brushColor = Qt::green;
}

void MainWindow::on_actionBlue_triggered(){
    brushColor = Qt::blue;
}

void MainWindow::on_action10px_triggered(){
    brushSize = 10;
}

void MainWindow::on_action5px_triggered(){
    brushSize = 5;
}

void MainWindow::on_action2px_triggered(){
    brushSize = 2;
}

void MainWindow::on_actionClean_triggered(){
    image.fill(Qt::white);
    this->update();
}

void MainWindow::on_actionSave_triggered(){
    QString filePath = QFileDialog::getSaveFileName(this,
      "SaveImage", "", "PNG (*.png);;JPEG (*.jpg *.jpeg);;All files (*.*)");

    if(filePath == ""){
        return;
    }
    image.save(filePath);
}

void MainWindow::on_actionLine_triggered(){
    currentMode = Line;
}

void MainWindow::on_actionRectangle_triggered(){
    currentMode = Rectangle;
}

void MainWindow::on_actionElipse_triggered(){
    currentMode = Elipse;
}

void MainWindow::on_actionPoint_triggered(){
    currentMode = Point;
}

void MainWindow::on_actionRoundedRect_triggered(){
    currentMode = RoundedRect;
}
