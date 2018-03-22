echo "===============================" >> abanlin_map00.result
../resources/filler_vm -f ../resources/maps/map00 -p1 ../fpetras.filler -p2 ../resources/players/abanlin.filler -q | tail -n2 >> abanlin_map00.result
echo "===============================" >> abanlin_map00.result
sed -i orig 's/O/fpetras.filler     /g' abanlin_map00.result
sed -i orig 's/X/abanlin.filler     /g' abanlin_map00.result
rm abanlin_map00.resultorig
