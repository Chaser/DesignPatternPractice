package chasej.hfdp.command.remote;

/**
 * Created by chaseaj on 8/26/16.
 */

public class CeilingFanMediumCommand implements Command {
    CeilingFan ceilingFan;

    public CeilingFanMediumCommand(CeilingFan ceilingFan) {
        this.ceilingFan = ceilingFan;
    }
    public void execute() {
        ceilingFan.medium();
    }
}
