package chasej.hfdp.combine.mvc;

/**
 * Created by chaseaj on 8/27/16.
 */
public interface BeatModelInterface {
    // Methods used by the controller to direct the model based on user interaction
    void initialize();       // Called after BeatModel is instantiated
  
	void on();
  
	void off();
  
    void setBPM(int bpm);

    // These methods allow the view and controller to get the state and to become observers
    int getBPM();

	void registerObserver(BeatObserver o);
  
	void removeObserver(BeatObserver o);
  
	void registerObserver(BPMObserver o);
  
	void removeObserver(BPMObserver o);
}
