#include <cstdlib>
#include <iostream>
#include <conio2.h>
#include <GL/glut.h>

#define i 24

using namespace std;

void Init()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION); 
    glLoadIdentity(); 
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);    
}

void bangunRuang()
{
     glColor3f (1.0, 1.0, 0.0);
     glBegin(GL_QUADS); 
     glVertex2f (0.05, 0.05); 
     glVertex2f (0.20, 0.05); 
     glVertex2f (0.20, 0.25); 
     glVertex2f (0.05, 0.25);
     glEnd();
     
     glColor3f (0.0, 0.0, 1.0);
     glBegin(GL_POLYGON); 
     glVertex2f (0.30, 0.05); 
     glVertex2f (0.50, 0.05); 
     glVertex2f (0.50, 0.25); 
     glVertex2f (0.30, 0.25);
     glEnd();
   
     glColor3f (0.0, 1.0, 0.0);
     glBegin(GL_POLYGON); 
     glVertex2f (0.55, 0.20); 
     glVertex2f (0.60, 0.05); 
     glVertex2f (0.65, 0.20); 
     glVertex2f (0.60, 0.30);
     glEnd();
     
     glColor3f (1.0, 0.0, 1.0);
     glBegin(GL_POLYGON); 
     glVertex2f (0.75, 0.05); 
     glVertex2f (0.95, 0.05); 
     glVertex2f (0.90, 0.25); 
     glVertex2f (0.70, 0.25);
     glEnd();
     
     glColor3f (1.0, 0.0, 0.0);
     glBegin(GL_TRIANGLES);
     glVertex2f (0.05, 0.35); 
     glVertex2f (0.25, 0.35); 
     glVertex2f (0.15, 0.60); 
     glEnd();
     
     glColor3f (0.1, 0.0, 0.0);
     glBegin(GL_POLYGON); 
     glVertex2f (0.30, 0.35); 
     glVertex2f (0.50, 0.35); 
     glVertex2f (0.47, 0.55); 
     glVertex2f (0.33, 0.55);
     glEnd();
     
     glColor3f(0.0,1.0,1.0);
     glBegin(GL_POLYGON);
     glVertex2f(0.60, 0.35);
     glVertex2f(0.70, 0.35);
     glVertex2f(0.73, 0.52);
     glVertex2f(0.65, 0.62);
     glVertex2f(0.57, 0.52);
     glEnd();
     
     glColor3f(1.0,0.5,0.5);
     
     glBegin(GL_QUADS);
     glVertex2f(0.80, 0.45);
     glVertex2f(0.87, 0.35);
     glVertex2f(0.94, 0.45);
     glVertex2f(0.87, 0.56);
     glEnd();
     
     
     glColor3f(1.0, 0.5, 0.0); 
     glBegin(GL_POLYGON); 
     glVertex2f(0.3, 0.7);
     glVertex2f(0.5, 0.7);
     glVertex2f(0.3, 0.9);
     glEnd();
     
     glFlush();
     
}

void Display()
{
     glClear(GL_COLOR_BUFFER_BIT);
     bangunRuang();   
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv); 
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); 
    glutInitWindowSize (1000, 650);
    glutInitWindowPosition (200, 50);
    textbackground(WHITE);
    system("cls");
    
    int pil;
    
    do
    {
        textcolor(BLACK);
        gotoxy(i,7);cout<<" ================================ "<<endl;
        textcolor(RED);
        gotoxy(i,8);cout<<"|            M E N U             |"<<endl;
        textcolor(BLACK);
        gotoxy(i,9);cout<<" ================================ "<<endl;
        textcolor(RED);
        gotoxy(i,10);cout<<"| 1. Tampil Bangun ruang         |"<<endl;
        gotoxy(i,11);cout<<"| 2. Nama kelompok               |"<<endl;
        gotoxy(i,12);cout<<"| 3. Keluar                      |"<<endl;
        textcolor(BLACK);
        gotoxy(i,13);cout<<" ================================ "<<endl;
        textcolor(RED);
        gotoxy(i,14);cout<<"| Masukkan pilihan [1..3] :      |"<<endl;
        textcolor(BLACK);
        gotoxy(i,15);cout<<" ================================ "<<endl;
        textcolor(RED);
        gotoxy(52,14);cin>>pil;
        
        textcolor(RED);
        system("cls");
       
        if(pil==1)
        {                 
                  glutCreateWindow("Bangun ruang");
                  Init(); 
                  glutDisplayFunc(Display);
                  glutMainLoop();  
        }
        else
        if(pil==2)
        {
                  textcolor(BLACK);
                  gotoxy(13,7);cout<<" ============================================================ "<<endl;
                  textcolor(RED);
                  gotoxy(13,8);cout<<"|                         NAMA KELOMPOK                      |"<<endl;
                  textcolor(BLACK);
                  gotoxy(13,9);cout<<" ============================================================ "<<endl;
                  textcolor(RED);
                  gotoxy(13,10);cout<<"|          N A M A               |           N I M           |"<<endl;
                  textcolor(BLACK);
                  gotoxy(13,11);cout<<" ============================================================ "<<endl;
                  textcolor(RED);
                  gotoxy(13,12);cout<<"| 1. Yulius Angga Etsa P         |          10108429         |"<<endl;
                  gotoxy(13,13);cout<<"| 2. Imam Ashadi                 |          10108436         |"<<endl;
                  gotoxy(13,14);cout<<"| 3. Ghea Ratimanjari            |          10108449         |"<<endl;
                  gotoxy(13,15);cout<<"| 4. R. Idham Aziz M             |          10108465         |"<<endl;
                  textcolor(BLACK);
                  gotoxy(13,16);cout<<" ============================================================ "<<endl;
                  
                  
                  cout<<endl<<endl<<endl;
        }
        else
        if(pil==3)
        {
                  gotoxy(20,12);cout<<" Terima kasih telah menggunakan program ini. "<<endl<<endl<<endl<<endl;
        }
        else
        {
                  gotoxy(33,12);cout<<" Anda salah pilih! "<<endl<<endl<<endl<<endl;
        }
    system("PAUSE");
    system("cls");
    }while(pil!=3);
  
    return EXIT_SUCCESS;
}




