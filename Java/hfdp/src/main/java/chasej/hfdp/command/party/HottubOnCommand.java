package chasej.hfdp.command.party;

/**
 * Created by chaseaj on 8/26/16.
 */
public class HottubOnCommand implements Command {
    Hottub hottub;

    public HottubOnCommand(Hottub hottub) {
        this.hottub = hottub;
    }

    public void execute() {
        hottub.on();
    }

    public void undo() {
        hottub.off();
    }
}
