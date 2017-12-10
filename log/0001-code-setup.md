# Step 001: Code setup

For now, I'm developing Ratsynth on the Pi directly, no Nerves for now. Some early
decisions:
- Umbrella app;
- Write a wrapper if you can avoid pulling in a big library
- Start with Wiring and nerves_uart. Maybe switch Wiring for elixir_ale, and
  pigpio is also still an option as it has some niceties like a logic analyzer. 
