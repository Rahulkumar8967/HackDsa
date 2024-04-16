package LabManual;
class rect{
    int length,width;
    rect(int length,int width)
    {
        this.length = length;
        this.width = width;
    }
}
class perimeter extends rect
{
    perimeter(int l,int w){
        super(l,w);
    }
    void printPeri()
    {
        System.out.println(2*(length+width));
    }
}
class area extends rect
{
    area(int l, int w)
    {
        super(l, w);
    }
    void printArea()
    {
        System.out.println(length*width);
    }
}
class volume extends rect
{
    int height;
    volume(int l, int w ,int h)
    {
        super(l,w);
        height = h;
    }
    void printVol()
    {
        System.out.println(length*width*height);
    }
}/* 
public class rectangle {
    public static void main(String[] args) {
        perimeter peri_obj = new perimeter(3, 6) ;
        System.out.print("Perimeter : ");peri_obj.printPeri();
        area area_obj = new area(3, 6);
        System.out.print("Area : ");area_obj.printArea();
        volume vol_obj = new volume(3, 6, 2)  ;
        System.out.print("Volume : ");vol_obj.printVol();
    }
}

*/
    

