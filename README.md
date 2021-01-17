# Saturn Programming Language

This is a shell environment including an interpreter and an editor.
I built this in 2011, in my early years of learning programming.

Example program (Decimal->Hexadecimal conversion):

```
$import#                                                                   
                                                                           
import.lib:library.simp;                                                   
$end_import#                                                               
$var#                                                                      
integer.a=0;                                                               
integer.b=0;                                                               
$end_var#                                                                  
$main#                                                                     
io.print_txt(please enter a number for changing it to hexadecimal: );      
io.get_int(a);                                                             
io.print_txt(&&number );                                                   
io.print_int(a);                                                           
io.print_txt( in hexadecimal is: );                                        
{                                                                          
*address.start1;                                                           
                                                                           
math.modulus(a,16,b);                                                      
dothis.ifint(b=10,s10,e10);                                                
*address.s10;                                                              
io.print_txt(A);                                                           
*address.e10;                                                              
dothis.ifint(b=11,s11,e11);                                                
*address.s11;                                                              
io.print_txt(B);                                                           
*address.e11;                                                              
dothis.ifint(b=12,s12,e12);                                                
*address.s12;                                                              
io.print_txt(C);                                                           
*address.e12;                                                              
dothis.ifint(b=13,s13,e13);                                                
*address.s13;                                                              
io.print_txt(D);                                                           
*address.e13;                                                              
dothis.ifint(b=14,s14,e14);                                                
*address.s14;                                                              
io.print_txt(E);                                                           
*address.e14;                                                              
dothis.ifint(b=15,s15,e15);                                                
*address.s15;                                                              
io.print_txt(F);                                                           
*address.e15;                                                              
dothis.ifint(b<10,s,e);                                                    
*address.s;                                                                
io.print_int(b);                                                           
*address.e;                                                                
math.division(a,16,a);                                                     
dothis.ifint(a~0,start1,end1);                                             
*address.end1;                                                             
}                                                                          
io.print_txt(&&&*please read from right to left*);                         
program.wait(1);                                                           
$end_main#
`
