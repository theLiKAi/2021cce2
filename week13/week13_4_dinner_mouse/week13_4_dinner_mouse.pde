void setup(){
    size(300,300);
    fill(#97C4FA);
    textSize(50);
    textAlign(CENTER,CENTER);
}
void draw(){
  background(#FFFAE8);
  text("Dinner 1",150,50);
  text("Dinner 2",150,150);
  text("Dinner 3",150,250);
   int chioice = mouseX % 3;
   if(chioice==0) rect(0,25,50,50);
   if(chioice==1) rect(0,125,50,50);
   if(chioice==2) rect(0,225,50,50);
}
