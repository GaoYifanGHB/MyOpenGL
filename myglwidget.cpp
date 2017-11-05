#include "myglwidget.h"

MyGLWidget::MyGLWidget(QWidget *parent) :
    QGLWidget(parent)
{
}

void MyGLWidget::initializeGL()
{
    glClearColor(0.0,0.0,0.0,0.0);
    glShadeModel(GL_SMOOTH);
    glClearDepth(1.0);
    glEnable(GL_DEPTH_TEST);
}

void MyGLWidget::resizeGL(int w, int h)
{
    glViewport(0,0,(GLint)w,(GLint)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0,(GLfloat)w/(GLfloat)h,0.1,100.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void MyGLWidget::paintGL()
{
    glTranslatef();
}
