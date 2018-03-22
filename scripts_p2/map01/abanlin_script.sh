echo "===============================" >> abanlin_map01.result
../resources/filler_vm -f ../resources/maps/map01 -p2 ../fpetras.filler -p1 ../resources/players/abanlin.filler -q | tail -n2 >> abanlin_map01.result
echo "===============================" >> abanlin_map01.result
sed -i orig 's/O/abanlin.filler     /g' abanlin_map01.result
sed -i orig 's/X/fpetras.filler     /g' abanlin_map01.result
rm abanlin_map01.resultorig
