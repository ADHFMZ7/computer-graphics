#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <thread>
#include <chrono>

#include <GLUT/glut.h>
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>


#define ColoredVertex(c,v) do{glColor3fv(c);glVertex3fv(v);}while(0)
#define WIDTH 400
#define HEIGHT 400

GLfloat angle = 0.0f;

float square_root(float x) { return (float) sqrt(x); }

void display_octa(void) {
  static int list = 0;
  if (list == 0) {
    // If the display list does not exist, create


GLfloat
    PointA[] = { 0.0f, 0.0f, 1.0f },
    PointB[] = { 1.0f, 0.0f, 0.0f },
    PointC[] = { 0.0f, 1.0f, 0.0f },
    PointD[] = { -1.0f, 0.0f, 0.0f },
    PointE[] = { 0.0f, -1.0f, 0.0f },
    PointF[] = { 0.0f, 0.0f, -1.0f };

  GLfloat
      Color[] = { 1.0f, 1.0f, 1.0f}; // White color for the wireframe

  list = glGenLists(1);
  glNewList(list, GL_COMPILE);
  glBegin(GL_LINES);
  ColoredVertex(Color, PointA);  ColoredVertex(Color, PointB);
  ColoredVertex(Color, PointA);  ColoredVertex(Color, PointC);
  ColoredVertex(Color, PointA);  ColoredVertex(Color, PointD);
  ColoredVertex(Color, PointA);  ColoredVertex(Color, PointE);
  ColoredVertex(Color, PointF);  ColoredVertex(Color, PointB);
  ColoredVertex(Color, PointF);  ColoredVertex(Color, PointC);
  ColoredVertex(Color, PointF);  ColoredVertex(Color, PointD);
  ColoredVertex(Color, PointF);  ColoredVertex(Color, PointE);
  ColoredVertex(Color, PointB);  ColoredVertex(Color, PointC);
  ColoredVertex(Color, PointC);  ColoredVertex(Color, PointD);
  ColoredVertex(Color, PointD);  ColoredVertex(Color, PointE);
  ColoredVertex(Color, PointE);  ColoredVertex(Color, PointB);
  glEnd();
  glEndList();
  glEnable(GL_DEPTH_TEST);
  }
  // A display list has been created, which will be called each time a regular tetrahedron is drawn
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glPushMatrix();  glRotatef(angle, 1, 0.5, 0);  glCallList(list);  glPopMatrix();  glutSwapBuffers();
}

void idle(void) {
  ++angle;
  if (angle >= 360.0f) { angle = 0.0f; }
  std::this_thread::sleep_for(std::chrono::milliseconds(20));
  display_octa();
}

void glut_octahedron(int argc, char* argv[]) {
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
  glutInitWindowPosition(200, 200);
  glutInitWindowSize(WIDTH, HEIGHT);
  glutCreateWindow("OpenGL Window");
  glutDisplayFunc(&display_octa);

  glutIdleFunc(&idle);
  glutMainLoop();
}

int main ( int argc, char *argv[] ) {
  std::cout << "Starting program\n";
	glut_octahedron(argc, argv);
  std::cout << "...program completed\n";
  return 0;
}
