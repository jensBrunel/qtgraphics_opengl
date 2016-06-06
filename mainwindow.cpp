#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGLWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_graphicsScene(0)
{
    ui->setupUi(this);
    ui->myGraphicsview->setViewport(new QGLWidget
                                    (QGLFormat(QGL::SampleBuffers)));
    ui->myGraphicsview->setViewportUpdateMode(
                QGraphicsView::FullViewportUpdate);
    m_graphicsScene = new myGraphicsscene(this);
    ui->myGraphicsview->setScene(m_graphicsScene);

    ui->myGraphicsview->scene()->setSceneRect(ui->myGraphicsview->rect());
}

MainWindow::~MainWindow()
{
    delete ui;
}
