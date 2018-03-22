echo "===============================" >> abanlin_map01.result
../resources/filler_vm -f ../resources/maps/map01 -p1 ../fpetras.filler -p2 ../resources/players/abanlin.filler -q | tail -n2 >> abanlin_map01.result
echo "===============================" >> abanlin_map01.result
sed -i orig 's/O/fpetras.filler     /g' abanlin_map01.result
sed -i orig 's/X/abanlin.filler     /g' abanlin_map01.result
rm abanlin_map01.resultorig
