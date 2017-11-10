package chasej.hfdp.combine.mvc;

/**
 * Created by chaseaj on 8/27/16.
 */
public class DJTestDrive {

    public static void main (String[] args) {
        BeatModelInterface model = new BeatModel();
		ControllerInterface controller = new BeatController(model);
    }
}
