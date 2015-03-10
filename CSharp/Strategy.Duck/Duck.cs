using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DesignPatterns.Strategy
{
    public abstract class Duck
    {
        protected IFlyBehaviour flyBehaviour;
        protected IQuackBehaviour quackBehaviour;

        public abstract void display();

        public void performFly()
        {
            if(flyBehaviour != null)
                flyBehaviour.fly();
        }

        public void performQuack()
        {
            if(quackBehaviour !=null)
                quackBehaviour.quack();
        }

        public void swim()
        {
            Console.Out.WriteLine("All ducks float, even decoys!");
        }
    }
}
