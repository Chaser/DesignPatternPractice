using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DesignPatterns.Strategy
{
    public class DecoyDuck : Duck
    {
        public DecoyDuck()
        {
            flyBehaviour = new FlyNoWay();
            quackBehaviour = new MuteQuack();
        }

        public override void display()
        {
            Console.Out.WriteLine("I am a Decoy Duck");
        }
    }
}
