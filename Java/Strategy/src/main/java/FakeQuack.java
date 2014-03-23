package duck.strategy;

public class FakeQuack implements QuackBehaviour {
	public void quack() {
		System.out.println("Qwak");
	}
}
