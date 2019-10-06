# Hardware Proxy Pattern

## Abstract

The Hardware Proxy Pattern uses a class (or struct) to encapsulate all access to a 
hardware device, regardless of its physical interface. The hardware may be memory, port, 
or interrupt mapped, or may even be mapped via a serial connection, bus, network, or 
wireless link. The proxy publishes services that allow values to be read 
from and written to the device, as well as initialize, configure, and shut down 
the device as appropriate. The proxy provides an encoding and connection-independent 
interface for clients and so promotes easy modification should the nature of the 
device interface or connection change.

