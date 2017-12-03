defmodule WiringPi do
  @moduledoc """
  Documentation for Wiringpi.
  """
  require Logger

  @on_load :init

  def init() do
    dir = case :code.priv_dir(:wiringpi) do
            {:error, :bad_name} ->
              {:ok, cwd} = File.cwd()
              priv = Path.join([cwd, "..", "priv"])
              case File.dir?(priv) do
                true  -> priv;
                false -> Path.join(cwd, "priv")
          end;


              dir -> dir
    end
    Logger.info("loading NIF from #{dir}")
    :ok = dir
    |> Path.join("lib_elixir_wiringpi")
    |> :erlang.load_nif(0)
  end

  def open(device_id) do
    exit(:nif_library_not_loaded)
  end

  def write(fd, data) do
    exit(:nif_library_not_loaded)
  end

  def write_reg8(fd, reg, data) do
    exit(:nif_library_not_loaded)
  end

  def write_reg16(fd, reg, data) do
    exit(:nif_library_not_loaded)
  end

end
