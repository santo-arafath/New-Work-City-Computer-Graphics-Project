#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include<windows.h>
#include<mmsystem.h>

using namespace std;

float _run = 0.0;
float _run1 = 0.0;
float _run2 = 0.0;
float _run3 = 0.0;
float _rain = 0.0;
float _nt = 0.0;
float _ang_tri = 0.0;
//char text[] = "SCHOOL";


bool onOff;
bool frd = false;
bool bck = false;

bool rainday = false;
bool night = false;


//float _angle = 0.0;
//float _cameraAngle = 0.0;
//float _run = 0.0;





void init(){

	glClearColor(0.0,0.5,0.8,1.0);
	glColor3f(0.0,0.0,0.5);
	glPointSize(10.0);
	gluOrtho2D(0.0,1900.0,0.0,1050.0);

}





                          ///--------------------Night---------------------///
                          ///--------------------Night---------------------///
                          ///--------------------Night---------------------///
                          ///--------------------Night---------------------///
                          ///--------------------Night---------------------///
                          ///--------------------Night---------------------///
                          ///--------------------Night---------------------///
                          ///--------------------Night---------------------///



 void Night(){



    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
	glColor3ub(3, 47, 75);
	glVertex2i(0,0);        ///SKY
	glVertex2i(1900,0);
	glVertex2i(1900,1050);
	glVertex2i(0,1050);
	glEnd();

	glPushMatrix();
   glTranslatef(200,900,0);

    glBegin(GL_POLYGON);

    glColor3ub(217, 204, 179);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///  moon
		float r=70;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


	glBegin(GL_POLYGON);
	glColor3ub(65, 129, 174);

    glVertex2i(0,0);
	glVertex2i(1900,0);
	glVertex2i(1900,220);     ///RIVER
	glVertex2i(1650,220);
	glVertex2i(1200,170);
	glVertex2i(750,200);
	glVertex2i(500,220);
	glVertex2i(0,220);

	glEnd();


	glBegin(GL_POLYGON);
	glColor3ub(85, 149, 184);


	glVertex2i(550,0);     ///RIVER
	glVertex2i(1900,0);
	glVertex2i(1900,220);
	glVertex2i(1650,220);
	glVertex2i(1200,170);
	glVertex2i(1000,100);

	//glVertex2i(0,220);

	glEnd();









///back building ----------------------------------------------------------start

glPushMatrix();
glScalef(0.4,0.4,0);
glTranslatef(420,380,0);

glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);


    glVertex2i(380,230);
    glVertex2i(550,230);     ///L2 2
    glVertex2i(550,450);
    glVertex2i(500,450);
    glVertex2i(500,700);
    glVertex2i(400,700);
    glVertex2i(400,450);
    glVertex2i(380,450);
    glVertex2i(380,450);



    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);


    glVertex2i(260,230);
    glVertex2i(380,230);
    glVertex2i(380,450);
    glVertex2i(360,450);
    glVertex2i(360,750);
    glVertex2i(260,750);



    glEnd();



   glPopMatrix();

///back building ----------------------------------------------------------end

///back building ----------------------------------------------------------start

glPushMatrix();
glScalef(0.4,0.4,0);
glTranslatef(250,380,0);

glBegin(GL_POLYGON);
    glColor3ub(83, 151, 169);


    glVertex2i(380,230);
    glVertex2i(550,230);     ///L2 2
    glVertex2i(550,450);
    glVertex2i(500,450);
    glVertex2i(500,700);
    glVertex2i(400,700);
    glVertex2i(400,450);
    glVertex2i(380,450);
    glVertex2i(380,450);



    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(83, 151, 169);


    glVertex2i(260,230);
    glVertex2i(380,230);
    glVertex2i(380,450);
    glVertex2i(360,450);
    glVertex2i(360,750);
    glVertex2i(260,750);



    glEnd();



   glPopMatrix();

///back building ----------------------------------------------------------end

///back building ----------------------------------------------------------start

glPushMatrix();
glScalef(0.4,0.4,0);
glTranslatef(-150,380,0);

glBegin(GL_POLYGON);
    glColor3ub(83, 151, 169);


    glVertex2i(380,230);
    glVertex2i(550,230);     ///L2 2
    glVertex2i(550,450);
    glVertex2i(500,450);
    glVertex2i(500,700);
    glVertex2i(400,700);
    glVertex2i(400,450);
    glVertex2i(380,450);
    glVertex2i(380,450);



    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(83, 151, 169);


    glVertex2i(260,230);
    glVertex2i(380,230);
    glVertex2i(380,450);
    glVertex2i(360,450);
    glVertex2i(360,750);
    glVertex2i(260,750);



    glEnd();



   glPopMatrix();

///back building ----------------------------------------------------------end

///back building ----------------------------------------------------------start

glPushMatrix();
glScalef(0.4,0.4,0);
glTranslatef(420,380,0);

glBegin(GL_POLYGON);
    glColor3ub(83, 151, 169);


    glVertex2i(380,230);
    glVertex2i(550,230);     ///L2 2
    glVertex2i(550,450);
    glVertex2i(500,450);
    glVertex2i(500,700);
    glVertex2i(400,700);
    glVertex2i(400,450);
    glVertex2i(380,450);
    glVertex2i(380,450);



    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(83, 151, 169);


    glVertex2i(260,230);
    glVertex2i(380,230);
    glVertex2i(380,450);
    glVertex2i(360,450);
    glVertex2i(360,750);
    glVertex2i(260,750);



    glEnd();



   glPopMatrix();

///back building ----------------------------------------------------------end





       ///              small house back step 3


       glPushMatrix();
       glScalef(1.2,1.2,0);
       glTranslatef(900,-50,0);








       glPushMatrix();

 glScalef(0.2,0.2,0);
 glTranslatef(-700,1000,0);





 ///BUILDING BACK BLUE 3  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






    glVertex2i(720,650);
    glVertex2i(690,630);
    glVertex2i(690,230);    ///BACK
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(720,870);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(60, 187, 219);






                             ///SAD
    glVertex2i(850,230);
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(800,870);


  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP1

    glVertex2i(755,885);
    glVertex2i(755,870);
    glVertex2i(820,870);
    glVertex2i(820,885);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP2

    glVertex2i(770,900);
    glVertex2i(770,885);

    glVertex2i(805,885);
    glVertex2i(805,900);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           /// PIN

    glVertex2i(780,900);
    glVertex2i(795,900);
    glVertex2i(787.5,960);


  glEnd();








  ///BUILDING BACK  4  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






                             ///BACK


    glVertex2i(890,550);
    glVertex2i(880,550);
    glVertex2i(880,230);
    glVertex2i(980,230);
    glVertex2i(980,550);
    glVertex2i(970,550);
    glVertex2i(970,600);
    glVertex2i(970,900);

    glVertex2i(890,800);
    //glVertex2i(890,600);



  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(780,610);
    glVertex2i(790,610);
    glVertex2i(790,630);
    glVertex2i(780,630);
    glVertex2i(780,610);




  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(715,610);
    glVertex2i(725,610);
    glVertex2i(725,630);
    glVertex2i(715,630);
    //glVertex2i(780,610);




  glEnd();
 glPopMatrix();


                                           ///SMALL HOUSE BACK END



                             glPushMatrix();
                             glScalef(0.3,0.3,0);
                            glTranslatef(0,600,0);

       glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(220,700);
    glVertex2i(220,600);
    glVertex2i(200,600);
    glVertex2i(200,220);
    glVertex2i(300,220);
    glVertex2i(300,600);
    glVertex2i(280,600);
    glVertex2i(280,700);


    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(320,700);
    glVertex2i(320,600);
    glVertex2i(310,600);
    glVertex2i(310,220);
    glVertex2i(380,220);
    glVertex2i(380,600);



    glEnd();


glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);





    glVertex2i(410,600);
    glVertex2i(410,220);
    glVertex2i(480,220);
    glVertex2i(480,600);
    glVertex2i(445,800);



    glEnd();

    glPopMatrix();



       glPopMatrix();






       ///sma;ll house back strep 3 end







       ///              small house back step 4


       glPushMatrix();
       glScalef(1.3,1.3,0);
       glTranslatef(980,-50,0);




       glPushMatrix();

 glScalef(0.2,0.2,0);
 glTranslatef(-700,1000,0);


 ///BUILDING BACK BLUE 3  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






    glVertex2i(720,650);
    glVertex2i(690,630);
    glVertex2i(690,230);    ///BACK
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(720,870);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(60, 187, 219);






                             ///SAD
    glVertex2i(850,230);
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(800,870);


  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP1

    glVertex2i(755,885);
    glVertex2i(755,870);
    glVertex2i(820,870);
    glVertex2i(820,885);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP2

    glVertex2i(770,900);
    glVertex2i(770,885);

    glVertex2i(805,885);
    glVertex2i(805,900);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           /// PIN

    glVertex2i(780,900);
    glVertex2i(795,900);
    glVertex2i(787.5,960);


  glEnd();








  ///BUILDING BACK  4  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






                             ///BACK


    glVertex2i(890,550);
    glVertex2i(880,550);
    glVertex2i(880,230);
    glVertex2i(980,230);
    glVertex2i(980,550);
    glVertex2i(970,550);
    glVertex2i(970,600);
    glVertex2i(970,900);

    glVertex2i(890,800);
    //glVertex2i(890,600);



  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(780,610);
    glVertex2i(790,610);
    glVertex2i(790,630);
    glVertex2i(780,630);
    glVertex2i(780,610);




  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(715,610);
    glVertex2i(725,610);
    glVertex2i(725,630);
    glVertex2i(715,630);
    //glVertex2i(780,610);




  glEnd();
 glPopMatrix();


                                           ///SMALL HOUSE BACK END



                             glPushMatrix();
                             glScalef(0.3,0.3,0);
                            glTranslatef(0,600,0);

       glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(220,700);
    glVertex2i(220,600);
    glVertex2i(200,600);
    glVertex2i(200,220);
    glVertex2i(300,220);
    glVertex2i(300,600);
    glVertex2i(280,600);
    glVertex2i(280,700);


    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(320,700);
    glVertex2i(320,600);
    glVertex2i(310,600);
    glVertex2i(310,220);
    glVertex2i(380,220);
    glVertex2i(380,600);



    glEnd();


glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);





    glVertex2i(410,600);
    glVertex2i(410,220);
    glVertex2i(480,220);
    glVertex2i(480,600);
    glVertex2i(445,800);



    glEnd();

    glPopMatrix();



       glPopMatrix();






       ///sma;ll house back strep 4 end



       ///sma;ll house back strep  5 st





       glPushMatrix();
       glScalef(1.3,1.2,0);
       glTranslatef(1150,-30,0);




       glPushMatrix();

 glScalef(0.2,0.2,0);
 glTranslatef(-700,1000,0);


 ///BUILDING BACK BLUE 3  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






    glVertex2i(720,650);
    glVertex2i(690,630);
    glVertex2i(690,230);    ///BACK
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(720,870);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(60, 187, 219);






                             ///SAD
    glVertex2i(850,230);
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(800,870);


  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP1

    glVertex2i(755,885);
    glVertex2i(755,870);
    glVertex2i(820,870);
    glVertex2i(820,885);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP2

    glVertex2i(770,900);
    glVertex2i(770,885);

    glVertex2i(805,885);
    glVertex2i(805,900);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           /// PIN

    glVertex2i(780,900);
    glVertex2i(795,900);
    glVertex2i(787.5,960);


  glEnd();








  ///BUILDING BACK  4  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






                             ///BACK


    glVertex2i(890,550);
    glVertex2i(880,550);
    glVertex2i(880,230);
    glVertex2i(980,230);
    glVertex2i(980,550);
    glVertex2i(970,550);
    glVertex2i(970,600);
    glVertex2i(970,900);

    glVertex2i(890,800);
    //glVertex2i(890,600);



  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(780,610);
    glVertex2i(790,610);
    glVertex2i(790,630);
    glVertex2i(780,630);
    glVertex2i(780,610);




  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(715,610);
    glVertex2i(725,610);
    glVertex2i(725,630);
    glVertex2i(715,630);
    //glVertex2i(780,610);




  glEnd();
 glPopMatrix();


                                           ///SMALL HOUSE BACK END



                             glPushMatrix();
                             glScalef(0.3,0.3,0);
                            glTranslatef(0,600,0);

       glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(220,700);
    glVertex2i(220,600);
    glVertex2i(200,600);
    glVertex2i(200,220);
    glVertex2i(300,220);
    glVertex2i(300,600);
    glVertex2i(280,600);
    glVertex2i(280,700);


    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(320,700);
    glVertex2i(320,600);
    glVertex2i(310,600);
    glVertex2i(310,220);
    glVertex2i(380,220);
    glVertex2i(380,600);



    glEnd();


glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);





    glVertex2i(410,600);
    glVertex2i(410,220);
    glVertex2i(480,220);
    glVertex2i(480,600);
    glVertex2i(445,800);



    glEnd();

    glPopMatrix();



       glPopMatrix();






       ///sma;ll house back strep 5 end




        ///sma;ll house back strep  6 st





       glPushMatrix();
       glScalef(1.3,1.2,0);
       glTranslatef(1300,20,0);




       glPushMatrix();

 glScalef(0.2,0.2,0);
 glTranslatef(-700,1000,0);


 ///BUILDING BACK BLUE 3  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






    glVertex2i(720,650);
    glVertex2i(690,630);
    glVertex2i(690,230);    ///BACK
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(720,870);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(60, 187, 219);






                             ///SAD
    glVertex2i(850,230);
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(800,870);


  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP1

    glVertex2i(755,885);
    glVertex2i(755,870);
    glVertex2i(820,870);
    glVertex2i(820,885);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP2

    glVertex2i(770,900);
    glVertex2i(770,885);

    glVertex2i(805,885);
    glVertex2i(805,900);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           /// PIN

    glVertex2i(780,900);
    glVertex2i(795,900);
    glVertex2i(787.5,960);


  glEnd();








  ///BUILDING BACK  4  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






                             ///BACK


    glVertex2i(890,550);
    glVertex2i(880,550);
    glVertex2i(880,230);
    glVertex2i(980,230);
    glVertex2i(980,550);
    glVertex2i(970,550);
    glVertex2i(970,600);
    glVertex2i(970,900);

    glVertex2i(890,800);
    //glVertex2i(890,600);



  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(780,610);
    glVertex2i(790,610);
    glVertex2i(790,630);
    glVertex2i(780,630);
    glVertex2i(780,610);




  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(715,610);
    glVertex2i(725,610);
    glVertex2i(725,630);
    glVertex2i(715,630);
    //glVertex2i(780,610);




  glEnd();
 glPopMatrix();


                                           ///SMALL HOUSE BACK END



                             glPushMatrix();
                             glScalef(0.3,0.3,0);
                            glTranslatef(0,600,0);

       glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(220,700);
    glVertex2i(220,600);
    glVertex2i(200,600);
    glVertex2i(200,220);
    glVertex2i(300,220);
    glVertex2i(300,600);
    glVertex2i(280,600);
    glVertex2i(280,700);


    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(320,700);
    glVertex2i(320,600);
    glVertex2i(310,600);
    glVertex2i(310,220);
    glVertex2i(380,220);
    glVertex2i(380,600);



    glEnd();


glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);





    glVertex2i(410,600);
    glVertex2i(410,220);
    glVertex2i(480,220);
    glVertex2i(480,600);
    glVertex2i(445,800);



    glEnd();

    glPopMatrix();



       glPopMatrix();






       ///sma;ll house back strep 6 end







	glBegin(GL_POLYGON);
    glColor3ub(71, 153, 203);




                         ///sad   right
    glVertex2i(1110,230);
    glVertex2i(1910,230);
    glVertex2i(1910,440);
    //glVertex2i(1110,440);




    glEnd();







	glBegin(GL_POLYGON);
	glColor3ub(239, 180, 90);



	     ///GRPUND




	glVertex2i(0,220);
	glVertex2i(500,220);
	glVertex2i(750,200);
	glVertex2i(1200,170);
	glVertex2i(1650,220);
	glVertex2i(1900,220);
	glVertex2i(1900,250);
	glVertex2i(1750,240);
	glVertex2i(1100,230);
	glVertex2i(700,230);
	glVertex2i(500,240);
	glVertex2i(400,245);
	glVertex2i(300,245);
	glVertex2i(200,250);
	glVertex2i(0,250);

	glEnd();






                             /// background building



                             glPushMatrix();
                             glScalef(0.3,0.3,0);
                            glTranslatef(0,600,0);

       glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(220,700);
    glVertex2i(220,600);
    glVertex2i(200,600);
    glVertex2i(200,220);
    glVertex2i(300,220);
    glVertex2i(300,600);
    glVertex2i(280,600);
    glVertex2i(280,700);


    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(320,700);
    glVertex2i(320,600);
    glVertex2i(310,600);
    glVertex2i(310,220);
    glVertex2i(380,220);
    glVertex2i(380,600);



    glEnd();


glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);





    glVertex2i(410,600);
    glVertex2i(410,220);
    glVertex2i(480,220);
    glVertex2i(480,600);
    glVertex2i(445,800);



    glEnd();

    glPopMatrix();

       ///end;;;
















                               ///=== CLOUD START ====///





                     ///CLOUD 1 START run1

    glPushMatrix();
    glTranslatef(_run, 0.0, 0.0);

glPushMatrix();
glTranslatef(520,1000,0);
     glBegin(GL_POLYGON);

    glColor3f(0.15, 0.35, 0.47);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// T1
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();

                   ///CLOUD 1 START

   glPushMatrix();
glTranslatef(460,1000,0);
     glBegin(GL_POLYGON);

    glColor3f(0.15, 0.35, 0.47);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();

      ///CLOUD 1 START

   glPushMatrix();
glTranslatef(440,960,0);
     glBegin(GL_POLYGON);

    glColor3f(0.15, 0.35, 0.47);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();


      ///CLOUD 1 START

   glPushMatrix();
glTranslatef(480,960,0);
     glBegin(GL_POLYGON);

    glColor3f(0.15, 0.35, 0.47);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();

      ///CLOUD 1 START

   glPushMatrix();
glTranslatef(550,960,0);
     glBegin(GL_POLYGON);

    glColor3f(0.15, 0.35, 0.47);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();
  glPopMatrix();

                         ///COUD 1 END

                         ///---------///
                         ///COUD 2 START

    glPushMatrix();
    glTranslatef(_run1, 0.0, 0.0);


    glPushMatrix();
    glScalef(0.8,0.8,0);
    glTranslatef(520,-40,0);



                     ///CLOUD 2 START

glPushMatrix();
glTranslatef(520,1000,0);
     glBegin(GL_POLYGON);

    glColor3f(0.15, 0.35, 0.47);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// T1
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();

                   ///CLOUD 2 START

   glPushMatrix();
glTranslatef(460,1000,0);
     glBegin(GL_POLYGON);

    glColor3f(0.15, 0.35, 0.47);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();

      ///CLOUD 2 START

   glPushMatrix();
glTranslatef(440,960,0);
     glBegin(GL_POLYGON);

    glColor3f(0.15, 0.35, 0.47);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();


      ///CLOUD 2 START

   glPushMatrix();
glTranslatef(480,960,0);
     glBegin(GL_POLYGON);

    glColor3f(0.15, 0.35, 0.47);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();

      ///CLOUD 2 START

   glPushMatrix();
glTranslatef(550,960,0);
     glBegin(GL_POLYGON);

    glColor3f(0.15, 0.35, 0.47);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();






    glPopMatrix();
    glPopMatrix();
                        ///COUD 2 END




    ///3 start



 glPushMatrix();
    glTranslatef(_run2, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.8,0.8,0);
    glTranslatef(1100,-200,0);



                     ///CLOUD 3 START

glPushMatrix();
glTranslatef(520,1000,0);
     glBegin(GL_POLYGON);

    glColor3f(0.15, 0.35, 0.47);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// T1
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();

                   ///CLOUD 2 START

   glPushMatrix();
glTranslatef(460,1000,0);
     glBegin(GL_POLYGON);

    glColor3f(0.15, 0.35, 0.47);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();

      ///CLOUD 2 START

   glPushMatrix();
glTranslatef(440,960,0);
     glBegin(GL_POLYGON);

    glColor3f(0.15, 0.35, 0.470);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();


      ///CLOUD 2 START

   glPushMatrix();
glTranslatef(480,960,0);
     glBegin(GL_POLYGON);

    glColor3f(0.15, 0.35, 0.47);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();

      ///CLOUD 2 START

   glPushMatrix();
glTranslatef(550,960,0);
     glBegin(GL_POLYGON);

    glColor3f(0.15, 0.35, 0.47);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();






    glPopMatrix();
    glPopMatrix();
                        ///COUD 3 END




                        ///444







 glPushMatrix();
    glTranslatef(_run3, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.8,0.8,0);
    glTranslatef(1300,200,0);



                     ///CLOUD 4 START

glPushMatrix();
glTranslatef(520,1000,0);
     glBegin(GL_POLYGON);

    glColor3f(0.15, 0.35, 0.47);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// T1
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();

                   ///CLOUD 4 START

   glPushMatrix();
glTranslatef(460,1000,0);
     glBegin(GL_POLYGON);

    glColor3f(0.15, 0.35, 0.47);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();

      ///CLOUD 4 START

   glPushMatrix();
glTranslatef(440,960,0);
     glBegin(GL_POLYGON);

    glColor3f(0.15, 0.35, 0.470);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();


      ///CLOUD 4 START

   glPushMatrix();
glTranslatef(480,960,0);
     glBegin(GL_POLYGON);

    glColor3f(0.15, 0.35, 0.47);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();

      ///CLOUD 4 START

   glPushMatrix();
glTranslatef(550,960,0);
     glBegin(GL_POLYGON);

    glColor3f(0.15, 0.35, 0.47);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();






    glPopMatrix();
    glPopMatrix();
                        ///COUD 4 END




       ///all cloud end





    glPushMatrix();
glTranslatef(535,650,0);
     glBegin(GL_POLYGON);

    glColor3ub(247, 247, 224);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();



	glBegin(GL_POLYGON);
	glColor3ub(200, 230, 240);

    glVertex2i(490,230);
    glVertex2i(580,230);
    glVertex2i(580,640);   ///B1 BACK
    glVertex2i(560,660);
    glVertex2i(510,660);
    glVertex2i(490,640);

	glEnd();



	glBegin(GL_POLYGON);
	glColor3ub(132, 96, 48);


    glVertex2i(580,300);
    glVertex2i(580,638);   ///B1 RIGHT
    glVertex2i(550,658);
    glVertex2i(550,400);
    glVertex2i(580,300);


	glEnd();


	 glBegin(GL_POLYGON);
	glColor3ub(208, 151, 73);


    glVertex2i(520,230);
    glVertex2i(550,230);   ///B1 MID
    glVertex2i(550,658);
    glVertex2i(520,658);
    glVertex2i(520,230);


	glEnd();


	glBegin(GL_POLYGON);
	glColor3ub(132, 96, 48);


    glVertex2i(490,300);
    glVertex2i(520,400);   ///B1 LEFT
    glVertex2i(520,658);
    glVertex2i(490,638);
    glVertex2i(490,300);


	glEnd();



	glBegin(GL_POLYGON);
	glColor3ub(131, 95, 47);


    glVertex2i(585,230);
    glVertex2i(690,230);   ///B2 BOTT
    glVertex2i(690,780);
    glVertex2i(585,780);
    glVertex2i(585,230);



	glEnd();


	glBegin(GL_POLYGON);
	glColor3ub(240, 180, 89);



    glVertex2i(688,230);   ///B2 RIGHT
    glVertex2i(688,778);
    glVertex2i(640,778);
    //glVertex2i(640,780);




	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(248, 246, 223);



    glVertex2i(587,230);   ///B2 LEFT
    glVertex2i(640,778);
    glVertex2i(587,778);

    //glVertex2i(640,780);




	glEnd();




	glBegin(GL_POLYGON);
	glColor3ub(240, 180, 89);



    glVertex2i(590,780);   ///B2 TOP
    glVertex2i(685,780);
    glVertex2i(685,800);
    glVertex2i(590,800);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(240, 180, 89);



    glVertex2i(635,800);   ///B2 TOP2
    glVertex2i(650,800);
    glVertex2i(643,900);


  glEnd();



  ///building 2 design


  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);



    glVertex2i(590,350);   ///B2 TOP2
    glVertex2i(595,350);
    glVertex2i(595,750);
    glVertex2i(590,750);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);



    glVertex2i(610,550);   ///B2 TOP2
    glVertex2i(615,550);
    glVertex2i(615,750);
    glVertex2i(610,750);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);



    glVertex2i(665,550);   ///B2 TOP2
    glVertex2i(670,550);
    glVertex2i(670,750);
    glVertex2i(665,750);


  glEnd();




  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);



    glVertex2i(680,350);   ///B2 TOP2
    glVertex2i(685,350);
    glVertex2i(685,750);
    glVertex2i(680,750);


  glEnd();





  ///BR RRRR





  glBegin(GL_POLYGON);
	glColor3ub(209, 209, 199);



    glVertex2i(1400,100);      ///BR  BR1
    glVertex2i(1570,100);
    glVertex2i(1555,160);
    glVertex2i(1415,160);



  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(149, 93, 60);



          ///BR  BR1
    glVertex2i(1415,160);
    glVertex2i(1555,160);
    glVertex2i(1555,170);
    glVertex2i(1415,170);




  glEnd();





  ///seconf pel 2


   glPushMatrix();
  glScalef(0.5, 0.5, 0);
  glTranslatef(900, 200, 0);

     glBegin(GL_POLYGON);
	glColor3ub(166, 37, 40);



                           ///BR  pr12 fs
    glVertex2i(1540,170);
    glVertex2i(1550,170);
    glVertex2i(1550,530);
    glVertex2i(1540,530);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);



                         ///BR  pr12 f2
    glVertex2i(1520,170);
    glVertex2i(1540,170);
    glVertex2i(1540,630);
    glVertex2i(1520,630);





  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);



                               ///BR  pr12 f3
    glVertex2i(1525,630);
    glVertex2i(1535,630);
    glVertex2i(1535,710);
    glVertex2i(1525,710);

  glEnd();


  ///end


  glPopMatrix();







  glBegin(GL_POLYGON);
	glColor3ub(166, 37, 40);



                           ///BR  pr12 fs
    glVertex2i(1540,170);
    glVertex2i(1550,170);
    glVertex2i(1550,530);
    glVertex2i(1540,530);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);



                         ///BR  pr12 f2
    glVertex2i(1520,170);
    glVertex2i(1540,170);
    glVertex2i(1540,630);
    glVertex2i(1520,630);





  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);



                               ///BR  pr12 f3
    glVertex2i(1525,630);
    glVertex2i(1535,630);
    glVertex2i(1535,710);
    glVertex2i(1525,710);

  glEnd();








  glBegin(GL_POLYGON);
	glColor3ub(110, 0, 1);



          ///BR  MBOT
    glVertex2i(1110,230);
    glVertex2i(1900,380);
    glVertex2i(1900,430);
    glVertex2i(1110,240);





  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(129, 29, 29);



                         ///BR  MTOP
    glVertex2i(1110,240);
    glVertex2i(1900,430);
    glVertex2i(1900,480);
    glVertex2i(1110,245);





  glEnd();

