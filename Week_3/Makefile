CC=gcc
CFLAGS=-Wall

all: task1_fork task2_exec task3_chain task4_calc task5_race

task1_fork: task1_fork.c
	$(CC) $(CFLAGS) -o task1_fork task1_fork.c

task2_exec: task2_exec.c
	$(CC) $(CFLAGS) -o task2_exec task2_exec.c

task3_chain: task3_chain.c
	$(CC) $(CFLAGS) -o task3_chain task3_chain.c

task4_calc: task4_calc.c
	$(CC) $(CFLAGS) -o task4_calc task4_calc.c

task5_race: task5_race.c
	$(CC) $(CFLAGS) -o task5_race task5_race.c

clean:
	rm -f task1_fork task2_exec task3_chain task4_calc task5_race