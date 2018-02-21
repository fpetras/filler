echo "===============================" >> champely_map02.result
../resources/filler_vm -f ../resources/maps/map01 -p1 ../resources/players/champely.filler -p2 ../fpetras.filler -q | tail -n2 >> champely_map02.result
echo "===============================" >> champely_map02.result
sed -i orig 's/O/champely.filler    /g' champely_map02.result
sed -i orig 's/X/fpetras.filler     /g' champely_map02.result
rm champely_map02.resultorig
