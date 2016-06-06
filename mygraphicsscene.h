#ifndef MYGRAPHICSSCENE_H
#define MYGRAPHICSSCENE_H

#include <QGraphicsScene>
#include <QWidget>
#include <QPainter>
#include <QRectF>

class myGraphicsscene : public QGraphicsScene
{
    Q_OBJECT
public:
    myGraphicsscene(QWidget* parent = 0);
    virtual ~myGraphicsscene();
protected:
    void drawBackground(QPainter *painter,
                                         const QRectF &);
};

#endif // MYGRAPHICSSCENE_H
