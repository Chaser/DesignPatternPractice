package chasej.hfdp.command.remote;

/**
 * Created by chaseaj on 8/26/16.
 */

public class CeilingFanOffCommand implements Command {
    CeilingFan ceilingFan;

    public CeilingFanOffCommand(CeilingFan ceilingFan) {
        this.ceilingFan = ceilingFan;
    }
    public void execute() {
        ceilingFan.off();
    }
}
