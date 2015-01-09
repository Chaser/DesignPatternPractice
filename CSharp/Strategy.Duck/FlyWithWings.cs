using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Strategy
{
    class FlyWithWings : IFlyBehaviour
    {
        public void fly()
        {
            Console.Out.WriteLine("I'm Flying!");
        }
    }
}
