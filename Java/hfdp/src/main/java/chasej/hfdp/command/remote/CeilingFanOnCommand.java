package chasej.hfdp.command.remote;

/**
 * Created by chaseaj on 8/26/16.
 */
public class CeilingFanOnCommand implements Command {
        CeilingFan ceilingFan;

        public CeilingFanOnCommand(CeilingFan ceilingFan) {
            this.ceilingFan = ceilingFan;
        }

        public void execute() {
            ceilingFan.off();
        }
}
