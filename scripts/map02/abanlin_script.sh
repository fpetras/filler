echo "===============================" >> abanlin_map02.result
../resources/filler_vm -f ../resources/maps/map01 -p1 ../resources/players/abanlin.filler -p2 ../fpetras.filler -q | tail -n2 >> abanlin_map02.result
echo "===============================" >> abanlin_map02.result
sed -i orig 's/O/abanlin.filler     /g' abanlin_map02.result
sed -i orig 's/X/fpetras.filler     /g' abanlin_map02.result
rm abanlin_map02.resultorig
