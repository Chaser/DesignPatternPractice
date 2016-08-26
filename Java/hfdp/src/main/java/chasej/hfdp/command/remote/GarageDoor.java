package chasej.hfdp.command.remote;

/**
 * Created by chaseaj on 8/26/16.
 */
public class GarageDoor {
    String location;

    public GarageDoor(String location) {
        this.location = location;
    }

    public void open() {
        System.out.println(location + " garage Door is Open");
    }

    public void close() {
        System.out.println(location + " garage Door is Close");
    }

    public void stop() {
        System.out.println(location + " garage Door is Stopped");
    }

    public void lightOn() {
        System.out.println(location + " garage light is on");
    }

    public void lightOff() {
        System.out.println(location + " garage light is off");
    }
}

