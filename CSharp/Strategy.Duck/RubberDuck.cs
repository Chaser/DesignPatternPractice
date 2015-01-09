using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Strategy
{
    public class RubberDuck : Duck
    {
        public RubberDuck()
        {
            flyBehaviour = new FlyNoWay();
            quackBehaviour = new Squeak();
        }

        public override void display()
        {
            Console.Out.WriteLine("I am a Rubber Duck");
        }
    }
}
