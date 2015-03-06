

abstract class EventData {
      public void addOberver (String name,IObserverer ob);
      public void IObserverer removeObersever(String name);
      private void notfiyObserver ();
}

class WetherData extends EventData{
    
    private double mTemperature;
    private double mHumidity;
    private double mPollution;
    private map<String,Observer> mObsMap;
    
    public WeatherData() {
        mObsMap = new HashMap<String,Observer> ();
    } 
    
    public void addOberver (String name,IObserverer ob) {
        mObsMap.put(name,ob);
    }
    
    public void Observer removeObersever(String name) {
        mObsMap.remove(name);
    }
    
    private void notfiyObserver () {
        for (String name : mObsMap.keys()) {
            IObserverer obs = mObsMap.get(name);
            obs.update(this.mTemrature,this.mHumidity,this.mPollution);
        }
        
    }
    
    public void getDataFromSensor (double mTemp,double mHumid,double mPoll) {
       this.mTemrature = mTemp;
       this.mHumidity = mHumid;
       this.mPollution = mPoll;
       this.notfiyObserver();
    
}

public interface IObserverer {
    
    //public void update(EventData e); //This keeps the things encapsulated 
    
    public void update(double mTemp,double mHumid,double mPoll); //This exposes the things to outside the world
    
}


class DisplayWeb implments IObserver {

    public void update(double mTemp,double mHumid,double mPoll) {
        
    
    }
} 

class DisplayMob implments IObserver {
       public void update(double mTemp,double mHumid,double mPoll) {
        
    
    }
}

class DisplayTablet implments IObserver {
   public void update(double mTemp,double mHumid,double mPoll) {
        
    
    }
}
