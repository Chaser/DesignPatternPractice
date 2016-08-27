package chasej.hfdp.combine.mvc;

/**
 * Created by chaseaj on 8/27/16.
 */
public interface ControllerInterface {
	// These should look familiar after seeing the model’s interface.
	// You can stop and start the beat generation and change the BPM. This interface is
	// “richer” than the BeatModel interface because you can adjust the BPMs with increase and decrease.
	void start();
	void stop();
	void increaseBPM();
	void decreaseBPM();
	void setBPM(int bpm);
}
