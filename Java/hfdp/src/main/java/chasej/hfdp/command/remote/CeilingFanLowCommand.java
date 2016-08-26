package chasej.hfdp.command.remote;

/**
 * Created by chaseaj on 8/26/16.
 */

public class CeilingFanLowCommand implements Command {
    CeilingFan ceilingFan;

    public CeilingFanLowCommand(CeilingFan ceilingFan) {
        this.ceilingFan = ceilingFan;
    }
    public void execute() {
        ceilingFan.low();
    }
}
