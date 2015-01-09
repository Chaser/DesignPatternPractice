using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Strategy
{
    class MuteQuack : IQuackBehaviour
    {
        public void quack()
        {
            Console.Out.WriteLine("<<Silence>>");
        }
    }
}
