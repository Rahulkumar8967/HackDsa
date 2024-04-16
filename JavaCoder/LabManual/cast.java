package LabManual;
public class cast {
    public static void main(String[] args) {
        byte b = 11;
        short s = 123;
        int i = 1234;
        long l = 123456;
        float f = (float)12.04;
        double d = 13.1234;
        char c = 'a';
        // Byte 
        System.out.println("Byte");
        b = (byte)s;
        System.out.print(b+" ");
        b = (byte)i;
        System.out.print(b+" ");
        b = (byte)l;
        System.out.print(b+" ");
        b = (byte)f;
        System.out.print(b+" ");
        b = (byte)d;
        System.out.print(b+" ");
        b = (byte)c;
        System.out.print(b+" ");
        //short
        System.out.println("\nShort");
        s = (short)b;
        System.out.print(s+" ");
        s = (short)i;
        System.out.print(s+" ");
        s = (short)l;
        System.out.print(s+" ");
        s = (short)f;
        System.out.print(s+" ");
        s = (short)d;
        System.out.print(s+" ");
        s = (short)c;
        System.out.print(s+" ");
        //int
        System.out.println("\nInt");
        i = (int)b; 
        System.out.print(i+" ");
        i = (int)s;System.out.print(i+" ");
        i = (int)l;System.out.print(i+" ");
        i = (int)f;System.out.print(i+" ");
        i = (int)d;System.out.print(i+" ");
        i = (int)c;System.out.print(i+" ");
        //long
        System.out.println("\nLong");
        l = (long)b;System.out.print(l+" ");
        l = (long)s;System.out.print(l+" ");
        l = (long)i;System.out.print(l+" ");
        l = (long)f;System.out.print(l+" ");
        l = (long)d;System.out.print(l+" ");
        l = (long)c;System.out.print(l+" ");
        //float
        System.out.println("\nFloat");
        f = (float)b;System.out.print(f+" ");
        f = (float)s;System.out.print(f+" ");
        f = (float)i;System.out.print(f+" ");
        f = (float)l;System.out.print(f+" ");
        f = (float)d;System.out.print(f+" ");
        f = (float)c;System.out.print(f+" ");
        //double
        System.out.println("\nDouble");
        d = (double)b;System.out.print(d+" ");
        d = (double)s;System.out.print(d+" ");
        d = (double)i;System.out.print(d+" ");
        d = (double)l;System.out.print(d+" ");
        d = (double)f;System.out.print(d+" ");
        d = (double)c;System.out.print(d+" ");
        //char
        System.out.println("\nChar");
        c = (char)b;System.out.print(c+" ");
        c = (char)s;System.out.print(c+" ");
        c = (char)i;System.out.print(c+" ");
        c = (char)l;System.out.print(c+" ");
        c = (char)f;System.out.print(c+" ");
        c = (char)d;System.out.print(c+" ");       
    }
}
