package chasej.hfdp.combine.mvc;

/**
 * Created by chaseaj on 8/27/16.
 */
public class HeartAdapter implements BeatModelInterface {
    HeartModelInterface heart;

    public HeartAdapter(HeartModelInterface heart) {
        this.heart = heart;
    }

    public void initialize() {

    }

    public void on() {

    }

    public void off() {

    }

    public int getBPM() {
        return this.heart.getHeartRate();
    }

    public void setBPM(int bpm) {

    }

    public void registerObserver(BeatObserver o) {
        this.heart.registerObserver(o);
    }

    public void removeObserver(BeatObserver o) {
        this.heart.removeObserver(o);
    }

    public void registerObserver(BPMObserver o) {
        this.heart.registerObserver(o);
    }

    public void removeObserver(BPMObserver o) {
        this.heart.removeObserver(o);
    }
}
