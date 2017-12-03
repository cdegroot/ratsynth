defmodule WiringpiTest do
  use ExUnit.Case
  doctest Wiringpi

  test "greets the world" do
    assert Wiringpi.hello() == :world
  end
end
