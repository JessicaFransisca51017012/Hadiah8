#include <iostream.h>
#include <stdio.h>
#include <conio.h>

void main ()
{
char grade, nama[25];
float nilai, nmid, nfinal, ttlmid, ttlfinal, ttltgs, n, jml=0;
int i=1;
atas:
cout<<" Nama Mahasiswa = "; cin>>nama;
   do
       {cout<<" Masukkan nilai tugas" <<i<<" = "; cin>>nilai;
       jml = jml+nilai;
       i++;}
       while(i<5);
   cout<<" Nilai mid mahasiswa   : "; cin>>nmid;
   cout<<" Nilai final mahasiswa : "; cin>>nfinal;
      ttltgs = 0.25*(jml)/5);
      ttlmid = 0.25* nmid;
      ttlfinal = 0.5*nfinal;
      n = ttltgs + ttlmid + ttlfinal;

if((n>=80)&&(n<=100))
 grade = 'A';
else if((n>=70)&&(n<=79))
grade = 'B';
else if((n>=60)&&(n<=69))
grade ='C';
else if((n>=50)&&(n<=59))
grade ='D';
else if(n<50)
grade = 'E';

cout<<"\nNama Mahasiswa = "<<nama<<endl;
cout<<"\nNilai Tugas    = "<<ttltgs<<endl;
cout<<"\nNilai Mid      = "<<ttlmid<<endl;
cout<<"\nNilai Final    = "<<ttlfinal<<endl;
cout<<"\nNilai Akhir    = "<<n<<endl;
cout<<"\nGrade          = "<<grade<<endl;
getch ();}
