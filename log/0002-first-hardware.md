# Step 002: first hardware

I need to test MIDI reception, preferably by a MIDI port connected to my
"lab bench" Pi. Rummage around because I'm 100% sure I have an old Edirol
USB MIDI adapter - nope.

Build a MIDI Out then I can hook up to the GPIO UART TX pin, easy enough.

I started digging and saw stuff with buffers, hex inverters, and what not
and I only have discrete components. Luckily, after a lot of digging,
I find a simple [schematic](https://cdn.instructables.com/FZY/5F8A/ITW4H7RI/FZY5F8AITW4H7RI.MEDIUM.jpg) on an [Instructable for an Arduino Midi drum kit](http://www.instructables.com/id/Pringle-Can-MIDI-Drums/). Using a 2N3906 I whip it up,
test with just a LED (after all, MIDI is just about lighting a remote LED),
and smack it on a prototype board. Testing comes later :-)