///PELE 1 START




  glBegin(GL_POLYGON);
	glColor3ub(166, 37, 40);



                           ///BR  pr11 fs
    glVertex2i(1425,170);
    glVertex2i(1435,170);
    glVertex2i(1435,530);
    glVertex2i(1425,530);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);



                         ///BR  pr11 f2
    glVertex2i(1435,170);
    glVertex2i(1455,170);
    glVertex2i(1455,630);
    glVertex2i(1435,630);





  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);



                               ///BR  pr11 f3
    glVertex2i(1440,630);
    glVertex2i(1450,630);
    glVertex2i(1450,710);
    glVertex2i(1440,710);

  glEnd();



  /// BR2

                ///TOP-1 --BR1


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);





    glVertex2i(1450,690);
    glVertex2i(1450,670);
    glVertex2i(1530,670);
    glVertex2i(1530,690);

    //glVertex2i(1525,630);
    //glVertex2i(1535,630);
   // glVertex2i(1535,710);
   // glVertex2i(1525,710);




  glEnd();


   glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);





    glVertex2i(1450,600);
    glVertex2i(1450,575);
    glVertex2i(1485,580);
    glVertex2i(1530,575);
    glVertex2i(1530,600);
    glVertex2i(1485,595);
    glVertex2i(1450,600);





  glEnd();

  ///


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);





    glVertex2i(1450,520);
    glVertex2i(1450,490);
    glVertex2i(1485,495);
    glVertex2i(1530,490);
    glVertex2i(1530,520);
    glVertex2i(1485,515);
    glVertex2i(1450,520);





  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);





    glVertex2i(1450,440);
    glVertex2i(1450,400);
    glVertex2i(1485,405);
    glVertex2i(1530,400);
    glVertex2i(1530,440);
    glVertex2i(1485,435);
    glVertex2i(1450,440);





  glEnd();


    ///END P1





    ///start p2


    glPushMatrix();
  glScalef(0.5, 0.5, 0);
  glTranslatef(900, 200, 0);

  glBegin(GL_POLYGON);
	glColor3ub(209, 209, 199);



    glVertex2i(1400,100);      ///BR  BR1
    glVertex2i(1570,100);
    glVertex2i(1555,160);
    glVertex2i(1415,160);



  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(149, 93, 60);



          ///BR  BR1
    glVertex2i(1415,160);
    glVertex2i(1555,160);
    glVertex2i(1555,170);
    glVertex2i(1415,170);




  glEnd();




    glBegin(GL_POLYGON);
	glColor3ub(166, 37, 40);



                           ///BR  pr11 fs
    glVertex2i(1425,170);
    glVertex2i(1435,170);
    glVertex2i(1435,530);
    glVertex2i(1425,530);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);



                         ///BR  pr11 f2
    glVertex2i(1435,170);
    glVertex2i(1455,170);
    glVertex2i(1455,630);
    glVertex2i(1435,630);





  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);



                               ///BR  pr11 f3
    glVertex2i(1440,630);
    glVertex2i(1450,630);
    glVertex2i(1450,710);
    glVertex2i(1440,710);

  glEnd();



  /// BR2



                            ///TOP-1 --BR1


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);





    glVertex2i(1450,690);
    glVertex2i(1450,670);
    glVertex2i(1530,670);
    glVertex2i(1530,690);

    //glVertex2i(1525,630);
    //glVertex2i(1535,630);
   // glVertex2i(1535,710);
   // glVertex2i(1525,710);




  glEnd();


   glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);





    glVertex2i(1450,600);
    glVertex2i(1450,575);
    glVertex2i(1485,580);
    glVertex2i(1530,575);
    glVertex2i(1530,600);
    glVertex2i(1485,595);
    glVertex2i(1450,600);





  glEnd();

  ///


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);





    glVertex2i(1450,520);
    glVertex2i(1450,490);
    glVertex2i(1485,495);
    glVertex2i(1530,490);
    glVertex2i(1530,520);
    glVertex2i(1485,515);
    glVertex2i(1450,520);





  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);





    glVertex2i(1450,440);
    glVertex2i(1450,400);
    glVertex2i(1485,405);
    glVertex2i(1530,400);
    glVertex2i(1530,440);
    glVertex2i(1485,435);
    glVertex2i(1450,440);





  glEnd();
  glPopMatrix();

    ///END P





    ///rope p1




    glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);





    glVertex2i(1450,670);
    glVertex2i(1450,665);
    glVertex2i(1750,425);
    glVertex2i(1755,430);
    //glVertex2i(1530,440);
    //glVertex2i(1485,435);
    //glVertex2i(1450,440);





  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(128, 50, 29);





    glVertex2i(1755,430);
    glVertex2i(1750,425);
    glVertex2i(1950,700);
    glVertex2i(1950,705);

    //glVertex2i(1530,440);
    //glVertex2i(1485,435);
    //glVertex2i(1450,440);





  glEnd();


  ///rope2


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);





    glVertex2i(1520,680);
    glVertex2i(1515,675);
    glVertex2i(1850,445);
    glVertex2i(1855,450);
    //glVertex2i(1530,440);
    //glVertex2i(1485,435);
    //glVertex2i(1450,440);





  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);





    glVertex2i(1855,450);
    glVertex2i(1850,445);
    glVertex2i(1950,600);
    glVertex2i(1950,605);

    //glVertex2i(1530,440);
    //glVertex2i(1485,435);
    //glVertex2i(1450,440);





  glEnd();



  /// rope p1 left


  ///rope p1




    glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);




    glVertex2i(1300,295);
    glVertex2i(1305,290);
    glVertex2i(1450,665);
    glVertex2i(1450,670);

    //glVertex2i(1530,440);
    //glVertex2i(1485,435);
    //glVertex2i(1450,440);





  glEnd();

  ///rope p2




    glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);




    glVertex2i(1400,310);
    glVertex2i(1405,305);
    glVertex2i(1535,665);
    glVertex2i(1530,670);

    //glVertex2i(1530,440);
    //glVertex2i(1485,435);
    //glVertex2i(1450,440);





  glEnd();


   ///rope p1




    glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);


    glVertex2i(1180,435);
    glVertex2i(1180,430);
    glVertex2i(1300,290);
    glVertex2i(1300,295);




    //glVertex2i(1530,440);
    //glVertex2i(1485,435);
    //glVertex2i(1450,440);





  glEnd();

  ///rope p2




    glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);




    glVertex2i(1215,435);
    glVertex2i(1215,430);
    glVertex2i(1350,305);
    glVertex2i(1350,310);


    //glVertex2i(1530,440);
    //glVertex2i(1485,435);
    //glVertex2i(1450,440);





  glEnd();


   ///rope p1




    glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);



    glVertex2i(1185,430);
    glVertex2i(1180,435);
    glVertex2i(1130,245);
    glVertex2i(1125,250);




    //glVertex2i(1530,440);
    //glVertex2i(1485,435);
    //glVertex2i(1450,440);





  glEnd();

  ///rope p2




    glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);






    glVertex2i(1215,435);
    glVertex2i(1220,430);

    glVertex2i(1150,245);
    glVertex2i(1155,250);

    //glVertex2i(1530,440);
    //glVertex2i(1485,435);
    //glVertex2i(1450,440);





  glEnd();




  ///BUILDING BACK BLUE 3  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






    glVertex2i(720,650);
    glVertex2i(690,630);
    glVertex2i(690,230);    ///BACK
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(720,870);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(60, 187, 219);






                             ///SAD
    glVertex2i(850,230);
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(800,870);


  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP1

    glVertex2i(755,885);
    glVertex2i(755,870);
    glVertex2i(820,870);
    glVertex2i(820,885);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP2

    glVertex2i(770,900);
    glVertex2i(770,885);

    glVertex2i(805,885);
    glVertex2i(805,900);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           /// PIN

    glVertex2i(780,900);
    glVertex2i(795,900);
    glVertex2i(787.5,960);


  glEnd();








  ///BUILDING BACK  4  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






                             ///BACK


    glVertex2i(890,550);
    glVertex2i(880,550);
    glVertex2i(880,230);
    glVertex2i(980,230);
    glVertex2i(980,550);
    glVertex2i(970,550);
    glVertex2i(970,600);
    glVertex2i(970,900);

    glVertex2i(890,800);
    //glVertex2i(890,600);



  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(780,610);
    glVertex2i(790,610);
    glVertex2i(790,630);
    glVertex2i(780,630);
    glVertex2i(780,610);




  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(715,610);
    glVertex2i(725,610);
    glVertex2i(725,630);
    glVertex2i(715,630);
    //glVertex2i(780,610);




  glEnd();


                                            ///SMALL HOUSE BACK


 glPushMatrix();

 glScalef(0.2,0.2,0);
 glTranslatef(-700,1000,0);


 ///BUILDING BACK BLUE 3  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






    glVertex2i(720,650);
    glVertex2i(690,630);
    glVertex2i(690,230);    ///BACK
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(720,870);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(60, 187, 219);






                             ///SAD
    glVertex2i(850,230);
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(800,870);


  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP1

    glVertex2i(755,885);
    glVertex2i(755,870);
    glVertex2i(820,870);
    glVertex2i(820,885);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP2

    glVertex2i(770,900);
    glVertex2i(770,885);

    glVertex2i(805,885);
    glVertex2i(805,900);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           /// PIN

    glVertex2i(780,900);
    glVertex2i(795,900);
    glVertex2i(787.5,960);


  glEnd();








  ///BUILDING BACK  4  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






                             ///BACK


    glVertex2i(890,550);
    glVertex2i(880,550);
    glVertex2i(880,230);
    glVertex2i(980,230);
    glVertex2i(980,550);
    glVertex2i(970,550);
    glVertex2i(970,600);
    glVertex2i(970,900);

    glVertex2i(890,800);
    //glVertex2i(890,600);



  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(780,610);
    glVertex2i(790,610);
    glVertex2i(790,630);
    glVertex2i(780,630);
    glVertex2i(780,610);




  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(715,610);
    glVertex2i(725,610);
    glVertex2i(725,630);
    glVertex2i(715,630);
    //glVertex2i(780,610);




  glEnd();
 glPopMatrix();


                                           ///SMALL HOUSE BACK END












  ///BUILDING FONNT  3  START



  glBegin(GL_POLYGON);
	glColor3ub(179, 179, 179);

                           ///BACK


    glVertex2i(700,620);
    glVertex2i(700,220);
    glVertex2i(810,220);
    glVertex2i(810,560);
    glVertex2i(800,560);
    glVertex2i(800,620);




  glEnd();

   glBegin(GL_POLYGON);
	glColor3ub(94, 94, 94);

                           ///FONT Y





    glVertex2i(760,540);
    glVertex2i(760,220);
    glVertex2i(770,220);
    glVertex2i(770,540);
    glVertex2i(810,540);
    glVertex2i(810,550);
    glVertex2i(770,550);
    glVertex2i(700,580);
    glVertex2i(700,580);
    glVertex2i(700,570);




  glEnd();





  ///BUILDING FONNT  5  START



  glBegin(GL_POLYGON);
	glColor3ub(70, 49, 28);

                           ///BACK


    glVertex2i(950,410);
    glVertex2i(950,300);
    glVertex2i(950,230);
    glVertex2i(1020,230);
    glVertex2i(1020,270);
    glVertex2i(1050,270);
    glVertex2i(1050,230);
    glVertex2i(1110,230);
    glVertex2i(1110,300);
    glVertex2i(1110,410);




  glEnd();



   glBegin(GL_POLYGON);
	glColor3ub(239, 188, 113);

                           ///BACK


    glVertex2i(1020,275);
    glVertex2i(1025,275);
    glVertex2i(1025,430);
    glVertex2i(1020,430);





  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(239, 188, 113);

                           ///BACK


    glVertex2i(1040,275);
    glVertex2i(1045,275);
    glVertex2i(1045,430);
    glVertex2i(1040,430);





  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(239, 188, 113);

                           ///BACK


    glVertex2i(1030,275);
    glVertex2i(1035,275);
    glVertex2i(1035,430);
    glVertex2i(1030,430);






  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///BACK


    glVertex2i(1070,250);
    glVertex2i(1080,250);
    glVertex2i(1080,400);
    glVertex2i(1070,400);






  glEnd();


   glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///BACK


    glVertex2i(980,250);
    glVertex2i(990,250);
    glVertex2i(990,400);
    glVertex2i(980,400);






  glEnd();









  glBegin(GL_POLYGON);
	glColor3ub(238, 178, 90);

                           ///BACK



    glVertex2i(1020,230);
    glVertex2i(1020,270);
    glVertex2i(1050,270);
    glVertex2i(1050,230);





  glEnd();




  glBegin(GL_POLYGON);
	glColor3ub(91, 64, 32);

                           ///BACK


    glVertex2i(960,430);
    glVertex2i(970,410);
    glVertex2i(1090,410);
    glVertex2i(1100,430);




  glEnd();



   glBegin(GL_POLYGON);
	glColor3ub(236, 179, 90);

                           ///TOP


    glVertex2i(990,640);
    glVertex2i(990,430);
    glVertex2i(1070,430);
    glVertex2i(1070,640);




  glEnd();


   glBegin(GL_POLYGON);
	glColor3ub(69, 49, 28);

                           ///TOP


    glVertex2i(1000,700);
    glVertex2i(1000,640);

    glVertex2i(1060,640);
    glVertex2i(1060,700);




  glEnd();



     glBegin(GL_POLYGON);
	glColor3ub(239, 192, 118);

                           ///TOP


    glVertex2i(1020,750);
    glVertex2i(1000,700);

    glVertex2i(1060,700);
    glVertex2i(1040,750);




  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(69, 49, 28);

                           ///TOP


    glVertex2i(1000,710);
    glVertex2i(1000,700);

    glVertex2i(1060,700);
    glVertex2i(1060,710);




  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(133, 96, 48);

                           ///TOP


    glVertex2i(1025,750);

    glVertex2i(1035,750);
    glVertex2i(1030,850);




  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(70, 49, 28);

                           ///BACK


    glVertex2i(1020,435);
    glVertex2i(1025,435);
    glVertex2i(1025,640);
    glVertex2i(1020,640);

  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(70, 49, 28);

                           ///BACK


    glVertex2i(1005,435);
    glVertex2i(1010,435);
    glVertex2i(1010,640);
    glVertex2i(1005,640);

  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(70, 49, 28);

                           ///BACK


    glVertex2i(1035,435);
    glVertex2i(1040,435);
    glVertex2i(1040,640);
    glVertex2i(1035,640);

  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(70, 49, 28);

                           ///BACK


    glVertex2i(1050,435);
    glVertex2i(1055,435);
    glVertex2i(1055,640);
    glVertex2i(1050,640);

  glEnd();





  ///B4 START


  glBegin(GL_POLYGON);
	glColor3ub(13, 57, 84);

                           ///BACK


    glVertex2i(915,700);
    glVertex2i(815,700);
    glVertex2i(815,220);
    glVertex2i(945,220);
    glVertex2i(945,700);
    glVertex2i(915,700);
  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(9, 34, 53);

                           ///SAD


    glVertex2i(915,700);
    glVertex2i(915,220);
    glVertex2i(945,220);
    glVertex2i(945,700);
  glEnd();







             ///B4 WINDOW START








  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L 1--1


    glVertex2i(830,670);
    glVertex2i(830,650);
    glVertex2i(850,650);
    glVertex2i(850,670);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L 1--2


    glVertex2i(860,670);
    glVertex2i(860,650);
    glVertex2i(880,650);
    glVertex2i(880,670);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L  1--3

     glVertex2i(890,670);
    glVertex2i(890,650);
    glVertex2i(910,650);
    glVertex2i(910,670);
  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L 2 --1


    glVertex2i(830,640);
    glVertex2i(830,620);
    glVertex2i(850,620);
    glVertex2i(850,640);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L 2 --2


    glVertex2i(860,640);
    glVertex2i(860,620);
    glVertex2i(880,620);
    glVertex2i(880,640);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L 2-- 3

     glVertex2i(890,640);
    glVertex2i(890,620);
    glVertex2i(910,620);
    glVertex2i(910,640);
  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L 3 --1


    glVertex2i(830,610);
    glVertex2i(830,590);
    glVertex2i(850,590);
    glVertex2i(850,610);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L 3 --2


    glVertex2i(860,610);
    glVertex2i(860,590);
    glVertex2i(880,590);
    glVertex2i(880,610);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L 3- 3

     glVertex2i(890,610);
    glVertex2i(890,590);
    glVertex2i(910,590);
    glVertex2i(910,610);
  glEnd();




  ///444


   glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L 4 --1


    glVertex2i(830,580);
    glVertex2i(830,560);
    glVertex2i(850,560);
    glVertex2i(850,580);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L 4 --2


    glVertex2i(860,580);
    glVertex2i(860,560);
    glVertex2i(880,560);
    glVertex2i(880,580);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L 4- 3

     glVertex2i(890,580);
    glVertex2i(890,560);
    glVertex2i(910,560);
    glVertex2i(910,580);
  glEnd();


/// 555


   glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L 5 --1


    glVertex2i(830,550);
    glVertex2i(830,530);
    glVertex2i(850,530);
    glVertex2i(850,550);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L 5 --2


    glVertex2i(860,550);
    glVertex2i(860,530);
    glVertex2i(880,530);
    glVertex2i(880,550);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L 5- 3

     glVertex2i(890,550);
    glVertex2i(890,530);
    glVertex2i(910,530);
    glVertex2i(910,550);
  glEnd();




  ///666

  glPushMatrix();
  glTranslatef(0,-30,0);

  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L  --1


    glVertex2i(830,550);
    glVertex2i(830,530);
    glVertex2i(850,530);
    glVertex2i(850,550);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L  --2


    glVertex2i(860,550);
    glVertex2i(860,530);
    glVertex2i(880,530);
    glVertex2i(880,550);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L - 3

     glVertex2i(890,550);
    glVertex2i(890,530);
    glVertex2i(910,530);
    glVertex2i(910,550);
  glEnd();







  glPopMatrix();


  ///777

  glPushMatrix();
  glTranslatef(0,-60,0);

  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L  --1


    glVertex2i(830,550);
    glVertex2i(830,530);
    glVertex2i(850,530);
    glVertex2i(850,550);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L  --2


    glVertex2i(860,550);
    glVertex2i(860,530);
    glVertex2i(880,530);
    glVertex2i(880,550);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L - 3

     glVertex2i(890,550);
    glVertex2i(890,530);
    glVertex2i(910,530);
    glVertex2i(910,550);
  glEnd();







  glPopMatrix();



  ///888

  glPushMatrix();
  glTranslatef(0,-90,0);

  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L  --1


    glVertex2i(830,550);
    glVertex2i(830,530);
    glVertex2i(850,530);
    glVertex2i(850,550);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L  --2


    glVertex2i(860,550);
    glVertex2i(860,530);
    glVertex2i(880,530);
    glVertex2i(880,550);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L - 3

     glVertex2i(890,550);
    glVertex2i(890,530);
    glVertex2i(910,530);
    glVertex2i(910,550);
  glEnd();







  glPopMatrix();


  /// 9

  glPushMatrix();
  glTranslatef(0,-120,0);

  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L  --1


    glVertex2i(830,550);
    glVertex2i(830,530);
    glVertex2i(850,530);
    glVertex2i(850,550);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L  --2


    glVertex2i(860,550);
    glVertex2i(860,530);
    glVertex2i(880,530);
    glVertex2i(880,550);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L - 3

     glVertex2i(890,550);
    glVertex2i(890,530);
    glVertex2i(910,530);
    glVertex2i(910,550);
  glEnd();







  glPopMatrix();



  ///10

  glPushMatrix();
  glTranslatef(0,-150,0);

  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L  --1


    glVertex2i(830,550);
    glVertex2i(830,530);
    glVertex2i(850,530);
    glVertex2i(850,550);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L  --2


    glVertex2i(860,550);
    glVertex2i(860,530);
    glVertex2i(880,530);
    glVertex2i(880,550);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L - 3

     glVertex2i(890,550);
    glVertex2i(890,530);
    glVertex2i(910,530);
    glVertex2i(910,550);
  glEnd();







  glPopMatrix();


  ///11

  glPushMatrix();
  glTranslatef(0,-180,0);

  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L  --1


    glVertex2i(830,550);
    glVertex2i(830,530);
    glVertex2i(850,530);
    glVertex2i(850,550);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L  --2


    glVertex2i(860,550);
    glVertex2i(860,530);
    glVertex2i(880,530);
    glVertex2i(880,550);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L - 3

     glVertex2i(890,550);
    glVertex2i(890,530);
    glVertex2i(910,530);
    glVertex2i(910,550);
  glEnd();







  glPopMatrix();


  ///12

  glPushMatrix();
  glTranslatef(0,-210,0);

  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L  --1


    glVertex2i(830,550);
    glVertex2i(830,530);
    glVertex2i(850,530);
    glVertex2i(850,550);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L  --2


    glVertex2i(860,550);
    glVertex2i(860,530);
    glVertex2i(880,530);
    glVertex2i(880,550);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L - 3

     glVertex2i(890,550);
    glVertex2i(890,530);
    glVertex2i(910,530);
    glVertex2i(910,550);
  glEnd();







  glPopMatrix();


  ///13

  glPushMatrix();
  glTranslatef(0,-240,0);

  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L  --1


    glVertex2i(830,550);
    glVertex2i(830,530);
    glVertex2i(850,530);
    glVertex2i(850,550);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L  --2


    glVertex2i(860,550);
    glVertex2i(860,530);
    glVertex2i(880,530);
    glVertex2i(880,550);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L - 3

     glVertex2i(890,550);
    glVertex2i(890,530);
    glVertex2i(910,530);
    glVertex2i(910,550);
  glEnd();







  glPopMatrix();


  ///14

  glPushMatrix();
  glTranslatef(0,-270,0);

  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L  --1


    glVertex2i(830,550);
    glVertex2i(830,530);
    glVertex2i(850,530);
    glVertex2i(850,550);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L  --2


    glVertex2i(860,550);
    glVertex2i(860,530);
    glVertex2i(880,530);
    glVertex2i(880,550);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L - 3

     glVertex2i(890,550);
    glVertex2i(890,530);
    glVertex2i(910,530);
    glVertex2i(910,550);
  glEnd();







  glPopMatrix();


  ///15

  glPushMatrix();
  glTranslatef(0,-300,0);

  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L  --1


    glVertex2i(830,550);
    glVertex2i(830,530);
    glVertex2i(850,530);
    glVertex2i(850,550);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L  --2


    glVertex2i(860,550);
    glVertex2i(860,530);
    glVertex2i(880,530);
    glVertex2i(880,550);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(254, 216, 94);

                           ///WINDOW TOP L - 3

     glVertex2i(890,550);
    glVertex2i(890,530);
    glVertex2i(910,530);
    glVertex2i(910,550);
  glEnd();







  glPopMatrix();



