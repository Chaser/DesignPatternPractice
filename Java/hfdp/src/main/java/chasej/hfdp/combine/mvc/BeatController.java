package chasej.hfdp.combine.mvc;

/**
 * Created by chaseaj on 8/27/16.
 */
public class BeatController implements ControllerInterface {
	BeatModelInterface model;
	DJView view;


    // The controller is the in the middle of the MVC, so it is the object that gets to hold on
    // to the view and the model and glues it all together.
	public BeatController(BeatModelInterface model) {
		this.model = model;
		view = new DJView(this, model);
        view.createView();
        view.createControls();
		view.disableStopMenuItem();
		view.enableStartMenuItem();
		model.initialize();
	}

    // NOTE: the controller is making the intelligent decisions for the view.
    // The view just knows how to turn menu items on and off; it does not know the situations
    // in which it should disable them.
	public void start() {
		model.on();
		view.disableStartMenuItem();
		view.enableStopMenuItem();
	}
  
	public void stop() {
		model.off();
		view.disableStopMenuItem();
		view.enableStartMenuItem();
	}
    
	public void increaseBPM() {
        int bpm = model.getBPM();
        model.setBPM(bpm + 1);
	}
    
	public void decreaseBPM() {
        int bpm = model.getBPM();
        model.setBPM(bpm - 1);
  	}
  
 	public void setBPM(int bpm) {
		model.setBPM(bpm);
	}
}
