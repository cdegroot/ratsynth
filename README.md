# Ratsynth

Raspberry Advanced Technology Synthesizer. Yup, a backcronym. 

I have a (nice) Roland stage piano with not enough sound. I have a Raspberry Pi 3 looking for work. And I have a ton of electronic components, among them a ton of ATtiny microprocessors. 

Also, I'm looking for something that's control-software like to write in Elixir. 

So here's the plan:
* [x] Go to Digi-Key and buy 5-pin DIN receptacles (MIDI input) and a 3.5mm jack (sound out);
* [x] Get an RPi3 and a bunch of electronics including ATtiny microprocessors;
* [x] Draw a diagram where the RPi3 gets MIDI from the keyboard and controls a bunch of sound generators (analog, DDS digital) through I2C-controlled microcontrollers;
* [ ] Implement some software to read MIDI and spit out I2C;
* [ ] Get a soldering iron and build some fun sound generating hardware, preferably analog because phat sounds and more fun. 

