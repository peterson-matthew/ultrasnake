// Main.cpp
// the main loop of the ultrasnake game

#include <GLTools.h>
#include <GLShaderManager.h>

#ifdef __APPLE__
#include <glut/glut.h>          // OS X version of GLUT
#else
#define FREEGLUT_STATIC
#include <GL/glut.h>            // Windows FreeGlut equivalent
#endif

GLBatch blockBatch;
GLShaderManager shaderManager;

void SetupRenderingContext(){
	glClearColor(0.0f,0.0f,0.0f,1.0f);		//background is black
	shaderManager.InitializeStockShaders();	//use stock shaders
}

void RenderScene(void){
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

	//Drawing functions go here

	glutSwapBuffers();
}

void SpecialKeys(int key){
	switch(key){
	case GLUT_KEY_UP:
		break;
	case GLUT_KEY_DOWN:
		break;
	case GLUT_KEY_LEFT:
		break;
	case GLUT_KEY_RIGHT:
		break;
	}
}

int main(int argc, char* argv[]){
	gltSetWorkingDirectory(argv[0]);

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH | GLUT_STENCIL);
	glutInitWindowSize(800, 400);
	glutCreateWindow("Ultrasnake");
	glutReshapeFunc(ChangeSize);
	glutTimerFunc()//every 20 miliseconds, advance the frame
	//in future versions, the game clock will change with difficulty level
	glutDisplayFunc(RenderScene);

	GLenum err = glewInit();
	if(GLEW_OK != err){
		fprintf(stderr, "GLEW Error: %s\n", glewGetErrorString(err));
		return 1;
	}

	SetupRenderingContext();
	glutMainLoop();
	return 0;
}
