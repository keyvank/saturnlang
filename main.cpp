// Saturn Softwares
// Saturn Compiler Program Version 0.60

#include "iostream.h"
#include "conio.h"
#include "windows.h"
#include "string.h"
#include "cstring.h"
#include "math.h"
#include "fstream.h"
void prt_page();
void prt_square();
void gotoxy(int x, int y)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = { x, y };
	 SetConsoleCursorPosition(hStdout, position);
}
void draw_textbox(int x,int y,int sx,int sy)
{
	sx=sx-2;
   sy=sy-2;
	int counter1=0,counter2=0;
	char a=201,b=205,c=187,d=186,e=200,f=188,g=176,h=178;
	int temp_x=x,temp_y=y;
	gotoxy(temp_x,temp_y);
	cout<<a;
	for(counter1=0;counter1<sx;counter1++)
	{
		cout<<b;
	}
   cout<<c;
   temp_y++;
   gotoxy(temp_x,temp_y);
	for(counter2=0;counter2<sy;counter2++)
	{
		cout<<d;
		for(counter1=0;counter1<sx;counter1++)
		{
			cout<<" ";
		}
		cout<<d;
      temp_y++;
   	gotoxy(temp_x,temp_y);
	}
	cout<<e;
	for(counter1=0;counter1<sx;counter1++)
	{
		cout<<b;
	}
   cout<<f;
}
int main()
{
	////////////////////////////////////////
	////////////////////////////////////////
   char schar,schar2;
   char load[16946];
   char file_directory[20];
   int temp,temp_2;
   int col_save;
   int ln_save;
   char color_input;
	char input;
   int bs_remover;
	int pos_x=1;
	int pos_y=2;
	int character=0;
	int line=0;
	int max_line=0;
	int max_char=0;
	int cleaner_x;
	int cleaner_y;
	int temp_line;
	int temp1,temp2,temp3=2;
	int temp_pos_x=1,temp_pos_y=2;
	int nl=0;
	char temp_char_1=176,temp_char_2=178;
   char temp_char_save[75];
	////////////////////////////////////////
	////////////////////////////////////////
	struct save
	{
		char col[75];
	}ln[230];
   struct all_save
   {
   	char scol[75];
   }sln[230];
   for(cleaner_x=0;cleaner_x<230;cleaner_x++)
   {
   	for(cleaner_y=0;cleaner_y<75;cleaner_y++)
      {
      	ln[cleaner_x].col[cleaner_y]=' ';
      }
   }
   char log_save[20];
   ifstream load_log("log.slog",ios::in);
   if(load_log)
   {
   load_log.getline(log_save,22);
   ifstream set_log(log_save,ios::in);
   set_log.getline(load,16948);
   for(cleaner_y=0;cleaner_y<75;cleaner_y++)
   {
   	for(cleaner_x=0;cleaner_x<75;cleaner_x++)
      {
      	ln[cleaner_y].col[cleaner_x]=load[(cleaner_y*75)+cleaner_x];
      }
   	cleaner_x=0;
   }
   }
	////////////////////////////////////////
	////////////////////////////////////////
   system("color 97");
   gotoxy(0,8);
   cout<<"     SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS\n     S\n     S          A      TTTTTTTTT    U      U     RRRRRRR      N   N\n     S         A A         T        U      U     R     R      NN  N\n     SSSS     AAAAA        T        U      U     RRRRRR       N N N\n        S    A     A       T        U      U     R     R      N  NN\n        S   A       A      T         UUUUUU      R      R     N   N\n        S\n     SSSS\n";
   getch();
   system("cls");
	prt_square();
   cout<<"Saturn programming language [Version 0.65 Beta]";
   gotoxy(1,4);
   cout<<"Choose a color: ";
   gotoxy(1,6);
   cout<<"1: Blue,Black";
   gotoxy(1,7);
   cout<<"2: Black,Yellow";
   gotoxy(1,8);
   cout<<"3: Black,white";
   gotoxy(1,9);
   cout<<"4: Default color";
   gotoxy(1,11);
   cout<<"?: ";
   color_input=getch();
   if(color_input=='1')
   {
   	system("color 90");
   }
   if(color_input=='2')
   {
   	system("color 0e");
   }
   if(color_input=='3')
   {
   	system("color 07");
   }
   if(color_input=='4')
   {
   	system("color 97");
   }
Reset:
	if(color_input=='1')
   {
   	system("color 90");
   }
   if(color_input=='2')
   {
   	system("color 0e");
   }
   if(color_input=='3')
   {
   	system("color 07");
   }
   if(color_input=='4')
   {
   	system("color 97");
   }
   if(color_input!='1'&&color_input!='2'&&color_input!='3'&&color_input!='4')
   {
   	system("color 97");
   }
   gotoxy(1,2);
   system("cls");
	prt_page();
	character=0;
	line=0;
	max_line=0;
	max_char=0;
	cleaner_x;
	cleaner_y;
	temp_line;
	temp1=0;
   temp2=0;
   temp3=2;
	nl=0;
   pos_x=1;
   pos_y=2;
   temp_pos_x=1;
   temp_pos_y=2;
   int temp1_1;
   int temp2_2;
   int temp_pos_y_1=2;
	gotoxy(1,2);
	for(temp1_1=0;temp1_1<20;temp1_1++)
	{
		for(temp2_2=0;temp2_2<75;temp2_2++)
   	{
   		cout<<ln[temp1_1].col[temp2_2];
		}
		temp_pos_y_1++;
		gotoxy(1,temp_pos_y_1);
   }
	char scroll=178;
	gotoxy(78,1);
	cout<<scroll<<scroll;
	gotoxy(pos_x,pos_y);
	////////////////////////////////////////
	////////////////////////////////////////
	////////////////////////////////////////
	////////////////////////////////////////
	while(1)
	{
		temp_line=line;
		gotoxy(58,24);
		cout<<"        ";
		gotoxy(58,24);
		cout<<(line+1);
		gotoxy(70,24);
		cout<<"        ";
		gotoxy(70,24);
		cout<<(character+1);
		gotoxy(pos_x,pos_y);
		input=getch();
		////////////////////////////////////////
		////////////////////////////////////////
		if(input==92)
		{
			break;
		}
      if(input==27)
		{
      	draw_textbox(19,4,41,15);
         gotoxy(21,6);
         cout<<"Are you sure you want to exit?: (Y/N)";
         gotoxy(21,12);
         schar=getch();
         if(schar=='Y'||schar=='y')
         {
         	return 0;
         }
         else
         {
         	goto Reset;
         }
         getch();
         return 0;
		}
      if(input=='|')
		{
      	draw_textbox(19,4,41,15);
         gotoxy(21,6);
         cout<<"Copyright 2011 All rights reserved.";
         gotoxy(21,9);
         cout<<"Compiler name:  Borland C++ 5.02";
         gotoxy(21,10);
         cout<<"Programmed by:  Keyvan Kambakhsh";
         gotoxy(21,11);
         cout<<"Last Modified:  Friday, June 24, 2011";
         gotoxy(21,12);
         cout<<"Version:        0.65 Beta";
      	gotoxy(21,13);
         cout<<"Registered For: Mr. ";
         cout<<"Keyvan";
         gotoxy(21,16);
         cout<<"Press any key to continue ...";
         getch();
         goto Reset;
		}
      if(input=='`')
		{
			ln[line].col[character]=ln[line-1].col[character];
			character++;
			cout<<ln[line-1].col[character-1];
         pos_x++;
			gotoxy(pos_x,pos_y);
		}
		////////////////////////////////////////
		////////////////////////////////////////
      if(input==28)
		{
      	system("cls");
      	cout<<"                       Saturn Programming Language Option\n";
			draw_textbox(0,1,80,24);
         gotoxy(0,0);
         gotoxy(2,3);
         cout<<"1: Save File As Sat";
         gotoxy(2,4);
         cout<<"2: Save File As EXE";
         gotoxy(2,5);
         cout<<"3: Load File";
         gotoxy(2,6);
         cout<<"4: Clear Screen";
         gotoxy(2,7);
         cout<<"5: Command Prompt";
         gotoxy(2,8);
         cout<<"Other keys: Back to writing mode ...";
         gotoxy(2,10);
         cout<<"?: ";
         schar=getch();
         if(schar=='1')
         {
         	draw_textbox(20,4,40,15);
            gotoxy(22,6);
            cout<<"Please enter a directory for Save:";
            gotoxy(22,8);
            schar2=getch();
            if(schar2==13)
            {
            	gotoxy(22,10);
            	cout<<"Error in address.File not Saved.\a\a\a";
               getch();
               goto Reset;
            }
            cin>>file_directory;
            ofstream log_file_save("log.slog",ios::out);
            log_file_save<<file_directory;
            ofstream save_file(file_directory,ios::out);
            for(cleaner_y=0;cleaner_y<230;cleaner_y++)
				{
					for(cleaner_x=0;cleaner_x<75;cleaner_x++)
					{
						save_file<<ln[cleaner_y].col[cleaner_x];
					}
	  			}
            save_file.close();
            gotoxy(22,10);
            cout<<"Success.File Saved.";
            getch();
            goto Reset;
         }
         if(schar=='2')
         {
         	draw_textbox(20,4,40,15);
            gotoxy(22,6);
            ofstream save_file("Main.sat",ios::out);
            for(cleaner_y=0;cleaner_y<230;cleaner_y++)
				{
					for(cleaner_x=0;cleaner_x<75;cleaner_x++)
					{
						save_file<<ln[cleaner_y].col[cleaner_x];
					}
	  			}
            save_file.close();
            system("copy Main.sat Make_EXE");
            gotoxy(22,7);
            system("copy Main.exe Make_EXE");
            gotoxy(22,9);
            cout<<"Success.File Saved.";
            getch();
            goto Reset;
         }
         if(schar=='3')
         {
         	draw_textbox(20,4,40,15);
            gotoxy(22,6);
            cout<<"Please enter a directory for Load:";
            gotoxy(22,8);
            schar2=getch();
            if(schar2==13)
            {
            	gotoxy(22,10);
            	cout<<"Error in address.File not Saved.\a\a\a";
               getch();
               goto Reset;
            }
            cin>>file_directory;
            ifstream load_file(file_directory,ios::in);
            ofstream log_file("log.slog",ios::out);
            log_file<<file_directory;
            log_file.close();
            load_file.getline(load,16948);
            cleaner_y=0;
            for(cleaner_y=0;cleaner_y<75;cleaner_y++)
            {
            	for(cleaner_x=0;cleaner_x<75;cleaner_x++)
            	{
            		ln[cleaner_y].col[cleaner_x]=load[(cleaner_y*75)+cleaner_x];
            	}
               cleaner_x=0;
            }
            gotoxy(22,10);
            cout<<"Success.File Loaded.";
            getch();
            load_file.close();
            goto Reset;
         }
         if(schar=='4')
         {
         	for(cleaner_y=0;cleaner_y<230;cleaner_y++)
				{
					for(cleaner_x=0;cleaner_x<75;cleaner_x++)
					{
						ln[cleaner_y].col[cleaner_x]=' ';
					}
	  			}
            goto Reset;
         }
         if(schar=='5')
         {
         	system("cls");
            system("color 07");
            system("cmd");
            goto Reset;
         }
         if(schar!='1'&&schar!='2'&&schar!='3')
         {
         	goto Reset;
         }
		}
		////////////////////////////////////////
		////////////////////////////////////////
		if(input==0)
		{
			input=getch();
         if(input==-109)
         {
         	for(cleaner_y=0;cleaner_y<230;cleaner_y++)
				{
					for(cleaner_x=0;cleaner_x<75;cleaner_x++)
					{
						ln[cleaner_y].col[cleaner_x]=' ';
					}
	  			}
            goto Reset;
         }
			if(input==80&&line<228)
			{
				line++;
				if(pos_y>20)
				{
					gotoxy(1,2);
					for(temp1=0;temp1<20;temp1++)
					{
						for(temp2=0;temp2<75;temp2++)
						{
							cout<<ln[temp_line-18].col[temp2];
						}
						temp_line++;
						temp_pos_y++;
						gotoxy(1,temp_pos_y);
					}
					pos_y--;
					nl++;
					if(nl%10==0)
					{
						gotoxy(78,temp3);
						cout<<temp_char_2<<temp_char_2;
						gotoxy(78,temp3-1);
						cout<<temp_char_1<<temp_char_1;
						temp3++;
					}
				}
				temp_pos_y=2;
				gotoxy(pos_x,pos_y);
				pos_y++;
				gotoxy(pos_x,pos_y);
			}
			if(input==72&&line!=0)
			{
				line--;
				if(pos_y<3)
				{
					gotoxy(1,2);
					for(temp1=0;temp1<20;temp1++)
					{
						for(temp2=0;temp2<75;temp2++)
						{
							cout<<ln[temp_line-1].col[temp2];
						}
						temp_line++;
						temp_pos_y++;
						gotoxy(1,temp_pos_y);
					}
					pos_y++;
					nl--;
					if(nl%10==0&&line!=0)
					{
						gotoxy(78,temp3-2);
						cout<<temp_char_2<<temp_char_2;
						gotoxy(78,temp3-1);
						cout<<temp_char_1<<temp_char_1;
						temp3--;
					}
				}
				temp_pos_y=2;
				pos_y--;
				gotoxy(pos_x,pos_y);
			}
			if(input==77&&character<74)
			{
				character++;
				pos_x++;
				gotoxy(pos_x,pos_y);
			}
			if(input==75&&character!=0)
			{
				character--;
				pos_x--;
				gotoxy(pos_x,pos_y);
			}
		}
		////////////////////////////////////////
		////////////////////////////////////////
		if(input==8&&character!=0)
		{
			ln[line].col[character-1]=' ';
         gotoxy(pos_x-1,pos_y);
         for(bs_remover=character-1;bs_remover<74;bs_remover++)
         {
            cout<<ln[line].col[bs_remover+1];
         	ln[line].col[bs_remover]=ln[line].col[bs_remover+1];
         }
			character--;
			pos_x--;
			gotoxy(pos_x,pos_y);
		}
		////////////////////////////////////////
		////////////////////////////////////////
		if(input==13&&line<228)
		{
         for(ln_save=0;ln_save<230;ln_save++)
         {
            for(col_save=0;col_save<75;col_save++)
            {
            	sln[ln_save].scol[col_save]=ln[ln_save].col[col_save];
            }
         }
			line++;
			gotoxy(1,pos_y+1);
         for(bs_remover=0;bs_remover<74;bs_remover++)
         {
         	ln[line].col[bs_remover]=' ';
            if(pos_y<21)
            {
            	cout<<" ";
            }
         }
         for(temp=pos_y+2;temp<22;temp++)
         {
         	gotoxy(1,temp);
            for(temp_2=0;temp_2<75;temp_2++)
            {
            	cout<<sln[line+(temp-(pos_y+2))].scol[temp_2];
            }
         }
         for(ln_save=line+1;ln_save<230;ln_save++)
         {
            for(col_save=0;col_save<75;col_save++)
            {
            	ln[ln_save].col[col_save]=sln[ln_save-1].scol[col_save];
            }
         }
			if(pos_y>20)
			{
				gotoxy(1,2);
				for(temp1=0;temp1<20;temp1++)
				{
					for(temp2=0;temp2<75;temp2++)
					{
						cout<<ln[temp_line-18].col[temp2];
					}
					temp_line++;
					temp_pos_y++;
					gotoxy(1,temp_pos_y);
				}
				pos_y--;
				nl++;
				if(nl%10==0)
				{
					gotoxy(78,temp3);
					cout<<temp_char_2<<temp_char_2;
					gotoxy(78,temp3-1);
					cout<<temp_char_1<<temp_char_1;
					temp3++;
				}
			}
			temp_pos_y=2;
			character=0;
			pos_x=1;
			pos_y++;
			gotoxy(pos_x,pos_y);
		}
		////////////////////////////////////////
		////////////////////////////////////////
		if(input!='`'&&input!=13&&input!=8&&input!=80&&input!=72&&input!=75&&input!=77&&character<74)
		{
      	for(bs_remover=0;bs_remover<75;bs_remover++)
         {
         	temp_char_save[bs_remover]=ln[line].col[bs_remover];
         }
         for(bs_remover=character;bs_remover<74;bs_remover++)
         {
         	ln[line].col[bs_remover+1]=temp_char_save[bs_remover];
         }
			ln[line].col[character]=input;
			character++;
			cout<<input;
         for(bs_remover=character-1;bs_remover<74;bs_remover++)
         {
         	cout<<temp_char_save[bs_remover];
         }
			pos_x++;
			gotoxy(pos_x,pos_y);
		}
	}
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	//The Compiling Of The Program//////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
   system("cls");
   system("color 07");
	int counter1=0,counter2=0,counter3=0,counter4=0,counter7=0,counter8=0,counter9=0,counter10=0,counter11=0,counter12=0,counter13=0,counter14=0,counter15=0;
   int cleaner;
   int using_line_number=0;
   int temp_saver;
   int math1,math2,math3,math4;
   string test="",test2="",test3="",test4="";
   int num1=0,num2=0,num3=0;
   int gtnum=0,gtnum2=0;
   bool temp_bool=false;
   bool bool1=false,bool2=false;
   char temp_num[10];
   int temp_int;
   int normal_counter=0,normal_counter2=0,normal_counter3=0;
   int char_counter=0;
   char import_chars[75];
	struct int_vars
	{
		string name;
		int number;
	}integer_var[500];
	struct string_vars
	{
		string name;
		string value;
	}string_var[100];
   struct array_ints
   {
   	int number[500];
      int max;
   	string name;
   }array_var[100];
   int integer_var_counter=-1;
   int integer_saver=0;
   int integer_chars[10];
   struct goto_command
   {
   	int line_number;
      string goto_name;
   }goto_num[50];
   struct imported
   {
   	string name;
      char address[20];
   }imported_sat[50];
   char filename[20];
   char cmd[20];
   int string_var_counter=-1;
   int array_var_counter=-1;
   int import_counter=-1;
   float float_saver;
   char function_saver[7500];
   int main_start;
   char function[7500];
   int line_import;
   bool signed_int=false;
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
   int pow10=1;
Start_Commands:
	test="";
   counter1=0;
	do{
		if(ln[using_line_number].col[0]=='$')
		{
			do{
         	test=test+ln[using_line_number].col[counter1+1];
            counter1++;
			}while(ln[using_line_number].col[counter1+1]!='#');
			break;
		}
      using_line_number++;
      if(using_line_number>229)
	  {
        cout<<"Start ERROR 1\a\a\a";
        getch();
        goto Reset;
	  }
	}while(ln[using_line_number-1].col[0]!='$');
   if(test=="import")
   {
   	counter1=0;
   	test="";
   	goto Import_Things;
   }
   if(test=="end_import")
   {
   	using_line_number++;
   	goto Start_Commands;
   }
   if(test=="var")
   {
   	counter1=0;
   	test="";
   	goto Save_Vars;
   }
   if(test=="main")
   {
   	counter1=0;
   	test="";
      main_start=using_line_number;
      for(normal_counter=0;normal_counter<229;normal_counter++)
      {
   		if(ln[normal_counter].col[0]=='*')
      	{
         	do{
      			counter2++;
         		test=test+ln[normal_counter].col[counter2];
         		if(counter2>75)
         		{
            		cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 1\a\a\a";
               	getch();
               	goto Reset;
            	}
      		}while(ln[normal_counter].col[counter2+1]!='.');
         	if(test=="address")
            {
            	normal_counter2=counter2;
      			test3="";
               normal_counter2++;
         		do{
      				normal_counter2++;
         			test3=test3+ln[normal_counter].col[normal_counter2];
         			if(counter2>75)
         			{
            			cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 2\a\a\a";
               		getch();
              	  		goto Reset;
            		}
      			}while(ln[normal_counter].col[normal_counter2+1]!=';');
         		for(normal_counter3=0;normal_counter3<52;normal_counter3++)
         		{
            		if(normal_counter3>49)
            		{
            			break;
            		}
            		if(goto_num[normal_counter3].goto_name==test3&&goto_num[normal_counter3].line_number!=normal_counter)
            		{
            			cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 3\a\a\a";
               		getch();
               		goto Reset;
            		}
         		}
         		normal_counter3=0;
         		normal_counter2=0;
         		test3="";
            }
            if(test=="address")
            {
            	counter2++;
            	test="";
               do{
      				counter2++;
         			test=test+ln[normal_counter].col[counter2];
         			if(counter2>75)
         			{
            			cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 4\a\a\a";
               		getch();
               		goto Reset;
            		}
      			}while(ln[normal_counter].col[counter2+1]!=';');
         		goto_num[counter11].line_number=normal_counter;
         		goto_num[counter11].goto_name=test;
         		counter11++;
         		counter2=0;
               test="";
            }
            test="";
         }
      }
      goto Main_Commands;
   }
   if(test=="end_var")
   {
   	using_line_number++;
   	goto Start_Commands;
   }
   if(test=="end_main")
   {
   	system("cls");
      cout<<"Program ended.Press any key to back . . .";
      getch();
      goto Reset;
   }
   cout<<"Start ERROR 2\a\a\a";
   getch();
   goto Reset;
   ////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
Import_Things:
	test="";
   do{
   	using_line_number++;
      if(ln[using_line_number].col[0]=='$')
      {
         goto Start_Commands;
      }
      if(using_line_number>229)
      {
      	cout<<"Var ERROR 1\a\a\a";
         getch();
         goto Reset;
      }
    }while(ln[using_line_number].col[0]==' ');
    do{
    	test=test+ln[using_line_number].col[counter2];
      counter2++;
      if(counter2>15)
      {
         cout<<"Var ERROR 2\a\a\a";
         getch();
         goto Reset;
      }
    }while(ln[using_line_number].col[counter2]!='.');
    if(test=="import")
    {
    	counter4=0;
    	import_counter++;
    	test="";
    	do{
      	counter2++;
         if(ln[using_line_number].col[7]>96&&ln[using_line_number].col[8]<123)
         {
         	if((ln[using_line_number].col[counter2]>96&&ln[using_line_number].col[counter2]<123)||(ln[using_line_number].col[counter2]>47&&ln[using_line_number].col[counter2]<58))
            {
         		test=test+ln[using_line_number].col[counter2];
            }
            else
            {
         		cout<<"Var ERROR 3\a\a\a";
            	getch();
            	goto Reset;
         	}
         }
         else
         {
         	cout<<"Var ERROR 4\a\a\a";
            getch();
            goto Reset;
         }
         counter3++;
         if(counter3>10)
         {
         	cout<<"Var ERROR 5\a\a\a";
            getch();
            goto Reset;
         }
      }while(ln[using_line_number].col[counter2+1]!=':');
      counter2++;
      do{
      	counter2++;
         import_chars[counter4]=ln[using_line_number].col[counter2];
         counter4++;
         if(counter4>75)
         {
         	cout<<"Var ERROR 6\a\a\a";
            getch();
            goto Reset;
         }
      }while(ln[using_line_number].col[counter2+1]!=';');
      import_chars[counter4]='\0';
      imported_sat[import_counter].name=test;
      for(normal_counter=0;normal_counter<counter4;normal_counter++)
      {
      	imported_sat[import_counter].address[normal_counter]=import_chars[normal_counter];
      }
      imported_sat[import_counter].address[counter4]='\0';
    }
Save_Vars:
	counter4=0;
	counter2=0;
   do{
   	using_line_number++;
      if(ln[using_line_number].col[0]=='$')
      {
         goto Start_Commands;
      }
      if(using_line_number>229)
      {
      	cout<<"Var ERROR 1\a\a\a";
         getch();
         goto Reset;
      }
    }while(ln[using_line_number].col[0]==' ');
    do{
    	test=test+ln[using_line_number].col[counter2];
      counter2++;
      if(counter2>15)
      {
         cout<<"Var ERROR 2\a\a\a";
         getch();
         goto Reset;
      }
    }while(ln[using_line_number].col[counter2]!='.');
    if(test=="integer")
    {
    	counter4=0;
    	integer_var_counter++;
    	test="";
    	do{
      	counter2++;
         if(ln[using_line_number].col[8]>96&&ln[using_line_number].col[8]<123)
         {
         	if((ln[using_line_number].col[counter2]>96&&ln[using_line_number].col[counter2]<123)||(ln[using_line_number].col[counter2]>47&&ln[using_line_number].col[counter2]<58))
            {
         		test=test+ln[using_line_number].col[counter2];
            }
            else
            {
         		cout<<"Var ERROR 3\a\a\a";
            	getch();
            	goto Reset;
         	}
         }
         else
         {
         	cout<<"Var ERROR 4\a\a\a";
            getch();
            goto Reset;
         }
         counter3++;
         if(counter3>10)
         {
         	cout<<"Var ERROR 5\a\a\a";
            getch();
            goto Reset;
         }
      }while(ln[using_line_number].col[counter2+1]!='=');
      counter2++;
      if(ln[using_line_number].col[counter2+1]=='-')
      {
      	signed_int=true;
         counter2++;
      }
      do{
      	counter2++;
      	if(ln[using_line_number].col[counter2]>47&&ln[using_line_number].col[counter2]<58)
         {
            integer_chars[counter4]=ln[using_line_number].col[counter2]-48;
            counter4++;
         }
         if(counter4>10)
         {
         	cout<<"Var ERROR 6\a\a\a";
            getch();
            goto Reset;
         }
      }while(ln[using_line_number].col[counter2+1]!=';');
      counter4--;
      for(counter4;counter4>-1;counter4--)
      {
      	integer_saver=integer_saver+integer_chars[counter4]*pow10;
         pow10=pow10*10;
      }
      if(signed_int==true)
      {
      	integer_saver=0-integer_saver;
      }
      integer_var[integer_var_counter].name=test;
      integer_var[integer_var_counter].number=integer_saver;
      for(counter13=0;counter13<501;counter13++)
      {
      	if(test==integer_var[counter13].name&&integer_var_counter!=counter13)
         {
         	cout<<"Var ERROR 7\a\a\a";
         	getch();
         	goto Reset;
         }
      }
      signed_int=false;
      pow10=1;
      test="";
      counter2=0;
      counter4=0;
      counter3=0;
      integer_saver=0;
      goto Save_Vars;
    }
    if(test=="int_array")
    {
    	counter4=0;
    	array_var_counter++;
    	test="";
    	do{
      	counter2++;
         if(ln[using_line_number].col[6]>96&&ln[using_line_number].col[6]<123)
         {
         	if((ln[using_line_number].col[counter2]>96&&ln[using_line_number].col[counter2]<123)||(ln[using_line_number].col[counter2]>47&&ln[using_line_number].col[counter2]<58))
            {
         		test=test+ln[using_line_number].col[counter2];
            }
            else
            {
         		cout<<"Var ERROR 3\a\a\a";
            	getch();
            	goto Reset;
         	}
         }
         else
         {
         	cout<<"Var ERROR 4\a\a\a";
            getch();
            goto Reset;
         }
         counter3++;
         if(counter3>10)
         {
         	cout<<"Var ERROR 5\a\a\a";
            getch();
            goto Reset;
         }
      }while(ln[using_line_number].col[counter2+1]!='[');
      counter2++;
      do{
      	counter2++;
      	if(ln[using_line_number].col[counter2]>47&&ln[using_line_number].col[counter2]<58)
         {
            integer_chars[counter4]=ln[using_line_number].col[counter2]-48;
            counter4++;
         }
         if(counter4>10)
         {
         	cout<<"Var ERROR 6\a\a\a";
            getch();
            goto Reset;
         }
      }while(ln[using_line_number].col[counter2+1]!=']');
      counter4--;
      for(counter4;counter4>-1;counter4--)
      {
      	integer_saver=integer_saver+integer_chars[counter4]*pow10;
         pow10=pow10*10;
      }
      counter2++;
      counter2++;
      if(ln[using_line_number].col[counter2]!=';')
      {
      	cout<<"Var ERROR 6\a\a\a";
         getch();
         goto Reset;
      }
      array_var[array_var_counter].name=test;
      array_var[array_var_counter].max=integer_saver;
      pow10=1;
      test="";
      counter2=0;
      counter4=0;
      counter3=0;
      integer_saver=0;
      goto Save_Vars;
    }
    if(test=="string")
    {
    	counter4=0;
    	string_var_counter++;
    	test="";
      test2="";
    	do{
      	counter2++;
         test=test+ln[using_line_number].col[counter2];
         counter3++;
         if(counter3>10)
         {

         	cout<<"Var ERROR 5\a\a\a";
            getch();
            goto Reset;
         }
      }while(ln[using_line_number].col[counter2+1]!='=');
      counter2++;
      do{
      	counter2++;
         test2=test2+ln[using_line_number].col[counter2];
         counter4++;
         if(counter4>75)
         {
         	cout<<"Var ERROR 6\a\a\a";
            getch();
            goto Reset;
         }
      }while(ln[using_line_number].col[counter2+1]!=';');
      string_var[string_var_counter].name=test;
      string_var[string_var_counter].value=test2;
      for(counter13=0;counter13<501;counter13++)
      {
      	if(test==string_var[counter13].name&&string_var_counter!=counter13)
         {
         	cout<<"Var ERROR 7\a\a\a";
         	getch();
         	goto Reset;
         }
      }
      test="";
      counter2=0;
      counter4=0;
      counter3=0;
      goto Save_Vars;
    }
    cout<<"Var ERROR 8\a\a\a";
 	getch();
 	goto Reset;
   ////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
   ////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
Main_Commands:
	do{
   	using_line_number++;
      if(ln[using_line_number].col[0]=='~')
      {
      	counter2=0;
         test="";
         counter2++;
      	do{
    			test=test+ln[using_line_number].col[counter2];
      		counter2++;
      		if(counter2>75)
      		{
         		cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 6\a\a\a";
         		getch();
         		goto Reset;
      		}
    		}while(ln[using_line_number].col[counter2]!='.');
         counter2++;
         test2="";
      	do{
    			test2=test2+ln[using_line_number].col[counter2];
      		counter2++;
      		if(counter2>75)
      		{
         		cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 6\a\a\a";
         		getch();
         		goto Reset;
      		}
    		}while(ln[using_line_number].col[counter2]!=';');
         for(normal_counter=0;normal_counter<51;normal_counter++)
         {
         	if(normal_counter>49)
            {
            	cout<<"ERROR on line "<<(using_line_number+1)<<".  ERROR \a\a\a";
               getch();
               goto Reset;
            }
            if(imported_sat[normal_counter].name==test)
            {
            	break;
            }
         }
         ifstream openfile(imported_sat[normal_counter].address,ios::in);
         openfile.getline(function,7502);
         openfile.close();
         normal_counter=0;
         test="";
         do{
         	if(function[normal_counter]=='|')
            {
            	normal_counter++;
      			do{
    					test=test+function[normal_counter];
            		normal_counter++;
      				if(counter2>75)
      				{
         				cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 6\a\a\a";
         				getch();
         				goto Reset;
      				}
    				}while(function[normal_counter]!=':');
               if(test2==test)
               {
               	line_import=0;
               	normal_counter++;
                  do{
    						function_saver[normal_counter2]=function[normal_counter];
            			normal_counter++;
                     normal_counter2++;
      					if(counter2>75)
      					{
         					cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 6\a\a\a";
         					getch();
         					goto Reset;
      					}
    					}while(function[normal_counter]!='|');
                  function_saver[normal_counter2]='|';
               	for(normal_counter=0;normal_counter<7500;normal_counter++)
               	{
               		if(function_saver[normal_counter]=='`')
                  	{
                  		line_import++;
                  	}
               	}
               	line_import++;
               	for(ln_save=0;ln_save<230;ln_save++)
         			{
            			for(col_save=0;col_save<75;col_save++)
                  	{
            				sln[ln_save].scol[col_save]=ln[ln_save].col[col_save];
                  	}
               	}
         			for(ln_save=using_line_number+1+line_import;ln_save<230;ln_save++)
         			{
            			for(col_save=0;col_save<75;col_save++)
            			{
            				ln[ln_save].col[col_save]=sln[ln_save-line_import].scol[col_save];
            			}
         			}
               	for(normal_counter=using_line_number;normal_counter<(using_line_number+line_import+1);normal_counter++)
               	{
         				for(bs_remover=0;bs_remover<74;bs_remover++)
               		{
         					ln[normal_counter].col[bs_remover]=' ';
               		}
               	}
                  normal_counter=0;
                  col_save=0;
                  ln_save=using_line_number;
               	do{
                  	if(function_saver[normal_counter]=='|')
                     {
                     	break;
                     }
                     if(function_saver[normal_counter]=='`')
                     {
                     	ln_save++;
                        col_save=0;
                        normal_counter++;
                     }
                     ln[ln_save].col[col_save]=function_saver[normal_counter];
                     normal_counter++;
                     col_save++;
                  }while(normal_counter<7500);
                  ln_save=0;
                  col_save=0;
                  normal_counter=0;
                  normal_counter2=0;
                  cout<<"Please wait until the program import the commands ...";
                  getch();
                  goto Reset;
               }
            }
            if(normal_counter==7500)
            {
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 6\a\a\a";
               getch();
               goto Reset;
            }
            test="";
         	normal_counter++;
         }while(normal_counter<7503);
      }
      if(ln[using_line_number].col[0]=='$')
      {
         goto Start_Commands;
      }
      if(ln[using_line_number].col[0]=='*'||ln[using_line_number].col[0]=='%'||ln[using_line_number].col[0]=='{'||ln[using_line_number].col[0]=='}')
      {
         goto Main_Commands;
      }
      if(using_line_number>229)
      {
      	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 5\a\a\a";
         getch();
         goto Reset;
      }
    }while(ln[using_line_number].col[0]==' ');
    test="";
    counter2=0;
    do{
    	test=test+ln[using_line_number].col[counter2];
      counter2++;
      if(counter2>75)
      {
         cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 6\a\a\a";
         cout<<using_line_number;
         getch();
         goto Reset;
      }
    }while(ln[using_line_number].col[counter2]!='.');
      ////////////////////////////////////////
      ////////////////////////////////////////
      ////////////////////////////////////////
    	////////////////////////////////////////
      if(test=="io")
      {
      	test="";
         do{
      		counter2++;
         	test=test+ln[using_line_number].col[counter2];
         	if(counter2>75)
         	{
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 8\a\a\a";
               getch();
               goto Reset;
            }
      	}while(ln[using_line_number].col[counter2+1]!='(');
         ////////////////////////////////////////
			////////////////////////////////////////
         if(test=="print_txt")
         {
         	test="";
         	counter2++;
            do{
      		counter2++;
            if(counter2>75)
         	{
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 9\a\a\a";
               getch();
               goto Reset;
            }
            if(ln[using_line_number].col[counter2]=='&')
            {
            	test=test+"\n";
            }
            else
            	test=test+ln[using_line_number].col[counter2];
      		}while(ln[using_line_number].col[counter2+1]!=')');
            if(ln[using_line_number].col[counter2+2]!=';')
            {
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 10\a\a\a";
               getch();
               goto Reset;
            }
            cout<<test;
            counter2=0;
            test="";
            goto Main_Commands;
         }
         ////////////////////////////////////////
			////////////////////////////////////////
         if(test=="print_int")
         {
         	test="";
         	counter2++;
            do{
      		counter2++;
            if(counter2>75)
         	{
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 11\a\a\a";
               getch();
               goto Reset;
            }
            test=test+ln[using_line_number].col[counter2];
      		}while(ln[using_line_number].col[counter2+1]!=')');
            if(ln[using_line_number].col[counter2+2]!=';')
            {
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 12\a\a\a";
               getch();
               goto Reset;
            }
            for(counter10;counter10<502;counter10++)
            {
            	if(integer_var[counter10].name==test)
               {
               	temp_saver=counter10;
                  break;
               }
               if(counter10>500)
               {
               	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 13\a\a\a";
                  getch();
                  goto Reset;
               }
            }
            cout<<integer_var[temp_saver].number;
            counter2=0;
            counter10=0;
            test="";
            goto Main_Commands;
         }
         ////////////////////////////////////////
			////////////////////////////////////////
         if(test=="print_str")
         {
         	test="";
         	counter2++;
            do{
      		counter2++;
            if(counter2>75)
         	{
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 11\a\a\a";
               getch();
               goto Reset;
            }
            test=test+ln[using_line_number].col[counter2];
      		}while(ln[using_line_number].col[counter2+1]!=')');
            if(ln[using_line_number].col[counter2+2]!=';')
            {
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 12\a\a\a";
               getch();
               goto Reset;
            }
            for(counter10;counter10<502;counter10++)
            {
            	if(string_var[counter10].name==test)
               {
               	temp_saver=counter10;
                  break;
               }
               if(counter10>500)
               {
               	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 13\a\a\a";
                  getch();
                  goto Reset;
               }
            }
            cout<<string_var[temp_saver].value;
            counter2=0;
            counter10=0;
            test="";
            goto Main_Commands;
         }
         ////////////////////////////////////////
			////////////////////////////////////////
         if(test=="get_int")
         {
         	test="";
         	counter2++;
            do{
      		counter2++;
            if(counter2>75)
         	{
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 14\a\a\a";
               getch();
               goto Reset;
            }
            test=test+ln[using_line_number].col[counter2];
      		}while(ln[using_line_number].col[counter2+1]!=')');
            if(ln[using_line_number].col[counter2+2]!=';')
            {
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 15\a\a\a";
               getch();
               goto Reset;
            }
            for(counter10;counter10<502;counter10++)
            {
            	if(integer_var[counter10].name==test)
               {
               	temp_saver=counter10;
                  break;
               }
               if(counter10>500)
               {
               	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 16\a\a\a";
                  getch();
                  goto Reset;
               }
            }
            cin>>integer_var[temp_saver].number;
            counter2=0;
            counter10=0;
            test="";
            goto Main_Commands;
         }
         ////////////////////////////////////////
			////////////////////////////////////////
         if(test=="get_int_array")
         {
         	bool1=false;
         	test="";
         	counter2++;
            do{
      		counter2++;
            if(counter2>75)
         	{
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 14\a\a\a";
               getch();
               goto Reset;
            }
            test=test+ln[using_line_number].col[counter2];
      		}while(ln[using_line_number].col[counter2+1]!='[');
            for(counter10;counter10<502;counter10++)
            {
            	if(array_var[counter10].name==test)
               {
               	math1=counter10;
                  break;
               }
               if(counter10>500)
               {
               	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 16\a\a\a";
                  getch();
                  goto Reset;
               }
            }
            counter2++;
         counter9=counter2;
         do{
        		counter9++;
            if(ln[using_line_number].col[counter9]<48||ln[using_line_number].col[counter9]>57)
            {
            	bool1=true;
            }
         }while(ln[using_line_number].col[counter9+1]!=']');
         if(bool1!=true)
         {
         	do{
        			counter2++;
            	temp_num[counter8]=ln[using_line_number].col[counter2];
            	counter8++;
        			if(counter2>75)
        			{
           			cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 43\a\a\a";
           			getch();
           			goto Reset;
         		}
            }while(ln[using_line_number].col[counter2+1]!=']');
            pow10=1;
            counter8--;
            math2=0;
            for(counter8;counter8>-1;counter8--)
            {
            	math2=math2+(pow10*(temp_num[counter8]-48));
               pow10=pow10*10;
            }
         }
         else
         {
         test2="";
        	do{
        		counter2++;
        		if(counter2>75)
        		{
           		cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 44\a\a\a";
           		getch();
           		goto Reset;
         	}
            test2=test2+ln[using_line_number].col[counter2];
         }while(ln[using_line_number].col[counter2+1]!=']');
         for(counter10=0;counter10<502;counter10++)
         {
            if(integer_var[counter10].name==test2)
            {
               math2=integer_var[counter10].number;
               break;
            }
            if(counter10>500)
            {
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 45\a\a\a";
               getch();
               goto Reset;
            }
         }
         }
         	if(math2>=array_var[math1].max)
            {
            	cout<<"ERROR on line "<<(using_line_number+1)<<".  ERROR \a\a\a";
               getch();
               goto Reset;
            }
            else
         		cin>>array_var[math1].number[math2];
            bool1=false;
            test2="";
            counter2=0;
            counter10=0;
            test="";
            goto Main_Commands;
         }
         if(test=="print_int_array")
         {
         	bool1=false;
         	test="";
         	counter2++;
            do{
      		counter2++;
            if(counter2>75)
         	{
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 14\a\a\a";
               getch();
               goto Reset;
            }
            test=test+ln[using_line_number].col[counter2];
      		}while(ln[using_line_number].col[counter2+1]!='[');
            for(counter10;counter10<502;counter10++)
            {
            	if(array_var[counter10].name==test)
               {
               	math1=counter10;
                  break;
               }
               if(counter10>500)
               {
               	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 16\a\a\a";
                  getch();
                  goto Reset;
               }
            }
            counter2++;
         counter9=counter2;
         do{
        		counter9++;
            if(ln[using_line_number].col[counter9]<48||ln[using_line_number].col[counter9]>57)
            {
            	bool1=true;
            }
         }while(ln[using_line_number].col[counter9+1]!=']');
         if(bool1!=true)
         {
         	do{
        			counter2++;
            	temp_num[counter8]=ln[using_line_number].col[counter2];
            	counter8++;
        			if(counter2>75)
        			{
           			cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 43\a\a\a";
           			getch();
           			goto Reset;
         		}
            }while(ln[using_line_number].col[counter2+1]!=']');
            pow10=1;
            counter8--;
            math2=0;
            for(counter8;counter8>-1;counter8--)
            {
            	math2=math2+(pow10*(temp_num[counter8]-48));
               pow10=pow10*10;
            }
         }
         else
         {
         test2="";
        	do{
        		counter2++;
        		if(counter2>75)
        		{
           		cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 44\a\a\a";
           		getch();
           		goto Reset;
         	}
            test2=test2+ln[using_line_number].col[counter2];
         }while(ln[using_line_number].col[counter2+1]!=']');
         for(counter10=0;counter10<502;counter10++)
         {
            if(integer_var[counter10].name==test2)
            {
               math2=integer_var[counter10].number;
               break;
            }
            if(counter10>500)
            {
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 45\a\a\a";
               getch();
               goto Reset;
            }
         }
         }
         	if(math2>=array_var[math1].max)
            {
            	cout<<"ERROR on line "<<(using_line_number+1)<<".  ERROR \a\a\a";
               getch();
               goto Reset;
            }
            else
         		cout<<array_var[math1].number[math2];
            bool1=false;
            test2="";
            counter2=0;
            counter10=0;
            test="";
            goto Main_Commands;
         }
         if(test=="get_str")
         {
         	test="";
         	counter2++;
            do{
      		counter2++;
            if(counter2>75)
         	{
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 14\a\a\a";
               getch();
               goto Reset;
            }
            test=test+ln[using_line_number].col[counter2];
      		}while(ln[using_line_number].col[counter2+1]!=')');
            if(ln[using_line_number].col[counter2+2]!=';')
            {
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 15\a\a\a";
               getch();
               goto Reset;
            }
            for(counter10;counter10<502;counter10++)
            {
            	if(string_var[counter10].name==test)
               {
               	temp_saver=counter10;
                  break;
               }
               if(counter10>500)
               {
               	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 16\a\a\a";
                  getch();
                  goto Reset;
               }
            }
            cin>>string_var[temp_saver].value;
            counter2=0;
            counter10=0;
            test="";
            goto Main_Commands;
         }
         if(test=="beep")
         {
         	test="";
         	counter2++;
            do{
            	if(counter2>75)
         		{
            		cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 17\a\a\a";
               	getch();
               	goto Reset;
            	}
      			counter2++;
            	test=test+ln[using_line_number].col[counter2];
      		}while(ln[using_line_number].col[counter2+1]!=')');
            if(ln[using_line_number].col[counter2+2]!=';')
            {
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 18\a\a\a";
               getch();
               goto Reset;
            }
            if(test=="1")
            {
            	cout<<"\a";
               counter2=0;
            	test="";
            	goto Main_Commands;
            }
            counter2=0;
            test="";
            goto Main_Commands;
         }
         cout<<test<<"\n";
         cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 19\a\a\a";
         getch();
         goto Reset;
      }
      if(test=="set")
      {
      	test="";
         do{
      		counter2++;
         	test=test+ln[using_line_number].col[counter2];
         	if(counter2>75)
         	{
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 20\a\a\a";
               getch();
               goto Reset;
            }
      	}while(ln[using_line_number].col[counter2+1]!='(');
         if(test=="color")
         {
         	cmd[0]='c';
         	cmd[1]='o';
				cmd[2]='l';
				cmd[3]='o';
				cmd[4]='r';
				cmd[5]=' ';
         	test="";
            char_counter=6;
            counter2++;
            do{
            	if(counter2>75)
         		{
            		cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 21\a\a\a";
               	getch();
               	goto Reset;
            	}
      			counter2++;
               cmd[char_counter]=ln[using_line_number].col[counter2];
               char_counter++;
      		}while(ln[using_line_number].col[counter2+1]!=')');
            cmd[char_counter]='\0';
            system(cmd);
            for(normal_counter=0;normal_counter<20;normal_counter++)
            {
            	cmd[normal_counter]=' ';
            }
            cmd[normal_counter]='\0';
            goto Main_Commands;
         }
      	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 22\a\a\a";
         getch();
         goto Reset;
      }
      ////////////////////////////////////////
      ////////////////////////////////////////
      if(test=="start")
      {
         counter2++;
      	test="";
         do{
      		counter2++;
         	test=test+ln[using_line_number].col[counter2];
         	if(counter2>75)
         	{
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 23\a\a\a";
               getch();
               goto Reset;
            }
      	}while(ln[using_line_number].col[counter2+1]!='(');
         if(test=="cmd")
         {
         	test="";
         	counter2++;
            do{
            	if(counter2>75)
         		{
            		cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 24\a\a\a";
               	getch();
               	goto Reset;
            	}
      			counter2++;
            	test=test+ln[using_line_number].col[counter2];
      		}while(ln[using_line_number].col[counter2+1]!=')');
            if(ln[using_line_number].col[counter2+2]!=';')
            {
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 25\a\a\a";
               getch();
               goto Reset;
            }
            if(test=="1")
            {
            	system("cmd");
               counter2=0;
            	test="";
            	goto Main_Commands;
            }
            counter2=0;
            test="";
            goto Main_Commands;
         }
      	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 26\a\a\a";
         getch();
         goto Reset;
      }
      ////////////////////////////////////////
    	////////////////////////////////////////
      if(test=="sendto")
      {
      	test="";
         do{
      		counter2++;
         	test=test+ln[using_line_number].col[counter2];
         	if(counter2>75)
         	{
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 27\a\a\a";
               getch();
               goto Reset;
            }
      	}while(ln[using_line_number].col[counter2+1]!='(');
         if(test=="cmd")
         {
            char_counter=0;
            counter2++;
            do{
            	if(counter2>75)
         		{
            		cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 28\a\a\a";
               	getch();
               	goto Reset;
            	}
      			counter2++;
               if(ln[using_line_number].col[counter2]!='|')
               {
               	cmd[char_counter]=ln[using_line_number].col[counter2];
               }
               if(ln[using_line_number].col[counter2]=='|')
               {
               	cmd[char_counter]='\\';
                  cmd[char_counter+1]='\\';
                  char_counter++;
               }
               char_counter++;
      		}while(ln[using_line_number].col[counter2+1]!=')');
            cmd[char_counter]='\0';
            system(cmd);
            for(normal_counter=0;normal_counter<20;normal_counter++)
            {
            	cmd[normal_counter]=' ';
            }
            cmd[normal_counter]='\0';
            goto Main_Commands;
         }
      	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 29\a\a\a";
         getch();
         goto Reset;
      }
      ////////////////////////////////////////
    	////////////////////////////////////////
      if(test=="program")
      {
      	test="";
  	      do{
      		counter2++;
            if(counter2>75)
         	{
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 30\a\a\a";
               getch();
               goto Reset;
            }
         	test=test+ln[using_line_number].col[counter2];
     	   }while(ln[using_line_number].col[counter2+1]!='(');
         ////////////////////////////////////////
			////////////////////////////////////////
         if(test=="wait")
         {
         	test="";
         	counter2++;
            do{
            	if(counter2>75)
         		{
            		cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 31\a\a\a";
               	getch();
               	goto Reset;
            	}
      			counter2++;
            	test=test+ln[using_line_number].col[counter2];
      		}while(ln[using_line_number].col[counter2+1]!=')');
            if(ln[using_line_number].col[counter2+2]!=';')
            {
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 32\a\a\a";
               getch();
               goto Reset;
            }
            if(test=="1")
            {
            	getch();
               counter2=0;
            	test="";
            	goto Main_Commands;
            }
            counter2=0;
            test="";
            goto Main_Commands;
         }
         ////////////////////////////////////////
    		////////////////////////////////////////
      	if(test=="goto_line")
      	{
      		test="";
      	   counter2++;
         	do{
         		if(counter2>75)
            	{
            		cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 33\a\a\a";
               	getch();
               	goto Reset;
            	}
            	counter2++;
            	test=test+ln[using_line_number].col[counter2];
         	}while(ln[using_line_number].col[counter2+1]!=')');
         	for(counter12=0;counter12<51;counter12++)
            {
               if(counter12>49)
               {
               	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 34\a\a\a";
                  getch();
                  goto Reset;
               }
            	if(test==goto_num[counter12].goto_name)
               {
               	using_line_number=goto_num[counter12].line_number;
                  goto Main_Commands;
               }
            }
         	counter2=0;
         	test="";
         	goto Main_Commands;
      	}
         if(test=="save")
      	{
         	test="";
         	counter2++;
            do{
            	if(counter2>75)
         		{
            		cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 35\a\a\a";
               	getch();
               	goto Reset;
            	}
      			counter2++;
               if(ln[using_line_number].col[counter2]!='>')
               {
               	filename[char_counter]=ln[using_line_number].col[counter2];
               }
               if(ln[using_line_number].col[counter2]=='>')
               {
               	filename[char_counter]='\\';
                  filename[char_counter+1]='\\';
                  char_counter++;
               }
               char_counter++;
      		}while(ln[using_line_number].col[counter2+1]!=')');
            filename[char_counter]='\0';
            if(ln[using_line_number].col[counter2+2]!=';')
            {
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 36\a\a\a";
               getch();
               goto Reset;
            }
            ofstream save(filename,ios::out);
            for(cleaner_y=0;cleaner_y<230;cleaner_y++)
				{
					for(cleaner_x=0;cleaner_x<75;cleaner_x++)
					{
						save<<ln[cleaner_y].col[cleaner_x];
					}
               save<<"\n";
	  			}
            save.close();
            counter2=0;
            test="";
            goto Main_Commands;
      	}
         if(test=="restart")
         {
         	test="";
         	counter2++;
            do{
            	if(counter2>75)
         		{
            		cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 37\a\a\a";
               	getch();
               	goto Reset;
            	}
      			counter2++;
            	test=test+ln[using_line_number].col[counter2];
      		}while(ln[using_line_number].col[counter2+1]!=')');
            if(ln[using_line_number].col[counter2+2]!=';')
            {
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 38\a\a\a";
               getch();
               goto Reset;
            }
            if(test=="1")
            {
            	using_line_number=main_start;
               counter2=0;
            	test="";
            	goto Main_Commands;
            }
            counter2=0;
            test="";
            goto Main_Commands;
         }
         if(test=="exit")
         {
         	test="";
         	counter2++;
            do{
            	if(counter2>75)
         		{
            		cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 39\a\a\a";
               	getch();
               	goto Reset;
            	}
      			counter2++;
            	test=test+ln[using_line_number].col[counter2];
      		}while(ln[using_line_number].col[counter2+1]!=')');
            if(ln[using_line_number].col[counter2+2]!=';')
            {
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 40\a\a\a";
               getch();
               goto Reset;
            }
            if(test=="1")
            {
            	goto Reset;
            }
            counter2=0;
            test="";
            goto Main_Commands;
         }
         cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 41\a\a\a";
         getch();
         goto Reset;
      }
    ////////////////////////////////////////
    ////////////////////////////////////////
    ////////////////////////////////////////
    ////////////////////////////////////////
    if(test=="math")
    {
    	test="";
      do{
      	counter2++;
         if(counter2>75)
         {
           	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 42\a\a\a";
            getch();
            goto Reset;
         }
         test=test+ln[using_line_number].col[counter2];
      }while(ln[using_line_number].col[counter2+1]!='(');
      ////////////////////////////////////////
		////////////////////////////////////////
      if(test=="sum"||test=="minus"||test=="multiply"||test=="division"||test=="power"||test=="squareroot"||test=="modulus")
      {
      	test2=test;
      	test="";
         counter2++;
         counter9=counter2;
         do{
        		counter9++;
            if(ln[using_line_number].col[counter9]<48||ln[using_line_number].col[counter9]>57)
            {
            	bool1=true;
            }
         }while(ln[using_line_number].col[counter9+1]!=',');
         if(bool1!=true)
         {
         	do{
        			counter2++;
            	temp_num[counter8]=ln[using_line_number].col[counter2];
            	counter8++;
        			if(counter2>75)
        			{
           			cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 43\a\a\a";
           			getch();
           			goto Reset;
         		}
            }while(ln[using_line_number].col[counter2+1]!=',');
            pow10=1;
            counter8--;
            math1=0;
            for(counter8;counter8>-1;counter8--)
            {
            	math1=math1+(pow10*(temp_num[counter8]-48));
               pow10=pow10*10;
            }
         }
         else
         {
        	do{
        		counter2++;
        		if(counter2>75)
        		{
           		cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 44\a\a\a";
           		getch();
           		goto Reset;
         	}
            test=test+ln[using_line_number].col[counter2];
         }while(ln[using_line_number].col[counter2+1]!=',');
         for(counter10=0;counter10<502;counter10++)
         {
            if(integer_var[counter10].name==test)
            {
               math1=counter10;
               break;
            }
            if(counter10>500)
            {
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 45\a\a\a";
               getch();
               goto Reset;
            }
         }
         }
         test="";
         counter2++;
         counter9=counter2;
         counter8=0;
         temp_bool=false;
         do{
        		counter9++;
            if(ln[using_line_number].col[counter9]<48||ln[using_line_number].col[counter9]>57)
            {
            	bool2=true;
            }
         }while(ln[using_line_number].col[counter9+1]!=',');
         if(bool2!=true)
         {
         	do{
        			counter2++;
            	temp_num[counter8]=ln[using_line_number].col[counter2];
            	counter8++;
        			if(counter2>75)
        			{
           			cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 46\\a\a\a";
           			getch();
           			goto Reset;
         		}
            }while(ln[using_line_number].col[counter2+1]!=',');
            pow10=1;
            math2=0;
            counter8--;
            for(counter8;counter8>-1;counter8--)
            {
            	math2=math2+(pow10*(temp_num[counter8]-48));
               pow10=pow10*10;
            }
         }
         else
         {
         do{
         	counter2++;
         	if(counter2>75)
         	{
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 47\a\a\a";
            	getch();
            	goto Reset;
         	}
         	test=test+ln[using_line_number].col[counter2];
         }while(ln[using_line_number].col[counter2+1]!=',');
         for(counter10=0;counter10<502;counter10++)
         {
            if(integer_var[counter10].name==test)
            {
               math2=counter10;
               break;
            }
            if(counter10>500)
            {
               cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 48\a\a\a";
               getch();
               goto Reset;
            }
         }
         }
         test="";
         counter2++;
         do{
         	counter2++;
         	if(counter2>75)
         	{
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 49\a\a\a";
            	getch();
            	goto Reset;
         	}
         	test=test+ln[using_line_number].col[counter2];
         }while(ln[using_line_number].col[counter2+1]!=')');
         for(counter10=0;counter10<502;counter10++)
         {
            if(integer_var[counter10].name==test)
            {
               math3=counter10;
               break;
            }
            if(counter10>500)
            {
               cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 50\a\a\a";
               getch();
               goto Reset;
            }
         }
         if(ln[using_line_number].col[counter2+2]!=';')
         {
            cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 51\a\a\a";
            getch();
            goto Reset;
         }
         if(test2=="sum")
         {
         	if(bool1==true&&bool2==true)
         	{
         		integer_var[math3].number=integer_var[math1].number+integer_var[math2].number;
         	}
         	if(bool1==false&&bool2==false)
         	{
         		integer_var[math3].number=math1+math2;
         	}
         	if(bool1==true&&bool2==false)
         	{
         		integer_var[math3].number=integer_var[math1].number+math2;
         	}
         	if(bool1==false&&bool2==true)
         	{
         		integer_var[math3].number=math1+integer_var[math2].number;
         	}
         }
         if(test2=="minus")
         {
         	if(bool1==true&&bool2==true)
         	{
         		integer_var[math3].number=integer_var[math1].number-integer_var[math2].number;
         	}
         	if(bool1==false&&bool2==false)
         	{
         		integer_var[math3].number=math1-math2;
         	}
         	if(bool1==true&&bool2==false)
         	{
         		integer_var[math3].number=integer_var[math1].number-math2;
         	}
         	if(bool1==false&&bool2==true)
         	{
         		integer_var[math3].number=math1-integer_var[math2].number;
         	}
         }
         if(test2=="multiply")
         {
         	if(bool1==true&&bool2==true)
         	{
         		integer_var[math3].number=integer_var[math1].number*integer_var[math2].number;
         	}
         	if(bool1==false&&bool2==false)
         	{
         		integer_var[math3].number=math1*math2;
         	}
         	if(bool1==true&&bool2==false)
         	{
         		integer_var[math3].number=integer_var[math1].number*math2;
         	}
         	if(bool1==false&&bool2==true)
         	{
         		integer_var[math3].number=math1*integer_var[math2].number;
         	}
         }
         if(test2=="division")
         {
         	if(bool1==true&&bool2==true)
         	{
         		integer_var[math3].number=integer_var[math1].number/integer_var[math2].number;
         	}
         	if(bool1==false&&bool2==false)
         	{
         		integer_var[math3].number=math1/math2;
         	}
         	if(bool1==true&&bool2==false)
         	{
         		integer_var[math3].number=integer_var[math1].number/math2;
         	}
         	if(bool1==false&&bool2==true)
         	{
         		integer_var[math3].number=math1/integer_var[math2].number;
         	}
         }
         if(test2=="power")
         {
         	if(bool1==true&&bool2==true)
         	{
         		integer_var[math3].number=pow(integer_var[math1].number,integer_var[math2].number);
         	}
         	if(bool1==false&&bool2==false)
         	{
         		integer_var[math3].number=pow(math1,math2);
         	}
         	if(bool1==true&&bool2==false)
         	{
         		integer_var[math3].number=pow(integer_var[math1].number,math2);
         	}
         	if(bool1==false&&bool2==true)
         	{
         		integer_var[math3].number=pow(math1,integer_var[math2].number);
         	}
         }
         if(test2=="squareroot")
         {
         	if(bool1==true&&bool2==true)
         	{
         		integer_var[math3].number=sqrt(integer_var[math1].number);
         	}
         	if(bool1==false&&bool2==false)
         	{
         		integer_var[math3].number=sqrt(math1);
         	}
         	if(bool1==true&&bool2==false)
         	{
         		integer_var[math3].number=sqrt(integer_var[math1].number);
         	}
         	if(bool1==false&&bool2==true)
         	{
         		integer_var[math3].number=sqrt(math1);
         	}
         }
         if(test2=="modulus")
         {
         	if(bool1==true&&bool2==true)
         	{
         		integer_var[math3].number=integer_var[math1].number%integer_var[math2].number;
         	}
         	if(bool1==false&&bool2==false)
         	{
         		integer_var[math3].number=math1%math2;
         	}
         	if(bool1==true&&bool2==false)
         	{
         		integer_var[math3].number=integer_var[math1].number%math2;
         	}
         	if(bool1==false&&bool2==true)
         	{
         		integer_var[math3].number=math1%integer_var[math2].number;
         	}
         }
         bool1=false;
         bool2=false;
         test="";
         test2="";
         counter2=0;
         counter10=0;
         temp_bool=0;
         counter7=0;
         counter8=0;
         math1=0;
         math2=0;
         math3=0;
         goto Main_Commands;
      }
    }
    ////////////////////////////////////////
    ////////////////////////////////////////
    ////////////////////////////////////////
    ////////////////////////////////////////
    if(test=="dothis")
    {
    	test="";
      do{
      	counter2++;
         if(counter2>75)
         {
           	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 52\a\a\a";
            getch();
            goto Reset;
         }
         test=test+ln[using_line_number].col[counter2];
      }while(ln[using_line_number].col[counter2+1]!='(');
      if(test=="ifint")
      {
    		counter8=0;
    		test="";
         test2="";
         test3="";
         counter2++;
         counter9=counter2;
         bool1=false;
         bool2=false;
         do{
        		counter9++;
            if(ln[using_line_number].col[counter9]<48||ln[using_line_number].col[counter9]>57)
            {
            	bool1=true;
            }
         }while(ln[using_line_number].col[counter9+1]!='<'&&ln[using_line_number].col[counter9+1]!='>'&&ln[using_line_number].col[counter9+1]!='='&&ln[using_line_number].col[counter9+1]!='~');
         if(bool1!=true)
         {
         	do{
        			counter2++;
            	temp_num[counter8]=ln[using_line_number].col[counter2];
            	counter8++;
        			if(counter2>75)
        			{
           			cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 53\a\a\a";
           			getch();
           			goto Reset;
         		}
            }while(ln[using_line_number].col[counter2+1]!='<'&&ln[using_line_number].col[counter2+1]!='>'&&ln[using_line_number].col[counter2+1]!='='&&ln[using_line_number].col[counter2+1]!='~');
            test2=test2+ln[using_line_number].col[counter2+1];
            pow10=1;
            counter8--;
            math1=0;
            for(counter8;counter8>-1;counter8--)
            {
            	math1=math1+(pow10*(temp_num[counter8]-48));
               pow10=pow10*10;
            }
         }
         else
         {
        	do{
        		counter2++;
        		if(counter2>75)
        		{
           		cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 54\a\a\a";
           		getch();
           		goto Reset;
         	}
            test=test+ln[using_line_number].col[counter2];
         }while(ln[using_line_number].col[counter2+1]!='<'&&ln[using_line_number].col[counter2+1]!='>'&&ln[using_line_number].col[counter2+1]!='='&&ln[using_line_number].col[counter2+1]!='~');
         test2=test2+ln[using_line_number].col[counter2+1];
         for(counter10=0;counter10<502;counter10++)
         {
            if(integer_var[counter10].name==test)
            {
               math1=counter10;
               break;
            }
            if(counter10>500)
            {
               cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 55\a\a\a";
               getch();
               goto Reset;
            }
         }
         }
         test="";
         counter2++;
         counter9=counter2;
         counter8=0;
         bool2=false;
         do{
        		counter9++;
            if(ln[using_line_number].col[counter9]<48||ln[using_line_number].col[counter9]>57)
            {
            	bool2=true;
            }
         }while(ln[using_line_number].col[counter9+1]!=',');
         if(bool2!=true)
         {
         	do{
        			counter2++;
            	temp_num[counter8]=ln[using_line_number].col[counter2];
            	counter8++;
        			if(counter2>75)
        			{
           			cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 56\a\a\a";
           			getch();
           			goto Reset;
         		}
            }while(ln[using_line_number].col[counter2+1]!=',');
            pow10=1;
            math2=0;
            counter8--;
            for(counter8;counter8>-1;counter8--)
            {
            	math2=math2+(pow10*(temp_num[counter8]-48));
               pow10=pow10*10;
            }
         }
         else
         {
         do{
         	counter2++;
         	if(counter2>75)
         	{
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 57\a\a\a";
            	getch();
            	goto Reset;
         	}
         	test=test+ln[using_line_number].col[counter2];
         }while(ln[using_line_number].col[counter2+1]!=',');
         for(counter10=0;counter10<502;counter10++)
         {
            if(integer_var[counter10].name==test)
            {
               math2=counter10;
               break;
            }
            if(counter10>500)
            {
               cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 58\a\a\a";
               getch();
               goto Reset;
            }
         }
         }
         test3="";
         counter2++;
         do{
         	counter2++;
         	if(counter2>75)
         	{
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 59\a\a\a";
            	getch();
            	goto Reset;
         	}
         	test3=test3+ln[using_line_number].col[counter2];
         }while(ln[using_line_number].col[counter2+1]!=',');
         test4="";
         counter2++;
         do{
         	counter2++;
         	if(counter2>75)
         	{
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 60\a\a\a";
            	getch();
            	goto Reset;
         	}
         	test4=test4+ln[using_line_number].col[counter2];
         }while(ln[using_line_number].col[counter2+1]!=')');
         if(ln[using_line_number].col[counter2+2]!=';')
         {
            cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 61\a\a\a";
            getch();
            goto Reset;
         }
         for(normal_counter=0;normal_counter<52;normal_counter++)
         {
               if(normal_counter>49)
               {
                  cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 62\a\a\a";
                  getch();
                  goto Reset;
               }
               if(goto_num[normal_counter].goto_name==test3)
               {
               	gtnum=goto_num[normal_counter].line_number;
                  break;
               }
         }
         for(normal_counter=0;normal_counter<52;normal_counter++)
         {
               if(normal_counter>49)
               {
                  cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 63\a\a\a";
                  getch();
                  goto Reset;
               }
               if(goto_num[normal_counter].goto_name==test4)
               {
                  gtnum2=goto_num[normal_counter].line_number;
                  break;
               }
         }
         if(test2=="=")
         {
         	if(bool1==true&&bool2==true)
         	{
               if(integer_var[math1].number==integer_var[math2].number)
            	{
            		using_line_number=gtnum;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
               if(integer_var[math1].number!=integer_var[math2].number)
            	{
            		using_line_number=gtnum2;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
            }
         	if(bool1==false&&bool2==false)
         	{
         		if(math1==math2)
            	{
            		using_line_number=gtnum;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
               if(math1!=math2)
            	{
            		using_line_number=gtnum2;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
         	}
         	if(bool1==true&&bool2==false)
         	{
         		if(integer_var[math1].number==math2)
            	{
            		using_line_number=gtnum;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
               if(integer_var[math1].number!=math2)
            	{
            		using_line_number=gtnum2;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
         	}
         	if(bool1==false&&bool2==true)
         	{
         		if(math1==integer_var[math2].number)
            	{
            		using_line_number=gtnum;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
               if(math1!=integer_var[math2].number)
            	{
            		using_line_number=gtnum2;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
         	}
         }
         if(test2=="~")
         {
         	if(bool1==true&&bool2==true)
         	{
               if(integer_var[math1].number!=integer_var[math2].number)
            	{
            		using_line_number=gtnum;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
               if(integer_var[math1].number==integer_var[math2].number)
            	{
            		using_line_number=gtnum2;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
            }
         	if(bool1==false&&bool2==false)
         	{
         		if(math1!=math2)
            	{
            		using_line_number=gtnum;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
               if(math1==math2)
            	{
            		using_line_number=gtnum2;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
         	}
         	if(bool1==true&&bool2==false)
         	{
         		if(integer_var[math1].number!=math2)
            	{
            		using_line_number=gtnum;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
               if(integer_var[math1].number==math2)
            	{
            		using_line_number=gtnum2;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
         	}
         	if(bool1==false&&bool2==true)
         	{
         		if(math1!=integer_var[math2].number)
            	{
            		using_line_number=gtnum;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
               if(math1==integer_var[math2].number)
            	{
            		using_line_number=gtnum2;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
         	}
         }
         if(test2=="<")
         {
         	if(bool1==true&&bool2==true)
         	{
               if(integer_var[math1].number<integer_var[math2].number)
            	{
            		using_line_number=gtnum;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
               if(integer_var[math1].number>=integer_var[math2].number)
            	{
            		using_line_number=gtnum2;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
            }
         	if(bool1==false&&bool2==false)
         	{
         		if(math1<math2)
            	{
            		using_line_number=gtnum;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
               if(math1>=math2)
            	{
            		using_line_number=gtnum2;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
         	}
         	if(bool1==true&&bool2==false)
         	{
         		if(integer_var[math1].number<math2)
            	{
            		using_line_number=gtnum;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
               if(integer_var[math1].number>=math2)
            	{
            		using_line_number=gtnum2;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
         	}
         	if(bool1==false&&bool2==true)
         	{
         		if(math1<integer_var[math2].number)
            	{
            		using_line_number=gtnum;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
               if(math1>=integer_var[math2].number)
            	{
            		using_line_number=gtnum2;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
         	}
         }
         if(test2==">")
         {
         	if(bool1==true&&bool2==true)
         	{
               if(integer_var[math1].number>integer_var[math2].number)
            	{
            		using_line_number=gtnum;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
               if(integer_var[math1].number<=integer_var[math2].number)
            	{
            		using_line_number=gtnum2;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
            }
         	if(bool1==false&&bool2==false)
         	{
         		if(math1>math2)
            	{
            		using_line_number=gtnum;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
               if(math1<=math2)
            	{
            		using_line_number=gtnum2;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
         	}
         	if(bool1==true&&bool2==false)
         	{
         		if(integer_var[math1].number>math2)
            	{
            		using_line_number=gtnum;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
               if(integer_var[math1].number<=math2)
            	{
            		using_line_number=gtnum2;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
         	}
         	if(bool1==false&&bool2==true)
         	{
         		if(math1>integer_var[math2].number)
            	{
            		using_line_number=gtnum;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
               if(math1<=integer_var[math2].number)
            	{
            		using_line_number=gtnum2;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
         	}
         }
         cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 64\a\a\a";
         getch();
         goto Reset;
         bool1=false;
         bool2=false;
         test3="";
         test="";
         test2="";
         test4="";
         counter2=0;
         counter10=0;
         temp_bool=0;
         counter7=0;
         counter8=0;
         math1=0;
         math2=0;
         math3=0;
         goto Main_Commands;
      }
      if(test=="ifstrtxt")
      {
      	test="";
         counter2++;
      	do{
        		counter2++;
        		if(counter2>75)
        		{
           		cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 54\a\a\a";
           		getch();
           		goto Reset;
         	}
            test=test+ln[using_line_number].col[counter2];
         }while(ln[using_line_number].col[counter2+1]!='='&&ln[using_line_number].col[counter2+1]!='~');
         normal_counter2=counter2+1;
         for(normal_counter=0;normal_counter<102;normal_counter++)
         {

               if(normal_counter>99)
               {
                  cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 62\a\a\a";
                  getch();
                  goto Reset;
               }
               if(string_var[normal_counter].name==test)
               {
               	math1=normal_counter;
                  break;
               }
         }
         test2="";
         counter2++;
      	do{
        		counter2++;
        		if(counter2>75)
        		{
           		cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 54\a\a\a";
           		getch();
           		goto Reset;
         	}
            test2=test2+ln[using_line_number].col[counter2];
         }while(ln[using_line_number].col[counter2+1]!=',');
         counter2++;
         do{
         	counter2++;
         	if(counter2>75)
         	{
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 59\a\a\a";
            	getch();
            	goto Reset;
         	}
         	test3=test3+ln[using_line_number].col[counter2];
         }while(ln[using_line_number].col[counter2+1]!=',');
         test4="";
         counter2++;
         do{
         	counter2++;
         	if(counter2>75)
         	{
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 60\a\a\a";
            	getch();
            	goto Reset;
         	}
         	test4=test4+ln[using_line_number].col[counter2];
         }while(ln[using_line_number].col[counter2+1]!=')');
         for(normal_counter=0;normal_counter<52;normal_counter++)
         {
               if(normal_counter>49)
               {
                  cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 62\a\a\a";
                  getch();
                  goto Reset;
               }
               if(goto_num[normal_counter].goto_name==test3)
               {
               	gtnum=goto_num[normal_counter].line_number;
                  break;
               }
         }
         for(normal_counter=0;normal_counter<52;normal_counter++)
         {
               if(normal_counter>49)
               {
                  cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 63\a\a\a";
                  getch();
                  goto Reset;
               }
               if(goto_num[normal_counter].goto_name==test4)
               {
                  gtnum2=goto_num[normal_counter].line_number;
                  break;
               }
         }
         test=ln[using_line_number].col[normal_counter2];
         normal_counter2=0;
         if(test=="~")
         {
               if(string_var[math1].value!=test2)
            	{
            		using_line_number=gtnum;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
               if(string_var[math1].value==test2)
            	{
            		using_line_number=gtnum2;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
         }
         if(test=="=")
         {
               if(string_var[math1].value==test2)
            	{
            		using_line_number=gtnum;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
               if(string_var[math1].value!=test2)
            	{
            		using_line_number=gtnum2;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
         }
         normal_counter=0;
         normal_counter2=0;
         bool1=false;
         bool2=false;
         test3="";
         test="";
         test2="";
         test4="";
         counter2=0;
         counter10=0;
         temp_bool=0;
         counter7=0;
         counter8=0;
         math1=0;
         math2=0;
         math3=0;
         cout<<"ERROR on line "<<(using_line_number+1)<<".  ERROR \a\a\a";
         getch();
         goto Reset;
      }
      if(test=="ifstrstr")
      {
      	test="";
         counter2++;
      	do{
        		counter2++;
        		if(counter2>75)
        		{
           		cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 54\a\a\a";
           		getch();
           		goto Reset;
         	}
            test=test+ln[using_line_number].col[counter2];
         }while(ln[using_line_number].col[counter2+1]!='='&&ln[using_line_number].col[counter2+1]!='~');
         normal_counter2=counter2+1;
         for(normal_counter=0;normal_counter<102;normal_counter++)
         {

               if(normal_counter>99)
               {
                  cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 62\a\a\a";
                  getch();
                  goto Reset;
               }
               if(string_var[normal_counter].name==test)
               {
               	math1=normal_counter;
                  break;
               }
         }
         test2="";
         counter2++;
      	do{
        		counter2++;
        		if(counter2>75)
        		{
           		cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 54\a\a\a";
           		getch();
           		goto Reset;
         	}
            test2=test2+ln[using_line_number].col[counter2];
         }while(ln[using_line_number].col[counter2+1]!=',');
         for(normal_counter=0;normal_counter<102;normal_counter++)
         {

               if(normal_counter>99)
               {
                  cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 62\a\a\a";
                  getch();
                  goto Reset;
               }
               if(string_var[normal_counter].name==test2)
               {
               	math2=normal_counter;
                  break;
               }
         }
         counter2++;
         do{
         	counter2++;
         	if(counter2>75)
         	{
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 59\a\a\a";
            	getch();
            	goto Reset;
         	}
         	test3=test3+ln[using_line_number].col[counter2];
         }while(ln[using_line_number].col[counter2+1]!=',');
         test4="";
         counter2++;
         do{
         	counter2++;
         	if(counter2>75)
         	{
            	cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 60\a\a\a";
            	getch();
            	goto Reset;
         	}
         	test4=test4+ln[using_line_number].col[counter2];
         }while(ln[using_line_number].col[counter2+1]!=')');
         for(normal_counter=0;normal_counter<52;normal_counter++)
         {
               if(normal_counter>49)
               {
                  cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 62\a\a\a";
                  getch();
                  goto Reset;
               }
               if(goto_num[normal_counter].goto_name==test3)
               {
               	gtnum=goto_num[normal_counter].line_number;
                  break;
               }
         }
         for(normal_counter=0;normal_counter<52;normal_counter++)
         {
               if(normal_counter>49)
               {
                  cout<<"ERROR on line "<<(using_line_number+1)<<".ERROR 63\a\a\a";
                  getch();
                  goto Reset;
               }
               if(goto_num[normal_counter].goto_name==test4)
               {
                  gtnum2=goto_num[normal_counter].line_number;
                  break;
               }
         }
         test=ln[using_line_number].col[normal_counter2];
         normal_counter2=0;
         if(test=="~")
         {
               if(string_var[math1].value!=string_var[math2].value)
            	{
            		using_line_number=gtnum;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
               if(string_var[math1].value==string_var[math2].value)
            	{
            		using_line_number=gtnum2;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
         }
         if(test=="=")
         {
               if(string_var[math1].value==string_var[math2].value)
            	{
            		using_line_number=gtnum;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
               if(string_var[math1].value!=string_var[math2].value)
            	{
            		using_line_number=gtnum2;
                  normal_counter=0;
                  normal_counter2=0;
                  bool1=false;
         			bool2=false;
         			test3="";
         			test="";
         			test2="";
         			test4="";
         			counter2=0;
         			counter10=0;
         			temp_bool=0;
         			counter7=0;
         			counter8=0;
       			   math1=0;
         			math2=0;
         			math3=0;
         			goto Main_Commands;
         		}
         }
         normal_counter=0;
         normal_counter2=0;
         bool1=false;
         bool2=false;
         test3="";
         test="";
         test2="";
         test4="";
         counter2=0;
         counter10=0;
         temp_bool=0;
         counter7=0;
         counter8=0;
         math1=0;
         math2=0;
         math3=0;
         cout<<"ERROR on line "<<(using_line_number+1)<<".  ERROR \a\a\a";
         getch();
         goto Reset;
      }
    }
    cout<<"ERROR, Bad Command Found On Line \a\a\a";
    cout<<(using_line_number+1);
    getch();
    goto Reset;
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void prt_page()
{
	int counter1,counter2;
	cout<<"              Saturn Programming Language Version 0.65 Beta\n";
	char a=201,b=205,c=187,d=186,e=200,f=188,g=176,h=178;
	cout<<a;
	for(counter1=0;counter1<75;counter1++)
	{
		cout<<b;
	}
	cout<<c<<" "<<g<<g;
	for(counter2=0;counter2<20;counter2++)
	{
		cout<<d;
		for(counter1=0;counter1<75;counter1++)
		{
			cout<<" ";
		}
		cout<<d<<" "<<g<<g;
	}
	cout<<e;
	for(counter1=0;counter1<75;counter1++)
	{
		cout<<b;
	}
	cout<<f<<" \n";
	cout<<"Programmed by K.M.Kambakhsh.";
	cout<<"\nCompile: '\\'  Option: Ctrl+'\\'                         Ln         Col";
}
void prt_square()
{
	int counter1,counter2;
	system("color 97");
	cout<<"              Saturn Programming Language Version 0.65 Beta\n";
	char a=201,b=205,c=187,d=186,e=200,f=188,g=176,h=178;
	cout<<a;
	for(counter1=0;counter1<78;counter1++)
	{
		cout<<b;
	}
   cout<<c;
	for(counter2=0;counter2<22;counter2++)
	{
		cout<<d;
		for(counter1=0;counter1<78;counter1++)
		{
			cout<<" ";
		}
		cout<<d;
	}
	cout<<e;
	for(counter1=0;counter1<78;counter1++)
	{
		cout<<b;
	}
	cout<<f;
   gotoxy(0,0);
   gotoxy(1,2);
}
