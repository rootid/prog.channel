
//Ensure that only one instance of a class is created
//Provide a global point of access to the object
//Allow multiple instances in the future without affecting a singleton class's clients

public class SingleTon {

    //Ensures have only single initalized instance/unique object.
    private static SingleTon instance = null;
    
    private Singleton () {
    
    }
    
    //Ensure can access globally
    public static Singleton getInstance () {
        if (instance == null ) {
            instance = new SingleTon();
        }
        return instance;
    }
    
} 


public class Singleton {

    //Ensures have only single initalized instance/unique object.
    private static Singleton instance = null;
    
    private Singleton () {
    
    }
    
    //Ensure anyone can access globally
    public synchronized static Singleton getInstance () {
        if (instance == null ) {
            instance = new SingleTon();
        }
        return instance;
    }
    
} 


//Double checking
public class Singleton {

    //Ensures have only single initalized instance/unique object.
    private static Singleton instance = null;
    
    private Singleton () {
    
    }
    
    //Ensure anyone can access globally
    public static Singleton getInstance () {
        if (instance == null ) {
            synchronized(Singeton.class) {
            if (instance == null) {    
                instance = new SingleTon();
            }
        }
        return instance;
    }
    
} 
