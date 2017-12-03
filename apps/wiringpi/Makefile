ERLANG_PATH = $(shell erl -eval 'io:format("~s", [lists:concat([code:root_dir(), "/erts-", erlang:system_info(version), "/include"])])' -s init stop -noshell)
CFLAGS = -g -O3 -Wall -Wextra -I$(ERLANG_PATH)

priv/lib_elixir_wiringpi.so:
	$(CC) $(CFLAGS) -shared $(LDFLAGS) -o $@ c_src/*.c
