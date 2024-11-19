//content== oops,public-private, getter setter, benefit of getter and setter


/*  OOPS is a simple programming technique in which our programming mainly involves around our object.
Why ?? because by using loops it increasing readibilty as wella as manage bility of our program 
OBJECT  has two things its state/property and its behaviour.

CLASS is a user defined datatype;
*/

#include <iostream>
using namespace std;	

class hero {
// hero property

     int health;                    /* yaha hamara health and level private access mai set hai*/
     char level;                    /*therefor ye dono only class mai access ho sakte*/
     public:

int gethealth (){
 return health;             /*  aab uper ki property to hamne private ker di but inko pure program */
     }                       // mai excess karne ke liye humm getter and setter ka use kerenge
 char getlevel (){
    return level;
 } 

 void sethealth(int h){       // ye functions public mai hai to purre program mai excessable hai
    health=h;
 }  
 void setlevel(char l){
    level= l;
 } 
};

int main()
{
    
    hero saktiman;
    cout << "size of saktiman" << sizeof(saktiman) << endl;
    saktiman.sethealth(20);
    saktiman.setlevel('c');
    cout << "health of saktiman  "<< saktiman.gethealth() << endl;
    cout << "level of saktiman " << saktiman.getlevel() << endl;

/* getter and setter ke fayde ki jab bhi koi chiz private hai to use wahi change ker
paaye joi koi condition ko satisfie kare 
for example 
 sethealth(int h,char A)
 {  if (A==password){
   health=h;
 }}
 */

    return 0;
}
 // FOR A EMPTY class it take 1 byte of memory.