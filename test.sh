#!/bin/sh

for i in {1..1000}
do
	ARG="$(seq 1 10000 | sort -R | tr '\n' ' ' | rev | cut -c 2- | rev)";
	./insert $ARG >> insert.log
done
echo finish insert.log

for i in {1..1000}
do
	ARG="$(seq 1 10000 | sort -R | tr '\n' ' ' | rev | cut -c 2- | rev)";
	./select $ARG >> select.log
done
echo finish select.log

for i in {1..1000}
do
	ARG="$(seq 1 10000 | sort -R | tr '\n' ' ' | rev | cut -c 2- | rev)";
	./merge $ARG >> merge.log
done
echo finish merge.log

for i in {1..1000}
do
	ARG="$(seq 1 10000 | sort -R | tr '\n' ' ' | rev | cut -c 2- | rev)";
	./quick $ARG >> quick.log
done
echo finish quick.log

for i in {1..1000}
do
	ARG="$(seq 1 10000 | sort -R | tr '\n' ' ' | rev | cut -c 2- | rev)";
	./quick_random $ARG >> quick_random.log
done
echo finish quick_random.log
