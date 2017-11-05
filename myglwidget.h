#ifndef MYGLWIDGET_H
#define MYGLWIDGET_H

#include <QGLWidget>
#include<iostream>
#include <QKeyEvent>
using namespace std;

class MyGLWidget : public QGLWidget
{
    Q_OBJECT
public:
    explicit MyGLWidget(QWidget *parent = 0);

protected:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();
    void keyPressEvent(QKeyEvent *event);
private:
    GLfloat translate,xRot,yRot,zRot;

signals:
    
public slots:
    
};

#endif // MYGLWIDGET_H