///WINDOW END




                                        ///tree start 1


   glPushMatrix();
   glTranslatef(640,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--1
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(660,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--2
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(685,320,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(705,340,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

     glPushMatrix();
   glTranslatef(685,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--4
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

   glPushMatrix();
   glTranslatef(660,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=25;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();






    //glPushMatrix();
   //glTranslatef(650,360,0);
    glBegin(GL_POLYGON);                  ///tree bot
    glColor3ub(136, 31, 29);




    glVertex2i(668,220);
    glVertex2i(677,220);
    glVertex2i(677,320);
    glVertex2i(675,325);
    //glVertex2i(660,310);
    //glVertex2i(650,320);
    //glVertex2i(660,320);
    glVertex2i(668,310);
    //glVertex2i(660,330);

    glEnd();



   //glPopMatrix();



///tree 1 end 1





///                                   ///tree start 2


   glPushMatrix(); ///TREE TRANSLATE
   glTranslatef(250,-15,0);







   glPushMatrix();
   glTranslatef(640,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--1
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(660,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--2
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(685,320,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(705,340,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

     glPushMatrix();
   glTranslatef(685,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--4
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

   glPushMatrix();
   glTranslatef(660,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=25;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();






    //glPushMatrix();
   //glTranslatef(650,360,0);
    glBegin(GL_POLYGON);                  ///tree bot
    glColor3ub(136, 31, 29);




    glVertex2i(668,220);
    glVertex2i(677,220);
    glVertex2i(677,320);
    glVertex2i(675,325);
    //glVertex2i(660,310);
    //glVertex2i(650,320);
    //glVertex2i(660,320);
    glVertex2i(668,310);
    //glVertex2i(660,330);

    glEnd();






   glPopMatrix();



///tree  2 end












                                              ///TREE 3 START


 glPushMatrix(); ///TREE TRANSLATE
   glTranslatef(430,-25,0);







   glPushMatrix();
   glTranslatef(640,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--1
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(660,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--2
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(685,320,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(705,340,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

     glPushMatrix();
   glTranslatef(685,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--4
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

   glPushMatrix();
   glTranslatef(660,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=25;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y);
	}
	glEnd();

   glPopMatrix();






    //glPushMatrix();
   //glTranslatef(650,360,0);
    glBegin(GL_POLYGON);                  ///tree bot
    glColor3ub(136, 31, 29);




    glVertex2i(668,220);
    glVertex2i(677,220);
    glVertex2i(677,320);
    glVertex2i(675,325);
    //glVertex2i(660,310);
    //glVertex2i(650,320);
    //glVertex2i(660,320);
    glVertex2i(668,310);
    //glVertex2i(660,330);

    glEnd();






   glPopMatrix();



///tree  3 end







                                              ///TREE 4 START


 glPushMatrix(); ///TREE TRANSLATE
 glScalef(0.6,0.6,0);
   glTranslatef(2300,150,0);







   glPushMatrix();
   glTranslatef(640,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--1
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(660,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--2
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(685,320,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(705,340,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

     glPushMatrix();
   glTranslatef(685,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--4
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

   glPushMatrix();
   glTranslatef(660,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=25;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y);
	}
	glEnd();

   glPopMatrix();






    //glPushMatrix();
   //glTranslatef(650,360,0);
    glBegin(GL_POLYGON);                  ///tree bot
    glColor3ub(136, 31, 29);




    glVertex2i(668,220);
    glVertex2i(677,220);
    glVertex2i(677,320);
    glVertex2i(675,325);
    //glVertex2i(660,310);
    //glVertex2i(650,320);
    //glVertex2i(660,320);
    glVertex2i(668,310);
    //glVertex2i(660,330);

    glEnd();






   glPopMatrix();



///tree  4 end


                                            ///TREE 5 START


 glPushMatrix(); ///TREE TRANSLATE
 //glScalef(0.6,0.6,0);
   glTranslatef(1000,-70,0);







   glPushMatrix();
   glTranslatef(640,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--1
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(660,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--2
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(685,320,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(705,340,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

     glPushMatrix();
   glTranslatef(685,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--4
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

   glPushMatrix();
   glTranslatef(660,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=25;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y);
	}
	glEnd();

   glPopMatrix();






    //glPushMatrix();
   //glTranslatef(650,360,0);






   glPopMatrix();



///tree  5 end






                             /// background building



                             glPushMatrix();
                             glScalef(0.3,0.3,0);
                            glTranslatef(0,600,0);

       glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(220,700);
    glVertex2i(220,600);
    glVertex2i(200,600);
    glVertex2i(200,220);
    glVertex2i(300,220);
    glVertex2i(300,600);
    glVertex2i(280,600);
    glVertex2i(280,700);


    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(320,700);
    glVertex2i(320,600);
    glVertex2i(310,600);
    glVertex2i(310,220);
    glVertex2i(380,220);
    glVertex2i(380,600);



    glEnd();


glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);





    glVertex2i(410,600);
    glVertex2i(410,220);
    glVertex2i(480,220);
    glVertex2i(480,600);
    glVertex2i(445,800);



    glEnd();

    glPopMatrix();

       ///end;;;





       ///              small house back step 2


       glPushMatrix();
       glScalef(1.2,1.2,0);
       glTranslatef(130,-45,0);




       glPushMatrix();

 glScalef(0.2,0.2,0);
 glTranslatef(-700,1000,0);


 ///BUILDING BACK BLUE 3  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






    glVertex2i(720,650);
    glVertex2i(690,630);
    glVertex2i(690,230);    ///BACK
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(720,870);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(60, 187, 219);






                             ///SAD
    glVertex2i(850,230);
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(800,870);


  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP1

    glVertex2i(755,885);
    glVertex2i(755,870);
    glVertex2i(820,870);
    glVertex2i(820,885);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP2

    glVertex2i(770,900);
    glVertex2i(770,885);

    glVertex2i(805,885);
    glVertex2i(805,900);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           /// PIN

    glVertex2i(780,900);
    glVertex2i(795,900);
    glVertex2i(787.5,960);


  glEnd();








  ///BUILDING BACK  4  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






                             ///BACK


    glVertex2i(890,550);
    glVertex2i(880,550);
    glVertex2i(880,230);
    glVertex2i(980,230);
    glVertex2i(980,550);
    glVertex2i(970,550);
    glVertex2i(970,600);
    glVertex2i(970,900);

    glVertex2i(890,800);
    //glVertex2i(890,600);



  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(780,610);
    glVertex2i(790,610);
    glVertex2i(790,630);
    glVertex2i(780,630);
    glVertex2i(780,610);




  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(715,610);
    glVertex2i(725,610);
    glVertex2i(725,630);
    glVertex2i(715,630);
    //glVertex2i(780,610);




  glEnd();
 glPopMatrix();


                                           ///SMALL HOUSE BACK END



                             glPushMatrix();
                             glScalef(0.3,0.3,0);
                            glTranslatef(0,600,0);

       glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(220,700);
    glVertex2i(220,600);
    glVertex2i(200,600);
    glVertex2i(200,220);
    glVertex2i(300,220);
    glVertex2i(300,600);
    glVertex2i(280,600);
    glVertex2i(280,700);


    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(320,700);
    glVertex2i(320,600);
    glVertex2i(310,600);
    glVertex2i(310,220);
    glVertex2i(380,220);
    glVertex2i(380,600);



    glEnd();


glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);





    glVertex2i(410,600);
    glVertex2i(410,220);
    glVertex2i(480,220);
    glVertex2i(480,600);
    glVertex2i(445,800);



    glEnd();

    glPopMatrix();



       glPopMatrix();






       ///sma;ll house back strep 2 end





                                      ///ship -----start

   glPushMatrix();
    glTranslatef(_ang_tri, 0.0, 0.0);
glPushMatrix();
glScalef(0.7,0.7,0);


              glBegin(GL_POLYGON);
    glColor3ub(243, 99, 91);





    glVertex2i(570,80);
    glVertex2i(580,50);
    glVertex2i(910,50);
    glVertex2i(920,70);




    glEnd();

              glBegin(GL_POLYGON);
    glColor3ub(90, 69, 68);





    glVertex2i(550,120);
    glVertex2i(570,80);
    glVertex2i(920,70);
    glVertex2i(920,100);




    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(90, 69, 68);





    glVertex2i(620,140);
    glVertex2i(620,120);
    glVertex2i(890,110);
    glVertex2i(890,140);





    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(70, 49, 48);





    glVertex2i(680,160);
    glVertex2i(680,140);
    glVertex2i(870,140);
    glVertex2i(870,160);





    glEnd();


     glBegin(GL_POLYGON);
    glColor3ub(215, 217, 214);





    glVertex2i(545,130);
    glVertex2i(545,120);
    glVertex2i(930,100);
    glVertex2i(930,110);




    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(215, 217, 214);





    glVertex2i(678,170);
    glVertex2i(678,160);
    glVertex2i(872,160);
    glVertex2i(872,170);





    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(215, 217, 214);





    glVertex2i(835,190);
    glVertex2i(835,170);
    glVertex2i(860,170);
    glVertex2i(860,190);





    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(192, 67, 65);





    glVertex2i(835,195);
    glVertex2i(835,185);
    glVertex2i(860,185);
    glVertex2i(860,195);





    glEnd();



    glPushMatrix();
    glTranslatef(-50,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(215, 217, 214);





    glVertex2i(835,190);
    glVertex2i(835,170);
    glVertex2i(860,170);
    glVertex2i(860,190);





    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(192, 67, 65);





    glVertex2i(835,195);
    glVertex2i(835,185);
    glVertex2i(860,185);
    glVertex2i(860,195);





    glEnd();




    glPopMatrix();




                           ///sheep end


glPopMatrix();

glPopMatrix();
             ///Nb0    start


             glBegin(GL_POLYGON);
    glColor3ub(218, 223, 188);

    glVertex2i(370,220);
    glVertex2i(480,220);
    glVertex2i(480,700);
    glVertex2i(370,700);

    glEnd();



             glBegin(GL_POLYGON);
    glColor3ub(139, 142, 122);

    glVertex2i(360,700);
    glVertex2i(490,700);
    glVertex2i(490,710);
    glVertex2i(360,710);

    glEnd();

      glBegin(GL_POLYGON);
    glColor3ub(218, 223, 188);

    glVertex2i(360,710);
    glVertex2i(490,710);
    glVertex2i(490,730);
    glVertex2i(360,730);

    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(139, 142, 122);

    glVertex2i(370,730);
    glVertex2i(480,730);
    glVertex2i(430,780);
    glVertex2i(420,780);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(177, 181, 157);

    glVertex2i(425,730);
    glVertex2i(480,730);
    glVertex2i(430,780);
    glVertex2i(425,780);



    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(139, 142, 122);


    glVertex2i(420,780);
    glVertex2i(430,780);
    glVertex2i(425,850);


    glEnd();



                    /// B0 WINDOW


                    ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();


    ///WIN 2

    glPushMatrix();
    glTranslatef(0,-30,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();







    ///WIN 3

    glPushMatrix();
    glTranslatef(0,-60,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();



    ///WIN 4

    glPushMatrix();
    glTranslatef(0,-90,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();




    ///WIN 5

    glPushMatrix();
    glTranslatef(0,-120,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();




    ///WIN 6

    glPushMatrix();
    glTranslatef(0,-150,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();




    ///WIN 7

    glPushMatrix();
    glTranslatef(0,-180,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();




    ///WIN 8

    glPushMatrix();
    glTranslatef(0,-210,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();





    ///------------------------------------------------------------------///

    ///WIN 9

    glPushMatrix();
    glTranslatef(0,-240,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();





    ///------------------------------------------------------------------///

    ///WIN 10

    glPushMatrix();
    glTranslatef(0,-270,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();




    ///------------------------------------------------------------------///

    ///WIN 11

    glPushMatrix();
    glTranslatef(0,-300,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();




    ///------------------------------------------------------------------///

    ///WIN 12

    glPushMatrix();
    glTranslatef(0,-330,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();




    ///------------------------------------------------------------------///

    ///WIN 13

    glPushMatrix();
    glTranslatef(0,-360,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();





    ///------------------------------------------------------------------///

    ///WIN 14

    glPushMatrix();
    glTranslatef(0,-390,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();




    ///------------------------------------------------------------------///

    ///WIN 15

    glPushMatrix();
    glTranslatef(0,-420,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();









                    ///WINDOW END



             ///NB0   end




///tree start n


   glPushMatrix(); ///TREE TRANSLATE
   glTranslatef(-310,-15,0);







   glPushMatrix();
   glTranslatef(640,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--1
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(660,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--2
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(685,320,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(705,340,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

     glPushMatrix();
   glTranslatef(685,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--4
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

   glPushMatrix();
   glTranslatef(660,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=25;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();






    //glPushMatrix();
   //glTranslatef(650,360,0);
    glBegin(GL_POLYGON);                  ///tree bot
    glColor3ub(136, 31, 29);




    glVertex2i(668,220);
    glVertex2i(677,220);
    glVertex2i(677,320);
    glVertex2i(675,325);
    //glVertex2i(660,310);
    //glVertex2i(650,320);
    //glVertex2i(660,320);
    glVertex2i(668,310);
    //glVertex2i(660,330);

    glEnd();






   glPopMatrix();


   ///tree start n


   glPushMatrix(); ///TREE TRANSLATE
   glTranslatef(-120,-90,0);







   glPushMatrix();
   glTranslatef(640,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--1
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(660,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--2
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(685,320,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(705,340,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

     glPushMatrix();
   glTranslatef(685,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--4
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

   glPushMatrix();
   glTranslatef(660,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=25;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();






    //glPushMatrix();
   //glTranslatef(650,360,0);






   glPopMatrix();








    glFlush();
	glutSwapBuffers();

	//glutPostRedisplay();

//glutTimerFunc(1500,demo_day,0);
//glFlush();


  }///end night


  /*void demo_night(int val)

 {

 glutDisplayFunc(night);

}*/


                                               ///end ///
                          ///--------------------Night---------------------///
                          ///--------------------Night---------------------///
                          ///--------------------Night---------------------///
                          ///--------------------Night---------------------///
                          ///--------------------Night---------------------///
                          ///--------------------Night---------------------///
                          ///--------------------Night---------------------///
                          ///--------------------Night---------------------///






                          ///--------------------DAY---------------------///
                          ///--------------------DAY---------------------///
                          ///--------------------DAY---------------------///
                          ///--------------------DAY---------------------///
                          ///--------------------DAY---------------------///
                          ///--------------------DAY---------------------///
                          ///--------------------DAY---------------------///
                          ///--------------------DAY---------------------///
                          ///--------------------DAY---------------------///
                          ///--------------------DAY---------------------///
                          ///--------------------DAY---------------------///
                          ///--------------------DAY---------------------///


void display(){  ///day
	glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
	glColor3ub(196, 247, 242);
	glVertex2i(0,0);        ///SKY
	glVertex2i(1900,0);
	glVertex2i(1900,1050);
	glVertex2i(0,1050);
	glEnd();


	glPushMatrix();
   glTranslatef(200,900,0);

    glBegin(GL_POLYGON);

    glColor3ub(242, 226, 94);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///  moon
		float r=70;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();




	glBegin(GL_POLYGON);
	glColor3ub(65, 129, 174);

    glVertex2i(0,0);
	glVertex2i(1900,0);
	glVertex2i(1900,220);     ///RIVER
	glVertex2i(1650,220);
	glVertex2i(1200,170);
	glVertex2i(750,200);
	glVertex2i(500,220);
	glVertex2i(0,220);

	glEnd();




	glBegin(GL_POLYGON);
	glColor3ub(85, 149, 184);


	glVertex2i(550,0);     ///RIVER
	glVertex2i(1900,0);
	glVertex2i(1900,220);
	glVertex2i(1650,220);
	glVertex2i(1200,170);
	glVertex2i(1000,100);

	//glVertex2i(0,220);

	glEnd();

///back building ----------------------------------------------------------start

glPushMatrix();
glScalef(0.4,0.4,0);
glTranslatef(420,380,0);

glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);


    glVertex2i(380,230);
    glVertex2i(550,230);     ///L2 2
    glVertex2i(550,450);
    glVertex2i(500,450);
    glVertex2i(500,700);
    glVertex2i(400,700);
    glVertex2i(400,450);
    glVertex2i(380,450);
    glVertex2i(380,450);



    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);


    glVertex2i(260,230);
    glVertex2i(380,230);
    glVertex2i(380,450);
    glVertex2i(360,450);
    glVertex2i(360,750);
    glVertex2i(260,750);



    glEnd();



   glPopMatrix();

///back building ----------------------------------------------------------end

///back building ----------------------------------------------------------start

glPushMatrix();
glScalef(0.4,0.4,0);
glTranslatef(250,380,0);

glBegin(GL_POLYGON);
    glColor3ub(83, 151, 169);


    glVertex2i(380,230);
    glVertex2i(550,230);     ///L2 2
    glVertex2i(550,450);
    glVertex2i(500,450);
    glVertex2i(500,700);
    glVertex2i(400,700);
    glVertex2i(400,450);
    glVertex2i(380,450);
    glVertex2i(380,450);



    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(83, 151, 169);


    glVertex2i(260,230);
    glVertex2i(380,230);
    glVertex2i(380,450);
    glVertex2i(360,450);
    glVertex2i(360,750);
    glVertex2i(260,750);



    glEnd();



   glPopMatrix();

///back building ----------------------------------------------------------end

///back building ----------------------------------------------------------start

glPushMatrix();
glScalef(0.4,0.4,0);
glTranslatef(-150,380,0);

glBegin(GL_POLYGON);
    glColor3ub(83, 151, 169);


    glVertex2i(380,230);
    glVertex2i(550,230);     ///L2 2
    glVertex2i(550,450);
    glVertex2i(500,450);
    glVertex2i(500,700);
    glVertex2i(400,700);
    glVertex2i(400,450);
    glVertex2i(380,450);
    glVertex2i(380,450);



    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(83, 151, 169);


    glVertex2i(260,230);
    glVertex2i(380,230);
    glVertex2i(380,450);
    glVertex2i(360,450);
    glVertex2i(360,750);
    glVertex2i(260,750);



    glEnd();



   glPopMatrix();

///back building ----------------------------------------------------------end

///back building ----------------------------------------------------------start

glPushMatrix();
glScalef(0.4,0.4,0);
glTranslatef(420,380,0);

glBegin(GL_POLYGON);
    glColor3ub(83, 151, 169);


    glVertex2i(380,230);
    glVertex2i(550,230);     ///L2 2
    glVertex2i(550,450);
    glVertex2i(500,450);
    glVertex2i(500,700);
    glVertex2i(400,700);
    glVertex2i(400,450);
    glVertex2i(380,450);
    glVertex2i(380,450);



    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(83, 151, 169);


    glVertex2i(260,230);
    glVertex2i(380,230);
    glVertex2i(380,450);
    glVertex2i(360,450);
    glVertex2i(360,750);
    glVertex2i(260,750);



    glEnd();



   glPopMatrix();

///back building ----------------------------------------------------------end





       ///              small house back step 3


       glPushMatrix();
       glScalef(1.2,1.2,0);
       glTranslatef(900,-50,0);








       glPushMatrix();

 glScalef(0.2,0.2,0);
 glTranslatef(-700,1000,0);





 ///BUILDING BACK BLUE 3  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






    glVertex2i(720,650);
    glVertex2i(690,630);
    glVertex2i(690,230);    ///BACK
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(720,870);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(60, 187, 219);






                             ///SAD
    glVertex2i(850,230);
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(800,870);


  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP1

    glVertex2i(755,885);
    glVertex2i(755,870);
    glVertex2i(820,870);
    glVertex2i(820,885);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP2

    glVertex2i(770,900);
    glVertex2i(770,885);

    glVertex2i(805,885);
    glVertex2i(805,900);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           /// PIN

    glVertex2i(780,900);
    glVertex2i(795,900);
    glVertex2i(787.5,960);


  glEnd();








  ///BUILDING BACK  4  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






                             ///BACK


    glVertex2i(890,550);
    glVertex2i(880,550);
    glVertex2i(880,230);
    glVertex2i(980,230);
    glVertex2i(980,550);
    glVertex2i(970,550);
    glVertex2i(970,600);
    glVertex2i(970,900);

    glVertex2i(890,800);
    //glVertex2i(890,600);



  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(780,610);
    glVertex2i(790,610);
    glVertex2i(790,630);
    glVertex2i(780,630);
    glVertex2i(780,610);




  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(715,610);
    glVertex2i(725,610);
    glVertex2i(725,630);
    glVertex2i(715,630);
    //glVertex2i(780,610);




  glEnd();
 glPopMatrix();


                                           ///SMALL HOUSE BACK END



                             glPushMatrix();
                             glScalef(0.3,0.3,0);
                            glTranslatef(0,600,0);

       glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(220,700);
    glVertex2i(220,600);
    glVertex2i(200,600);
    glVertex2i(200,220);
    glVertex2i(300,220);
    glVertex2i(300,600);
    glVertex2i(280,600);
    glVertex2i(280,700);


    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(320,700);
    glVertex2i(320,600);
    glVertex2i(310,600);
    glVertex2i(310,220);
    glVertex2i(380,220);
    glVertex2i(380,600);



    glEnd();


glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);





    glVertex2i(410,600);
    glVertex2i(410,220);
    glVertex2i(480,220);
    glVertex2i(480,600);
    glVertex2i(445,800);



    glEnd();

    glPopMatrix();



       glPopMatrix();






       ///sma;ll house back strep 3 end







       ///              small house back step 4


       glPushMatrix();
       glScalef(1.3,1.3,0);
       glTranslatef(980,-50,0);




       glPushMatrix();

 glScalef(0.2,0.2,0);
 glTranslatef(-700,1000,0);


 ///BUILDING BACK BLUE 3  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






    glVertex2i(720,650);
    glVertex2i(690,630);
    glVertex2i(690,230);    ///BACK
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(720,870);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(60, 187, 219);






                             ///SAD
    glVertex2i(850,230);
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(800,870);


  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP1

    glVertex2i(755,885);
    glVertex2i(755,870);
    glVertex2i(820,870);
    glVertex2i(820,885);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP2

    glVertex2i(770,900);
    glVertex2i(770,885);

    glVertex2i(805,885);
    glVertex2i(805,900);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           /// PIN

    glVertex2i(780,900);
    glVertex2i(795,900);
    glVertex2i(787.5,960);


  glEnd();








  ///BUILDING BACK  4  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






                             ///BACK


    glVertex2i(890,550);
    glVertex2i(880,550);
    glVertex2i(880,230);
    glVertex2i(980,230);
    glVertex2i(980,550);
    glVertex2i(970,550);
    glVertex2i(970,600);
    glVertex2i(970,900);

    glVertex2i(890,800);
    //glVertex2i(890,600);



  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(780,610);
    glVertex2i(790,610);
    glVertex2i(790,630);
    glVertex2i(780,630);
    glVertex2i(780,610);




  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(715,610);
    glVertex2i(725,610);
    glVertex2i(725,630);
    glVertex2i(715,630);
    //glVertex2i(780,610);




  glEnd();
 glPopMatrix();


                                           ///SMALL HOUSE BACK END



                             glPushMatrix();
                             glScalef(0.3,0.3,0);
                            glTranslatef(0,600,0);

       glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(220,700);
    glVertex2i(220,600);
    glVertex2i(200,600);
    glVertex2i(200,220);
    glVertex2i(300,220);
    glVertex2i(300,600);
    glVertex2i(280,600);
    glVertex2i(280,700);


    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(320,700);
    glVertex2i(320,600);
    glVertex2i(310,600);
    glVertex2i(310,220);
    glVertex2i(380,220);
    glVertex2i(380,600);



    glEnd();


glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);





    glVertex2i(410,600);
    glVertex2i(410,220);
    glVertex2i(480,220);
    glVertex2i(480,600);
    glVertex2i(445,800);



    glEnd();

    glPopMatrix();



       glPopMatrix();






       ///sma;ll house back strep 4 end



       ///sma;ll house back strep  5 st





       glPushMatrix();
       glScalef(1.3,1.2,0);
       glTranslatef(1150,-30,0);




       glPushMatrix();

 glScalef(0.2,0.2,0);
 glTranslatef(-700,1000,0);


 ///BUILDING BACK BLUE 3  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






    glVertex2i(720,650);
    glVertex2i(690,630);
    glVertex2i(690,230);    ///BACK
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(720,870);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(60, 187, 219);






                             ///SAD
    glVertex2i(850,230);
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(800,870);


  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP1

    glVertex2i(755,885);
    glVertex2i(755,870);
    glVertex2i(820,870);
    glVertex2i(820,885);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP2

    glVertex2i(770,900);
    glVertex2i(770,885);

    glVertex2i(805,885);
    glVertex2i(805,900);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           /// PIN

    glVertex2i(780,900);
    glVertex2i(795,900);
    glVertex2i(787.5,960);


  glEnd();








  ///BUILDING BACK  4  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






                             ///BACK


    glVertex2i(890,550);
    glVertex2i(880,550);
    glVertex2i(880,230);
    glVertex2i(980,230);
    glVertex2i(980,550);
    glVertex2i(970,550);
    glVertex2i(970,600);
    glVertex2i(970,900);

    glVertex2i(890,800);
    //glVertex2i(890,600);



  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(780,610);
    glVertex2i(790,610);
    glVertex2i(790,630);
    glVertex2i(780,630);
    glVertex2i(780,610);




  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(715,610);
    glVertex2i(725,610);
    glVertex2i(725,630);
    glVertex2i(715,630);
    //glVertex2i(780,610);




  glEnd();
 glPopMatrix();


                                           ///SMALL HOUSE BACK END



                             glPushMatrix();
                             glScalef(0.3,0.3,0);
                            glTranslatef(0,600,0);

       glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(220,700);
    glVertex2i(220,600);
    glVertex2i(200,600);
    glVertex2i(200,220);
    glVertex2i(300,220);
    glVertex2i(300,600);
    glVertex2i(280,600);
    glVertex2i(280,700);


    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(320,700);
    glVertex2i(320,600);
    glVertex2i(310,600);
    glVertex2i(310,220);
    glVertex2i(380,220);
    glVertex2i(380,600);



    glEnd();


glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);





    glVertex2i(410,600);
    glVertex2i(410,220);
    glVertex2i(480,220);
    glVertex2i(480,600);
    glVertex2i(445,800);



    glEnd();

    glPopMatrix();



       glPopMatrix();






       ///sma;ll house back strep 5 end




        ///sma;ll house back strep  6 st





       glPushMatrix();
       glScalef(1.3,1.2,0);
       glTranslatef(1300,20,0);




       glPushMatrix();

 glScalef(0.2,0.2,0);
 glTranslatef(-700,1000,0);


 ///BUILDING BACK BLUE 3  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






    glVertex2i(720,650);
    glVertex2i(690,630);
    glVertex2i(690,230);    ///BACK
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(720,870);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(60, 187, 219);






                             ///SAD
    glVertex2i(850,230);
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(800,870);


  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP1

    glVertex2i(755,885);
    glVertex2i(755,870);
    glVertex2i(820,870);
    glVertex2i(820,885);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP2

    glVertex2i(770,900);
    glVertex2i(770,885);

    glVertex2i(805,885);
    glVertex2i(805,900);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           /// PIN

    glVertex2i(780,900);
    glVertex2i(795,900);
    glVertex2i(787.5,960);


  glEnd();








  ///BUILDING BACK  4  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






                             ///BACK


    glVertex2i(890,550);
    glVertex2i(880,550);
    glVertex2i(880,230);
    glVertex2i(980,230);
    glVertex2i(980,550);
    glVertex2i(970,550);
    glVertex2i(970,600);
    glVertex2i(970,900);

    glVertex2i(890,800);
    //glVertex2i(890,600);



  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(780,610);
    glVertex2i(790,610);
    glVertex2i(790,630);
    glVertex2i(780,630);
    glVertex2i(780,610);




  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(715,610);
    glVertex2i(725,610);
    glVertex2i(725,630);
    glVertex2i(715,630);
    //glVertex2i(780,610);




  glEnd();
 glPopMatrix();


                                           ///SMALL HOUSE BACK END



                             glPushMatrix();
                             glScalef(0.3,0.3,0);
                            glTranslatef(0,600,0);

       glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(220,700);
    glVertex2i(220,600);
    glVertex2i(200,600);
    glVertex2i(200,220);
    glVertex2i(300,220);
    glVertex2i(300,600);
    glVertex2i(280,600);
    glVertex2i(280,700);


    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(320,700);
    glVertex2i(320,600);
    glVertex2i(310,600);
    glVertex2i(310,220);
    glVertex2i(380,220);
    glVertex2i(380,600);



    glEnd();


glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);





    glVertex2i(410,600);
    glVertex2i(410,220);
    glVertex2i(480,220);
    glVertex2i(480,600);
    glVertex2i(445,800);



    glEnd();

    glPopMatrix();



       glPopMatrix();






       ///sma;ll house back strep 6 end







	glBegin(GL_POLYGON);
    glColor3ub(71, 153, 203);




                         ///sad   right
    glVertex2i(1110,230);
    glVertex2i(1910,230);
    glVertex2i(1910,440);
    //glVertex2i(1110,440);




    glEnd();







	glBegin(GL_POLYGON);
	glColor3ub(239, 180, 90);



	     ///GRPUND




	glVertex2i(0,220);
	glVertex2i(500,220);
	glVertex2i(750,200);
	glVertex2i(1200,170);
	glVertex2i(1650,220);
	glVertex2i(1900,220);
	glVertex2i(1900,250);
	glVertex2i(1750,240);
	glVertex2i(1100,230);
	glVertex2i(700,230);
	glVertex2i(500,240);
	glVertex2i(400,245);
	glVertex2i(300,245);
	glVertex2i(200,250);
	glVertex2i(0,250);

	glEnd();






                             /// background building



                             glPushMatrix();
                             glScalef(0.3,0.3,0);
                            glTranslatef(0,600,0);

       glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(220,700);
    glVertex2i(220,600);
    glVertex2i(200,600);
    glVertex2i(200,220);
    glVertex2i(300,220);
    glVertex2i(300,600);
    glVertex2i(280,600);
    glVertex2i(280,700);


    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(320,700);
    glVertex2i(320,600);
    glVertex2i(310,600);
    glVertex2i(310,220);
    glVertex2i(380,220);
    glVertex2i(380,600);



    glEnd();


glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);





    glVertex2i(410,600);
    glVertex2i(410,220);
    glVertex2i(480,220);
    glVertex2i(480,600);
    glVertex2i(445,800);



    glEnd();

    glPopMatrix();

       ///end;;;
















                               ///=== CLOUD START ====///





                     ///CLOUD 1 START run1

    glPushMatrix();
    glTranslatef(_run, 0.0, 0.0);

glPushMatrix();
glTranslatef(520,1000,0);
     glBegin(GL_POLYGON);

    glColor3f(1.00, 1.00, 1.00);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// T1
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();

                   ///CLOUD 1 START

   glPushMatrix();
glTranslatef(460,1000,0);
     glBegin(GL_POLYGON);

    glColor3f(1.00, 1.00, 1.00);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();

      ///CLOUD 1 START

   glPushMatrix();
glTranslatef(440,960,0);
     glBegin(GL_POLYGON);

    glColor3f(1.00, 1.00, 1.00);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();


      ///CLOUD 1 START

   glPushMatrix();
glTranslatef(480,960,0);
     glBegin(GL_POLYGON);

    glColor3f(1.00, 1.00, 1.00);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();

      ///CLOUD 1 START

   glPushMatrix();
glTranslatef(550,960,0);
     glBegin(GL_POLYGON);

    glColor3f(1.00, 1.00, 1.00);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();
  glPopMatrix();

                         ///COUD 1 END

                         ///---------///
                         ///COUD 2 START

    glPushMatrix();
    glTranslatef(_run1, 0.0, 0.0);


    glPushMatrix();
    glScalef(0.8,0.8,0);
    glTranslatef(520,-40,0);



                     ///CLOUD 2 START

glPushMatrix();
glTranslatef(520,1000,0);
     glBegin(GL_POLYGON);

    glColor3f(1.00, 1.00, 1.00);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// T1
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();

                   ///CLOUD 2 START

   glPushMatrix();
glTranslatef(460,1000,0);
     glBegin(GL_POLYGON);

    glColor3f(1.00, 1.00, 1.00);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();

      ///CLOUD 2 START

   glPushMatrix();
glTranslatef(440,960,0);
     glBegin(GL_POLYGON);

    glColor3f(1.00, 1.00, 1.00);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();


      ///CLOUD 2 START

   glPushMatrix();
glTranslatef(480,960,0);
     glBegin(GL_POLYGON);

    glColor3f(1.00, 1.00, 1.00);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();

      ///CLOUD 2 START

   glPushMatrix();
glTranslatef(550,960,0);
     glBegin(GL_POLYGON);

    glColor3f(1.00, 1.00, 1.00);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();






    glPopMatrix();
    glPopMatrix();
                        ///COUD 2 END




    ///3 start



 glPushMatrix();
    glTranslatef(_run2, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.8,0.8,0);
    glTranslatef(1100,-200,0);



                     ///CLOUD 3 START

glPushMatrix();
glTranslatef(520,1000,0);
     glBegin(GL_POLYGON);

    glColor3f(1.00, 1.00, 1.00);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// T1
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();

                   ///CLOUD 2 START

   glPushMatrix();
glTranslatef(460,1000,0);
     glBegin(GL_POLYGON);

    glColor3f(1.00, 1.00, 1.00);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();

      ///CLOUD 2 START

   glPushMatrix();
glTranslatef(440,960,0);
     glBegin(GL_POLYGON);

    glColor3f(1.00, 1.00, 1.00);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();


      ///CLOUD 2 START

   glPushMatrix();
glTranslatef(480,960,0);
     glBegin(GL_POLYGON);

    glColor3f(1.00, 1.00, 1.00);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();

      ///CLOUD 2 START

   glPushMatrix();
glTranslatef(550,960,0);
     glBegin(GL_POLYGON);

    glColor3f(1.00, 1.00, 1.00);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();






    glPopMatrix();
    glPopMatrix();
                        ///COUD 3 END




                        ///444







 glPushMatrix();
    glTranslatef(_run3, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.8,0.8,0);
    glTranslatef(1300,200,0);



                     ///CLOUD 4 START

glPushMatrix();
glTranslatef(520,1000,0);
     glBegin(GL_POLYGON);

    glColor3f(1.00, 1.00, 1.00);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// T1
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();

                   ///CLOUD 4 START

   glPushMatrix();
glTranslatef(460,1000,0);
     glBegin(GL_POLYGON);

    glColor3f(1.00, 1.00, 1.00);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();

      ///CLOUD 4 START

   glPushMatrix();
glTranslatef(440,960,0);
     glBegin(GL_POLYGON);

    glColor3f(1.00, 1.00, 1.00);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();


      ///CLOUD 4 START

   glPushMatrix();
glTranslatef(480,960,0);
     glBegin(GL_POLYGON);

    glColor3f(1.00, 1.00, 1.00);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();

      ///CLOUD 4 START

   glPushMatrix();
glTranslatef(550,960,0);
     glBegin(GL_POLYGON);

    glColor3f(1.00, 1.00, 1.00);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();






    glPopMatrix();
    glPopMatrix();
                        ///COUD 4 END




       ///all cloud end





    glPushMatrix();
glTranslatef(535,650,0);
     glBegin(GL_POLYGON);

    glColor3ub(247, 247, 224);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;              /// L1
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

 glPopMatrix();



	glBegin(GL_POLYGON);
	glColor3ub(200, 230, 240);

    glVertex2i(490,230);
    glVertex2i(580,230);
    glVertex2i(580,640);   ///B1 BACK
    glVertex2i(560,660);
    glVertex2i(510,660);
    glVertex2i(490,640);

	glEnd();



	glBegin(GL_POLYGON);
	glColor3ub(132, 96, 48);


    glVertex2i(580,300);
    glVertex2i(580,638);   ///B1 RIGHT
    glVertex2i(550,658);
    glVertex2i(550,400);
    glVertex2i(580,300);


	glEnd();


	 glBegin(GL_POLYGON);
	glColor3ub(208, 151, 73);


    glVertex2i(520,230);
    glVertex2i(550,230);   ///B1 MID
    glVertex2i(550,658);
    glVertex2i(520,658);
    glVertex2i(520,230);


	glEnd();


	glBegin(GL_POLYGON);
	glColor3ub(132, 96, 48);


    glVertex2i(490,300);
    glVertex2i(520,400);   ///B1 LEFT
    glVertex2i(520,658);
    glVertex2i(490,638);
    glVertex2i(490,300);


	glEnd();



	glBegin(GL_POLYGON);
	glColor3ub(131, 95, 47);


    glVertex2i(585,230);
    glVertex2i(690,230);   ///B2 BOTT
    glVertex2i(690,780);
    glVertex2i(585,780);
    glVertex2i(585,230);



	glEnd();


	glBegin(GL_POLYGON);
	glColor3ub(240, 180, 89);



    glVertex2i(688,230);   ///B2 RIGHT
    glVertex2i(688,778);
    glVertex2i(640,778);
    //glVertex2i(640,780);




	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(248, 246, 223);



    glVertex2i(587,230);   ///B2 LEFT
    glVertex2i(640,778);
    glVertex2i(587,778);

    //glVertex2i(640,780);




	glEnd();




	glBegin(GL_POLYGON);
	glColor3ub(240, 180, 89);



    glVertex2i(590,780);   ///B2 TOP
    glVertex2i(685,780);
    glVertex2i(685,800);
    glVertex2i(590,800);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(240, 180, 89);



    glVertex2i(635,800);   ///B2 TOP2
    glVertex2i(650,800);
    glVertex2i(643,900);


  glEnd();



  ///building 2 design


  glBegin(GL_POLYGON);
	glColor3ub(127, 193, 205);



    glVertex2i(590,350);   ///B2 TOP2
    glVertex2i(595,350);
    glVertex2i(595,750);
    glVertex2i(590,750);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(127, 193, 205);



    glVertex2i(610,550);   ///B2 TOP2
    glVertex2i(615,550);
    glVertex2i(615,750);
    glVertex2i(610,750);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(127, 193, 205);



    glVertex2i(665,550);   ///B2 TOP2
    glVertex2i(670,550);
    glVertex2i(670,750);
    glVertex2i(665,750);


  glEnd();





  glBegin(GL_POLYGON);
	glColor3ub(127, 193, 205);



    glVertex2i(680,350);   ///B2 TOP2
    glVertex2i(685,350);
    glVertex2i(685,750);
    glVertex2i(680,750);


  glEnd();





  ///BR RRRR





  glBegin(GL_POLYGON);
	glColor3ub(209, 209, 199);



    glVertex2i(1400,100);      ///BR  BR1
    glVertex2i(1570,100);
    glVertex2i(1555,160);
    glVertex2i(1415,160);



  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(149, 93, 60);



          ///BR  BR1
    glVertex2i(1415,160);
    glVertex2i(1555,160);
    glVertex2i(1555,170);
    glVertex2i(1415,170);




  glEnd();





  ///seconf pel 2


   glPushMatrix();
  glScalef(0.5, 0.5, 0);
  glTranslatef(900, 200, 0);

     glBegin(GL_POLYGON);
	glColor3ub(166, 37, 40);



                           ///BR  pr12 fs
    glVertex2i(1540,170);
    glVertex2i(1550,170);
    glVertex2i(1550,530);
    glVertex2i(1540,530);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);



                         ///BR  pr12 f2
    glVertex2i(1520,170);
    glVertex2i(1540,170);
    glVertex2i(1540,630);
    glVertex2i(1520,630);





  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);



                               ///BR  pr12 f3
    glVertex2i(1525,630);
    glVertex2i(1535,630);
    glVertex2i(1535,710);
    glVertex2i(1525,710);

  glEnd();


  ///end


  glPopMatrix();







  glBegin(GL_POLYGON);
	glColor3ub(166, 37, 40);



                           ///BR  pr12 fs
    glVertex2i(1540,170);
    glVertex2i(1550,170);
    glVertex2i(1550,530);
    glVertex2i(1540,530);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);



                         ///BR  pr12 f2
    glVertex2i(1520,170);
    glVertex2i(1540,170);
    glVertex2i(1540,630);
    glVertex2i(1520,630);





  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);



                               ///BR  pr12 f3
    glVertex2i(1525,630);
    glVertex2i(1535,630);
    glVertex2i(1535,710);
    glVertex2i(1525,710);

  glEnd();








  glBegin(GL_POLYGON);
	glColor3ub(110, 0, 1);



          ///BR  MBOT
    glVertex2i(1110,230);
    glVertex2i(1900,380);
    glVertex2i(1900,430);
    glVertex2i(1110,240);





  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(129, 29, 29);



                         ///BR  MTOP
    glVertex2i(1110,240);
    glVertex2i(1900,430);
    glVertex2i(1900,480);
    glVertex2i(1110,245);





  glEnd();

///PELE 1 START




  glBegin(GL_POLYGON);
	glColor3ub(166, 37, 40);



                           ///BR  pr11 fs
    glVertex2i(1425,170);
    glVertex2i(1435,170);
    glVertex2i(1435,530);
    glVertex2i(1425,530);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);



                         ///BR  pr11 f2
    glVertex2i(1435,170);
    glVertex2i(1455,170);
    glVertex2i(1455,630);
    glVertex2i(1435,630);





  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);



                               ///BR  pr11 f3
    glVertex2i(1440,630);
    glVertex2i(1450,630);
    glVertex2i(1450,710);
    glVertex2i(1440,710);

  glEnd();



  /// BR2

                ///TOP-1 --BR1


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);





    glVertex2i(1450,690);
    glVertex2i(1450,670);
    glVertex2i(1530,670);
    glVertex2i(1530,690);

    //glVertex2i(1525,630);
    //glVertex2i(1535,630);
   // glVertex2i(1535,710);
   // glVertex2i(1525,710);




  glEnd();


   glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);





    glVertex2i(1450,600);
    glVertex2i(1450,575);
    glVertex2i(1485,580);
    glVertex2i(1530,575);
    glVertex2i(1530,600);
    glVertex2i(1485,595);
    glVertex2i(1450,600);





  glEnd();

  ///


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);





    glVertex2i(1450,520);
    glVertex2i(1450,490);
    glVertex2i(1485,495);
    glVertex2i(1530,490);
    glVertex2i(1530,520);
    glVertex2i(1485,515);
    glVertex2i(1450,520);





  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);





    glVertex2i(1450,440);
    glVertex2i(1450,400);
    glVertex2i(1485,405);
    glVertex2i(1530,400);
    glVertex2i(1530,440);
    glVertex2i(1485,435);
    glVertex2i(1450,440);





  glEnd();


    ///END P1





    ///start p2


    glPushMatrix();
  glScalef(0.5, 0.5, 0);
  glTranslatef(900, 200, 0);

  glBegin(GL_POLYGON);
	glColor3ub(209, 209, 199);



    glVertex2i(1400,100);      ///BR  BR1
    glVertex2i(1570,100);
    glVertex2i(1555,160);
    glVertex2i(1415,160);



  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(149, 93, 60);



          ///BR  BR1
    glVertex2i(1415,160);
    glVertex2i(1555,160);
    glVertex2i(1555,170);
    glVertex2i(1415,170);




  glEnd();




    glBegin(GL_POLYGON);
	glColor3ub(166, 37, 40);



                           ///BR  pr11 fs
    glVertex2i(1425,170);
    glVertex2i(1435,170);
    glVertex2i(1435,530);
    glVertex2i(1425,530);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);



                         ///BR  pr11 f2
    glVertex2i(1435,170);
    glVertex2i(1455,170);
    glVertex2i(1455,630);
    glVertex2i(1435,630);





  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);



                               ///BR  pr11 f3
    glVertex2i(1440,630);
    glVertex2i(1450,630);
    glVertex2i(1450,710);
    glVertex2i(1440,710);

  glEnd();



  /// BR2



                            ///TOP-1 --BR1


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);





    glVertex2i(1450,690);
    glVertex2i(1450,670);
    glVertex2i(1530,670);
    glVertex2i(1530,690);

    //glVertex2i(1525,630);
    //glVertex2i(1535,630);
   // glVertex2i(1535,710);
   // glVertex2i(1525,710);




  glEnd();


   glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);





    glVertex2i(1450,600);
    glVertex2i(1450,575);
    glVertex2i(1485,580);
    glVertex2i(1530,575);
    glVertex2i(1530,600);
    glVertex2i(1485,595);
    glVertex2i(1450,600);





  glEnd();

  ///


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);





    glVertex2i(1450,520);
    glVertex2i(1450,490);
    glVertex2i(1485,495);
    glVertex2i(1530,490);
    glVertex2i(1530,520);
    glVertex2i(1485,515);
    glVertex2i(1450,520);





  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);





    glVertex2i(1450,440);
    glVertex2i(1450,400);
    glVertex2i(1485,405);
    glVertex2i(1530,400);
    glVertex2i(1530,440);
    glVertex2i(1485,435);
    glVertex2i(1450,440);





  glEnd();
  glPopMatrix();

    ///END P





    ///rope p1




    glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);





    glVertex2i(1450,670);
    glVertex2i(1450,665);
    glVertex2i(1750,425);
    glVertex2i(1755,430);
    //glVertex2i(1530,440);
    //glVertex2i(1485,435);
    //glVertex2i(1450,440);





  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(128, 50, 29);





    glVertex2i(1755,430);
    glVertex2i(1750,425);
    glVertex2i(1950,700);
    glVertex2i(1950,705);

    //glVertex2i(1530,440);
    //glVertex2i(1485,435);
    //glVertex2i(1450,440);





  glEnd();


  ///rope2


  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);





    glVertex2i(1520,680);
    glVertex2i(1515,675);
    glVertex2i(1850,445);
    glVertex2i(1855,450);
    //glVertex2i(1530,440);
    //glVertex2i(1485,435);
    //glVertex2i(1450,440);





  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);





    glVertex2i(1855,450);
    glVertex2i(1850,445);
    glVertex2i(1950,600);
    glVertex2i(1950,605);

    //glVertex2i(1530,440);
    //glVertex2i(1485,435);
    //glVertex2i(1450,440);





  glEnd();



  /// rope p1 left


  ///rope p1




    glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);




    glVertex2i(1300,295);
    glVertex2i(1305,290);
    glVertex2i(1450,665);
    glVertex2i(1450,670);

    //glVertex2i(1530,440);
    //glVertex2i(1485,435);
    //glVertex2i(1450,440);





  glEnd();

  ///rope p2




    glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);




    glVertex2i(1400,310);
    glVertex2i(1405,305);
    glVertex2i(1535,665);
    glVertex2i(1530,670);

    //glVertex2i(1530,440);
    //glVertex2i(1485,435);
    //glVertex2i(1450,440);





  glEnd();


   ///rope p1




    glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);


    glVertex2i(1180,435);
    glVertex2i(1180,430);
    glVertex2i(1300,290);
    glVertex2i(1300,295);




    //glVertex2i(1530,440);
    //glVertex2i(1485,435);
    //glVertex2i(1450,440);





  glEnd();

  ///rope p2




    glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);




    glVertex2i(1215,435);
    glVertex2i(1215,430);
    glVertex2i(1350,305);
    glVertex2i(1350,310);


    //glVertex2i(1530,440);
    //glVertex2i(1485,435);
    //glVertex2i(1450,440);





  glEnd();


   ///rope p1




    glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);



    glVertex2i(1185,430);
    glVertex2i(1180,435);
    glVertex2i(1130,245);
    glVertex2i(1125,250);




    //glVertex2i(1530,440);
    //glVertex2i(1485,435);
    //glVertex2i(1450,440);





  glEnd();

  ///rope p2




    glBegin(GL_POLYGON);
	glColor3ub(128, 28, 29);






    glVertex2i(1215,435);
    glVertex2i(1220,430);

    glVertex2i(1150,245);
    glVertex2i(1155,250);

    //glVertex2i(1530,440);
    //glVertex2i(1485,435);
    //glVertex2i(1450,440);





  glEnd();




  ///BUILDING BACK BLUE 3  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






    glVertex2i(720,650);
    glVertex2i(690,630);
    glVertex2i(690,230);    ///BACK
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(720,870);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(60, 187, 219);






                             ///SAD
    glVertex2i(850,230);
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(800,870);


  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP1

    glVertex2i(755,885);
    glVertex2i(755,870);
    glVertex2i(820,870);
    glVertex2i(820,885);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP2

    glVertex2i(770,900);
    glVertex2i(770,885);

    glVertex2i(805,885);
    glVertex2i(805,900);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           /// PIN

    glVertex2i(780,900);
    glVertex2i(795,900);
    glVertex2i(787.5,960);


  glEnd();








  ///BUILDING BACK  4  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






                             ///BACK


    glVertex2i(890,550);
    glVertex2i(880,550);
    glVertex2i(880,230);
    glVertex2i(980,230);
    glVertex2i(980,550);
    glVertex2i(970,550);
    glVertex2i(970,600);
    glVertex2i(970,900);

    glVertex2i(890,800);
    //glVertex2i(890,600);



  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(780,610);
    glVertex2i(790,610);
    glVertex2i(790,630);
    glVertex2i(780,630);
    glVertex2i(780,610);




  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(715,610);
    glVertex2i(725,610);
    glVertex2i(725,630);
    glVertex2i(715,630);
    //glVertex2i(780,610);




  glEnd();


                                            ///SMALL HOUSE BACK


 glPushMatrix();

 glScalef(0.2,0.2,0);
 glTranslatef(-700,1000,0);


 ///BUILDING BACK BLUE 3  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






    glVertex2i(720,650);
    glVertex2i(690,630);
    glVertex2i(690,230);    ///BACK
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(720,870);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(60, 187, 219);






                             ///SAD
    glVertex2i(850,230);
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(800,870);


  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP1

    glVertex2i(755,885);
    glVertex2i(755,870);
    glVertex2i(820,870);
    glVertex2i(820,885);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP2

    glVertex2i(770,900);
    glVertex2i(770,885);

    glVertex2i(805,885);
    glVertex2i(805,900);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           /// PIN

    glVertex2i(780,900);
    glVertex2i(795,900);
    glVertex2i(787.5,960);


  glEnd();








  ///BUILDING BACK  4  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






                             ///BACK


    glVertex2i(890,550);
    glVertex2i(880,550);
    glVertex2i(880,230);
    glVertex2i(980,230);
    glVertex2i(980,550);
    glVertex2i(970,550);
    glVertex2i(970,600);
    glVertex2i(970,900);

    glVertex2i(890,800);
    //glVertex2i(890,600);



  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(780,610);
    glVertex2i(790,610);
    glVertex2i(790,630);
    glVertex2i(780,630);
    glVertex2i(780,610);




  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(715,610);
    glVertex2i(725,610);
    glVertex2i(725,630);
    glVertex2i(715,630);
    //glVertex2i(780,610);




  glEnd();
 glPopMatrix();


                                           ///SMALL HOUSE BACK END












  ///BUILDING FONNT  3  START



  glBegin(GL_POLYGON);
	glColor3ub(179, 179, 179);

                           ///BACK


    glVertex2i(700,620);
    glVertex2i(700,220);
    glVertex2i(810,220);
    glVertex2i(810,560);
    glVertex2i(800,560);
    glVertex2i(800,620);




  glEnd();

   glBegin(GL_POLYGON);
	glColor3ub(94, 94, 94);

                           ///FONT Y





    glVertex2i(760,540);
    glVertex2i(760,220);
    glVertex2i(770,220);
    glVertex2i(770,540);
    glVertex2i(810,540);
    glVertex2i(810,550);
    glVertex2i(770,550);
    glVertex2i(700,580);
    glVertex2i(700,580);
    glVertex2i(700,570);




  glEnd();





  ///BUILDING FONNT  5  START



  glBegin(GL_POLYGON);
	glColor3ub(70, 49, 28);

                           ///BACK


    glVertex2i(950,410);
    glVertex2i(950,300);
    glVertex2i(950,230);
    glVertex2i(1020,230);
    glVertex2i(1020,270);
    glVertex2i(1050,270);
    glVertex2i(1050,230);
    glVertex2i(1110,230);
    glVertex2i(1110,300);
    glVertex2i(1110,410);




  glEnd();



   glBegin(GL_POLYGON);
	glColor3ub(239, 188, 113);

                           ///BACK


    glVertex2i(1020,275);
    glVertex2i(1025,275);
    glVertex2i(1025,430);
    glVertex2i(1020,430);





  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(239, 188, 113);

                           ///BACK


    glVertex2i(1040,275);
    glVertex2i(1045,275);
    glVertex2i(1045,430);
    glVertex2i(1040,430);





  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(239, 188, 113);

                           ///BACK


    glVertex2i(1030,275);
    glVertex2i(1035,275);
    glVertex2i(1035,430);
    glVertex2i(1030,430);






  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///BACK


    glVertex2i(1070,250);
    glVertex2i(1080,250);
    glVertex2i(1080,400);
    glVertex2i(1070,400);






  glEnd();


   glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///BACK


    glVertex2i(980,250);
    glVertex2i(990,250);
    glVertex2i(990,400);
    glVertex2i(980,400);






  glEnd();









  glBegin(GL_POLYGON);
	glColor3ub(238, 178, 90);

                           ///BACK



    glVertex2i(1020,230);
    glVertex2i(1020,270);
    glVertex2i(1050,270);
    glVertex2i(1050,230);





  glEnd();




  glBegin(GL_POLYGON);
	glColor3ub(91, 64, 32);

                           ///BACK


    glVertex2i(960,430);
    glVertex2i(970,410);
    glVertex2i(1090,410);
    glVertex2i(1100,430);




  glEnd();



   glBegin(GL_POLYGON);
	glColor3ub(236, 179, 90);

                           ///TOP


    glVertex2i(990,640);
    glVertex2i(990,430);
    glVertex2i(1070,430);
    glVertex2i(1070,640);




  glEnd();


   glBegin(GL_POLYGON);
	glColor3ub(69, 49, 28);

                           ///TOP


    glVertex2i(1000,700);
    glVertex2i(1000,640);

    glVertex2i(1060,640);
    glVertex2i(1060,700);




  glEnd();



     glBegin(GL_POLYGON);
	glColor3ub(239, 192, 118);

                           ///TOP


    glVertex2i(1020,750);
    glVertex2i(1000,700);

    glVertex2i(1060,700);
    glVertex2i(1040,750);




  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(69, 49, 28);

                           ///TOP


    glVertex2i(1000,710);
    glVertex2i(1000,700);

    glVertex2i(1060,700);
    glVertex2i(1060,710);




  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(133, 96, 48);

                           ///TOP


    glVertex2i(1025,750);

    glVertex2i(1035,750);
    glVertex2i(1030,850);




  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(70, 49, 28);

                           ///BACK


    glVertex2i(1020,435);
    glVertex2i(1025,435);
    glVertex2i(1025,640);
    glVertex2i(1020,640);

  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(70, 49, 28);

                           ///BACK


    glVertex2i(1005,435);
    glVertex2i(1010,435);
    glVertex2i(1010,640);
    glVertex2i(1005,640);

  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(70, 49, 28);

                           ///BACK


    glVertex2i(1035,435);
    glVertex2i(1040,435);
    glVertex2i(1040,640);
    glVertex2i(1035,640);

  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(70, 49, 28);

                           ///BACK


    glVertex2i(1050,435);
    glVertex2i(1055,435);
    glVertex2i(1055,640);
    glVertex2i(1050,640);

  glEnd();





  ///B4 START


  glBegin(GL_POLYGON);
	glColor3ub(13, 57, 84);

                           ///BACK


    glVertex2i(915,700);
    glVertex2i(815,700);
    glVertex2i(815,220);
    glVertex2i(945,220);
    glVertex2i(945,700);
    glVertex2i(915,700);
  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(9, 34, 53);

                           ///SAD


    glVertex2i(915,700);
    glVertex2i(915,220);
    glVertex2i(945,220);
    glVertex2i(945,700);
  glEnd();







             ///B4 WINDOW START








  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L 1--1


    glVertex2i(830,670);
    glVertex2i(830,650);
    glVertex2i(850,650);
    glVertex2i(850,670);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L 1--2


    glVertex2i(860,670);
    glVertex2i(860,650);
    glVertex2i(880,650);
    glVertex2i(880,670);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L  1--3

     glVertex2i(890,670);
    glVertex2i(890,650);
    glVertex2i(910,650);
    glVertex2i(910,670);
  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L 2 --1


    glVertex2i(830,640);
    glVertex2i(830,620);
    glVertex2i(850,620);
    glVertex2i(850,640);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L 2 --2


    glVertex2i(860,640);
    glVertex2i(860,620);
    glVertex2i(880,620);
    glVertex2i(880,640);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L 2-- 3

     glVertex2i(890,640);
    glVertex2i(890,620);
    glVertex2i(910,620);
    glVertex2i(910,640);
  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L 3 --1


    glVertex2i(830,610);
    glVertex2i(830,590);
    glVertex2i(850,590);
    glVertex2i(850,610);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L 3 --2


    glVertex2i(860,610);
    glVertex2i(860,590);
    glVertex2i(880,590);
    glVertex2i(880,610);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L 3- 3

     glVertex2i(890,610);
    glVertex2i(890,590);
    glVertex2i(910,590);
    glVertex2i(910,610);
  glEnd();




  ///444


   glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L 4 --1


    glVertex2i(830,580);
    glVertex2i(830,560);
    glVertex2i(850,560);
    glVertex2i(850,580);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L 4 --2


    glVertex2i(860,580);
    glVertex2i(860,560);
    glVertex2i(880,560);
    glVertex2i(880,580);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L 4- 3

     glVertex2i(890,580);
    glVertex2i(890,560);
    glVertex2i(910,560);
    glVertex2i(910,580);
  glEnd();


/// 555


   glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L 5 --1


    glVertex2i(830,550);
    glVertex2i(830,530);
    glVertex2i(850,530);
    glVertex2i(850,550);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L 5 --2


    glVertex2i(860,550);
    glVertex2i(860,530);
    glVertex2i(880,530);
    glVertex2i(880,550);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L 5- 3

     glVertex2i(890,550);
    glVertex2i(890,530);
    glVertex2i(910,530);
    glVertex2i(910,550);
  glEnd();




  ///666

  glPushMatrix();
  glTranslatef(0,-30,0);

  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L  --1


    glVertex2i(830,550);
    glVertex2i(830,530);
    glVertex2i(850,530);
    glVertex2i(850,550);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L  --2


    glVertex2i(860,550);
    glVertex2i(860,530);
    glVertex2i(880,530);
    glVertex2i(880,550);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L - 3

     glVertex2i(890,550);
    glVertex2i(890,530);
    glVertex2i(910,530);
    glVertex2i(910,550);
  glEnd();







  glPopMatrix();


  ///777

  glPushMatrix();
  glTranslatef(0,-60,0);

  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L  --1


    glVertex2i(830,550);
    glVertex2i(830,530);
    glVertex2i(850,530);
    glVertex2i(850,550);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L  --2


    glVertex2i(860,550);
    glVertex2i(860,530);
    glVertex2i(880,530);
    glVertex2i(880,550);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L - 3

     glVertex2i(890,550);
    glVertex2i(890,530);
    glVertex2i(910,530);
    glVertex2i(910,550);
  glEnd();







  glPopMatrix();



  ///888

  glPushMatrix();
  glTranslatef(0,-90,0);

  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L  --1


    glVertex2i(830,550);
    glVertex2i(830,530);
    glVertex2i(850,530);
    glVertex2i(850,550);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L  --2


    glVertex2i(860,550);
    glVertex2i(860,530);
    glVertex2i(880,530);
    glVertex2i(880,550);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L - 3

     glVertex2i(890,550);
    glVertex2i(890,530);
    glVertex2i(910,530);
    glVertex2i(910,550);
  glEnd();







  glPopMatrix();


  /// 9

  glPushMatrix();
  glTranslatef(0,-120,0);

  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L  --1


    glVertex2i(830,550);
    glVertex2i(830,530);
    glVertex2i(850,530);
    glVertex2i(850,550);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L  --2


    glVertex2i(860,550);
    glVertex2i(860,530);
    glVertex2i(880,530);
    glVertex2i(880,550);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L - 3

     glVertex2i(890,550);
    glVertex2i(890,530);
    glVertex2i(910,530);
    glVertex2i(910,550);
  glEnd();







  glPopMatrix();



  ///10

  glPushMatrix();
  glTranslatef(0,-150,0);

  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L  --1


    glVertex2i(830,550);
    glVertex2i(830,530);
    glVertex2i(850,530);
    glVertex2i(850,550);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L  --2


    glVertex2i(860,550);
    glVertex2i(860,530);
    glVertex2i(880,530);
    glVertex2i(880,550);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L - 3

     glVertex2i(890,550);
    glVertex2i(890,530);
    glVertex2i(910,530);
    glVertex2i(910,550);
  glEnd();







  glPopMatrix();


  ///11

  glPushMatrix();
  glTranslatef(0,-180,0);

  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L  --1


    glVertex2i(830,550);
    glVertex2i(830,530);
    glVertex2i(850,530);
    glVertex2i(850,550);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L  --2


    glVertex2i(860,550);
    glVertex2i(860,530);
    glVertex2i(880,530);
    glVertex2i(880,550);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L - 3

     glVertex2i(890,550);
    glVertex2i(890,530);
    glVertex2i(910,530);
    glVertex2i(910,550);
  glEnd();







  glPopMatrix();


  ///12

  glPushMatrix();
  glTranslatef(0,-210,0);

  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L  --1


    glVertex2i(830,550);
    glVertex2i(830,530);
    glVertex2i(850,530);
    glVertex2i(850,550);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L  --2


    glVertex2i(860,550);
    glVertex2i(860,530);
    glVertex2i(880,530);
    glVertex2i(880,550);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L - 3

     glVertex2i(890,550);
    glVertex2i(890,530);
    glVertex2i(910,530);
    glVertex2i(910,550);
  glEnd();







  glPopMatrix();


  ///13

  glPushMatrix();
  glTranslatef(0,-240,0);

  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L  --1


    glVertex2i(830,550);
    glVertex2i(830,530);
    glVertex2i(850,530);
    glVertex2i(850,550);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L  --2


    glVertex2i(860,550);
    glVertex2i(860,530);
    glVertex2i(880,530);
    glVertex2i(880,550);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L - 3

     glVertex2i(890,550);
    glVertex2i(890,530);
    glVertex2i(910,530);
    glVertex2i(910,550);
  glEnd();







  glPopMatrix();


  ///14

  glPushMatrix();
  glTranslatef(0,-270,0);

  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L  --1


    glVertex2i(830,550);
    glVertex2i(830,530);
    glVertex2i(850,530);
    glVertex2i(850,550);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L  --2


    glVertex2i(860,550);
    glVertex2i(860,530);
    glVertex2i(880,530);
    glVertex2i(880,550);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L - 3

     glVertex2i(890,550);
    glVertex2i(890,530);
    glVertex2i(910,530);
    glVertex2i(910,550);
  glEnd();







  glPopMatrix();


  ///15

  glPushMatrix();
  glTranslatef(0,-300,0);

  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L  --1


    glVertex2i(830,550);
    glVertex2i(830,530);
    glVertex2i(850,530);
    glVertex2i(850,550);

  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L  --2


    glVertex2i(860,550);
    glVertex2i(860,530);
    glVertex2i(880,530);
    glVertex2i(880,550);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

                           ///WINDOW TOP L - 3

     glVertex2i(890,550);
    glVertex2i(890,530);
    glVertex2i(910,530);
    glVertex2i(910,550);
  glEnd();







  glPopMatrix();



///WINDOW END




                                        ///tree start 1


   glPushMatrix();
   glTranslatef(640,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--1
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(660,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--2
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(685,320,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(705,340,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

     glPushMatrix();
   glTranslatef(685,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--4
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

   glPushMatrix();
   glTranslatef(660,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=25;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();






    //glPushMatrix();
   //glTranslatef(650,360,0);
    glBegin(GL_POLYGON);                  ///tree bot
    glColor3ub(136, 31, 29);




    glVertex2i(668,220);
    glVertex2i(677,220);
    glVertex2i(677,320);
    glVertex2i(675,325);
    //glVertex2i(660,310);
    //glVertex2i(650,320);
    //glVertex2i(660,320);
    glVertex2i(668,310);
    //glVertex2i(660,330);

    glEnd();



   //glPopMatrix();



///tree 1 end 1





///                                   ///tree start 2


   glPushMatrix(); ///TREE TRANSLATE
   glTranslatef(250,-15,0);







   glPushMatrix();
   glTranslatef(640,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--1
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(660,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--2
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(685,320,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(705,340,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

     glPushMatrix();
   glTranslatef(685,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--4
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

   glPushMatrix();
   glTranslatef(660,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=25;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();






    //glPushMatrix();
   //glTranslatef(650,360,0);
    glBegin(GL_POLYGON);                  ///tree bot
    glColor3ub(136, 31, 29);




    glVertex2i(668,220);
    glVertex2i(677,220);
    glVertex2i(677,320);
    glVertex2i(675,325);
    //glVertex2i(660,310);
    //glVertex2i(650,320);
    //glVertex2i(660,320);
    glVertex2i(668,310);
    //glVertex2i(660,330);

    glEnd();






   glPopMatrix();



///tree  2 end












                                              ///TREE 3 START


 glPushMatrix(); ///TREE TRANSLATE
   glTranslatef(430,-25,0);







   glPushMatrix();
   glTranslatef(640,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--1
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(660,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--2
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(685,320,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(705,340,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

     glPushMatrix();
   glTranslatef(685,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--4
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

   glPushMatrix();
   glTranslatef(660,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=25;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y);
	}
	glEnd();

   glPopMatrix();






    //glPushMatrix();
   //glTranslatef(650,360,0);
    glBegin(GL_POLYGON);                  ///tree bot
    glColor3ub(136, 31, 29);




    glVertex2i(668,220);
    glVertex2i(677,220);
    glVertex2i(677,320);
    glVertex2i(675,325);
    //glVertex2i(660,310);
    //glVertex2i(650,320);
    //glVertex2i(660,320);
    glVertex2i(668,310);
    //glVertex2i(660,330);

    glEnd();






   glPopMatrix();



///tree  3 end







                                              ///TREE 4 START


 glPushMatrix(); ///TREE TRANSLATE
 glScalef(0.6,0.6,0);
   glTranslatef(2300,150,0);







   glPushMatrix();
   glTranslatef(640,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--1
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(660,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--2
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(685,320,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(705,340,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

     glPushMatrix();
   glTranslatef(685,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--4
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

   glPushMatrix();
   glTranslatef(660,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=25;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y);
	}
	glEnd();

   glPopMatrix();






    //glPushMatrix();
   //glTranslatef(650,360,0);
    glBegin(GL_POLYGON);                  ///tree bot
    glColor3ub(136, 31, 29);




    glVertex2i(668,220);
    glVertex2i(677,220);
    glVertex2i(677,320);
    glVertex2i(675,325);
    //glVertex2i(660,310);
    //glVertex2i(650,320);
    //glVertex2i(660,320);
    glVertex2i(668,310);
    //glVertex2i(660,330);

    glEnd();






   glPopMatrix();



///tree  4 end


                                            ///TREE 5 START


 glPushMatrix(); ///TREE TRANSLATE
 //glScalef(0.6,0.6,0);
   glTranslatef(1000,-70,0);







   glPushMatrix();
   glTranslatef(640,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--1
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(660,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--2
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(685,320,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(705,340,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

     glPushMatrix();
   glTranslatef(685,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--4
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

   glPushMatrix();
   glTranslatef(660,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=25;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y);
	}
	glEnd();

   glPopMatrix();






    //glPushMatrix();
   //glTranslatef(650,360,0);






   glPopMatrix();



///tree  5 end






                             /// background building



                             glPushMatrix();
                             glScalef(0.3,0.3,0);
                            glTranslatef(0,600,0);

       glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(220,700);
    glVertex2i(220,600);
    glVertex2i(200,600);
    glVertex2i(200,220);
    glVertex2i(300,220);
    glVertex2i(300,600);
    glVertex2i(280,600);
    glVertex2i(280,700);


    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(320,700);
    glVertex2i(320,600);
    glVertex2i(310,600);
    glVertex2i(310,220);
    glVertex2i(380,220);
    glVertex2i(380,600);



    glEnd();


glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);





    glVertex2i(410,600);
    glVertex2i(410,220);
    glVertex2i(480,220);
    glVertex2i(480,600);
    glVertex2i(445,800);



    glEnd();

    glPopMatrix();

       ///end;;;





       ///              small house back step 2


       glPushMatrix();
       glScalef(1.2,1.2,0);
       glTranslatef(130,-45,0);




       glPushMatrix();

 glScalef(0.2,0.2,0);
 glTranslatef(-700,1000,0);


 ///BUILDING BACK BLUE 3  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






    glVertex2i(720,650);
    glVertex2i(690,630);
    glVertex2i(690,230);    ///BACK
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(720,870);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(60, 187, 219);






                             ///SAD
    glVertex2i(850,230);
    glVertex2i(880,230);
    glVertex2i(880,630);
    glVertex2i(850,650);
    glVertex2i(850,870);
    glVertex2i(800,870);


  glEnd();



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP1

    glVertex2i(755,885);
    glVertex2i(755,870);
    glVertex2i(820,870);
    glVertex2i(820,885);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           ///TOP2

    glVertex2i(770,900);
    glVertex2i(770,885);

    glVertex2i(805,885);
    glVertex2i(805,900);


  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);



                           /// PIN

    glVertex2i(780,900);
    glVertex2i(795,900);
    glVertex2i(787.5,960);


  glEnd();








  ///BUILDING BACK  4  START



  glBegin(GL_POLYGON);
	glColor3ub(20, 138, 188);






                             ///BACK


    glVertex2i(890,550);
    glVertex2i(880,550);
    glVertex2i(880,230);
    glVertex2i(980,230);
    glVertex2i(980,550);
    glVertex2i(970,550);
    glVertex2i(970,600);
    glVertex2i(970,900);

    glVertex2i(890,800);
    //glVertex2i(890,600);



  glEnd();


  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(780,610);
    glVertex2i(790,610);
    glVertex2i(790,630);
    glVertex2i(780,630);
    glVertex2i(780,610);




  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(0,0,0);






                             ///TOP



    //glVertex2i(700,620);
    glVertex2i(715,610);
    glVertex2i(725,610);
    glVertex2i(725,630);
    glVertex2i(715,630);
    //glVertex2i(780,610);




  glEnd();
 glPopMatrix();


                                           ///SMALL HOUSE BACK END



                             glPushMatrix();
                             glScalef(0.3,0.3,0);
                            glTranslatef(0,600,0);

       glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(220,700);
    glVertex2i(220,600);
    glVertex2i(200,600);
    glVertex2i(200,220);
    glVertex2i(300,220);
    glVertex2i(300,600);
    glVertex2i(280,600);
    glVertex2i(280,700);


    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);




    glVertex2i(320,700);
    glVertex2i(320,600);
    glVertex2i(310,600);
    glVertex2i(310,220);
    glVertex2i(380,220);
    glVertex2i(380,600);



    glEnd();


glBegin(GL_POLYGON);
    glColor3ub(66, 138, 183);





    glVertex2i(410,600);
    glVertex2i(410,220);
    glVertex2i(480,220);
    glVertex2i(480,600);
    glVertex2i(445,800);



    glEnd();

    glPopMatrix();



       glPopMatrix();






       ///sma;ll house back strep 2 end





                                      ///ship -----start

   glPushMatrix();
    glTranslatef(_ang_tri, 0.0, 0.0);
glPushMatrix();
glScalef(0.7,0.7,0);


              glBegin(GL_POLYGON);
    glColor3ub(243, 99, 91);





    glVertex2i(570,80);
    glVertex2i(580,50);
    glVertex2i(910,50);
    glVertex2i(920,70);




    glEnd();

              glBegin(GL_POLYGON);
    glColor3ub(90, 69, 68);





    glVertex2i(550,120);
    glVertex2i(570,80);
    glVertex2i(920,70);
    glVertex2i(920,100);




    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(90, 69, 68);





    glVertex2i(620,140);
    glVertex2i(620,120);
    glVertex2i(890,110);
    glVertex2i(890,140);





    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(70, 49, 48);





    glVertex2i(680,160);
    glVertex2i(680,140);
    glVertex2i(870,140);
    glVertex2i(870,160);





    glEnd();


     glBegin(GL_POLYGON);
    glColor3ub(215, 217, 214);





    glVertex2i(545,130);
    glVertex2i(545,120);
    glVertex2i(930,100);
    glVertex2i(930,110);




    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(215, 217, 214);





    glVertex2i(678,170);
    glVertex2i(678,160);
    glVertex2i(872,160);
    glVertex2i(872,170);





    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(215, 217, 214);





    glVertex2i(835,190);
    glVertex2i(835,170);
    glVertex2i(860,170);
    glVertex2i(860,190);





    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(192, 67, 65);





    glVertex2i(835,195);
    glVertex2i(835,185);
    glVertex2i(860,185);
    glVertex2i(860,195);





    glEnd();



    glPushMatrix();
    glTranslatef(-50,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(215, 217, 214);





    glVertex2i(835,190);
    glVertex2i(835,170);
    glVertex2i(860,170);
    glVertex2i(860,190);





    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(192, 67, 65);





    glVertex2i(835,195);
    glVertex2i(835,185);
    glVertex2i(860,185);
    glVertex2i(860,195);





    glEnd();




    glPopMatrix();




                           ///sheep end


glPopMatrix();

glPopMatrix();
             ///Nb0    start


             glBegin(GL_POLYGON);
    glColor3ub(218, 223, 188);

    glVertex2i(370,220);
    glVertex2i(480,220);
    glVertex2i(480,700);
    glVertex2i(370,700);

    glEnd();



             glBegin(GL_POLYGON);
    glColor3ub(139, 142, 122);

    glVertex2i(360,700);
    glVertex2i(490,700);
    glVertex2i(490,710);
    glVertex2i(360,710);

    glEnd();

      glBegin(GL_POLYGON);
    glColor3ub(218, 223, 188);

    glVertex2i(360,710);
    glVertex2i(490,710);
    glVertex2i(490,730);
    glVertex2i(360,730);

    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(139, 142, 122);

    glVertex2i(370,730);
    glVertex2i(480,730);
    glVertex2i(430,780);
    glVertex2i(420,780);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(177, 181, 157);

    glVertex2i(425,730);
    glVertex2i(480,730);
    glVertex2i(430,780);
    glVertex2i(425,780);



    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(139, 142, 122);


    glVertex2i(420,780);
    glVertex2i(430,780);
    glVertex2i(425,850);


    glEnd();



                    /// B0 WINDOW


                    ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();


    ///WIN 2

    glPushMatrix();
    glTranslatef(0,-30,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();







    ///WIN 3

    glPushMatrix();
    glTranslatef(0,-60,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();



    ///WIN 4

    glPushMatrix();
    glTranslatef(0,-90,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();




    ///WIN 5

    glPushMatrix();
    glTranslatef(0,-120,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();




    ///WIN 6

    glPushMatrix();
    glTranslatef(0,-150,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();




    ///WIN 7

    glPushMatrix();
    glTranslatef(0,-180,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();




    ///WIN 8

    glPushMatrix();
    glTranslatef(0,-210,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();





    ///------------------------------------------------------------------///

    ///WIN 9

    glPushMatrix();
    glTranslatef(0,-240,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();





    ///------------------------------------------------------------------///

    ///WIN 10

    glPushMatrix();
    glTranslatef(0,-270,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();




    ///------------------------------------------------------------------///

    ///WIN 11

    glPushMatrix();
    glTranslatef(0,-300,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();




    ///------------------------------------------------------------------///

    ///WIN 12

    glPushMatrix();
    glTranslatef(0,-330,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();




    ///------------------------------------------------------------------///

    ///WIN 13

    glPushMatrix();
    glTranslatef(0,-360,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();





    ///------------------------------------------------------------------///

    ///WIN 14

    glPushMatrix();
    glTranslatef(0,-390,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();




    ///------------------------------------------------------------------///

    ///WIN 15

    glPushMatrix();
    glTranslatef(0,-420,0);

      ///111

             glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1
    glVertex2i(405,660);
    glVertex2i(405,680);


    glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(385,680);
    glVertex2i(385,660);     ///L1 2
    glVertex2i(405,660);



    glEnd();
            ///222

    glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2
    glVertex2i(435,660);
    glVertex2i(435,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(415,680);
    glVertex2i(415,660);     ///L2 2
    glVertex2i(435,660);



    glEnd();
///333

glBegin(GL_POLYGON);
    glColor3ub(156, 215, 247);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2
    glVertex2i(465,660);
    glVertex2i(465,680);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(123, 169, 193);


    glVertex2i(445,680);
    glVertex2i(445,660);     ///L2 2
    glVertex2i(465,660);



    glEnd();
    glPopMatrix();









                    ///WINDOW END



             ///NB0   end




///tree start n


   glPushMatrix(); ///TREE TRANSLATE
   glTranslatef(-310,-15,0);







   glPushMatrix();
   glTranslatef(640,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--1
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(660,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--2
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(685,320,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(705,340,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

     glPushMatrix();
   glTranslatef(685,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--4
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

   glPushMatrix();
   glTranslatef(660,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=25;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();






    //glPushMatrix();
   //glTranslatef(650,360,0);
    glBegin(GL_POLYGON);                  ///tree bot
    glColor3ub(136, 31, 29);




    glVertex2i(668,220);
    glVertex2i(677,220);
    glVertex2i(677,320);
    glVertex2i(675,325);
    //glVertex2i(660,310);
    //glVertex2i(650,320);
    //glVertex2i(660,320);
    glVertex2i(668,310);
    //glVertex2i(660,330);

    glEnd();






   glPopMatrix();


   ///tree start n


   glPushMatrix(); ///TREE TRANSLATE
   glTranslatef(-120,-90,0);







   glPushMatrix();
   glTranslatef(640,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--1
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(660,330,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--2
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(685,320,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();


   glPushMatrix();
   glTranslatef(705,340,0);

    glBegin(GL_POLYGON);

    glColor3f(0.80, 0.47, 0.06);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

     glPushMatrix();
   glTranslatef(685,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--4
		float r=20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();

   ///

   glPushMatrix();
   glTranslatef(660,360,0);

    glBegin(GL_POLYGON);

    glColor3f(0.95, 0.89, 0.36);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;    ///t1 l--3
		float r=25;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

   glPopMatrix();






    //glPushMatrix();
   //glTranslatef(650,360,0);






   glPopMatrix();








    glFlush();
	glutSwapBuffers();


//	glutTimerFunc(1500,demo_night,0);
    //glFlush();
}///end disply DAY



/*void demo_day()
{
       glutDisplayFunc(display);

}*/


  ///NIGHT





                                              ///end///

                          ///--------------------DAY---------------------///
                          ///--------------------DAY---------------------///
                          ///--------------------DAY---------------------///
                          ///--------------------DAY---------------------///
                          ///--------------------DAY---------------------///
                          ///--------------------DAY---------------------///
                          ///--------------------DAY---------------------///
                          ///--------------------DAY---------------------///
                          ///--------------------DAY---------------------///
                          ///--------------------DAY---------------------///
                          ///--------------------DAY---------------------///
                          ///--------------------DAY---------------------///






void update(int value) {

	_run += 1.0f;
	if (_run > 1920)
    {
        _run = -550;
    }

    _run1 += 1.5f;
	if (_run1 > 1920)
    {
        _run1 = -700;
    }

    _run2 += 3.5f;
	if (_run2 > 1920)
    {
        _run2 = -1200;
    }

     _run3 += 4.0f;
	if (_run3 > 1920)
    {
        _run3 = -1400;
    }

    if(onOff){
	_ang_tri += 2.5f;
	if (_ang_tri > 1000){
		_ang_tri = 1300;
	}
	 }

	glutPostRedisplay(); //Tell GLUT that the display has changed
	glutTimerFunc(25, update, 0);
}









//int sp=5;


void shipForword(int value){
if(bck){

    _ang_tri -= 2.2f;

     if (_ang_tri < -700) {
		_ang_tri = 1700;
	}
	glutPostRedisplay();
	glutTimerFunc(10, shipForword, 0);
}
}


void Rain(int value){

if(rainday){

    _rain += 0.01f;

    glBegin(GL_POINTS);
    for(int i=1;i<=1000;i++)
    {
        int x=rand(),y=rand();
        x%=2000; y%=1100;
        glBegin(GL_LINES);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2d(x,y);
        glVertex2d(x+5,y+5);
        glEnd();
    }

	glutPostRedisplay();
	glutTimerFunc(5, Rain, 0);

    glFlush();

}
}



void myKeyboard(unsigned char key, int x, int y){
	switch (key)
	{
	case 'a':
        frd = false;
	    bck = true;
	    shipForword(_ang_tri);
	break;

	case 's':
        frd = false;
        bck = false;
	break;

	case 'n':
        night = true;
        glutDisplayFunc(Night);
        break;

    case 'd':
        night = false;
        glutDisplayFunc(display);
        break;

     case 'r':
        rainday = true;
        Rain(_rain);
        sndPlaySound("Rain_sound.wav",SND_ASYNC|SND_LOOP);

    break;

    case 't':
        rainday = false;
		sndPlaySound(NULL,SND_ASYNC);
		sndPlaySound("sss.wav",SND_ASYNC);
        break;




	default:
	break;
	}
}







int main(int argc,char **argv)
{
    cout << endl <<endl<<"\t\t\t\t\t ======= New work city =======" << endl << endl;


    cout << "\t\t\t\t\t Press A --> To Forward the SHIP" << endl << endl;
    cout << "\t\t\t\t\t Press S -->  To STOP the SHIP" << endl << endl;
    cout << "\t\t\t\t\t Press N -->    FOR NIGHT" << endl << endl;
    cout << "\t\t\t\t\t Press D -->    FOR DAY" << endl << endl;
    cout << "\t\t\t\t\t Press R -->    To Start Rain" << endl << endl;
    cout << "\t\t\t\t\t Press T -->    To Start Rain" << endl << endl;



	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE| GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1200, 600);
	glutCreateWindow("New work city");     // creating the window
	//glutFullScreen();       // making the window full screen
	//glutInitWindowPosition(0,0);
	glPointSize(10.0);
	glutDisplayFunc(display);///day
	glutKeyboardFunc(myKeyboard);
	glutTimerFunc(25, update, 0);
	init();
	sndPlaySound("sss.wav",SND_ASYNC);
	glutMainLoop();
	return 0;
}

