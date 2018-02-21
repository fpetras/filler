echo "===============================" >> champely_map00.result
../resources/filler_vm -f ../resources/maps/map00 -p1 ../fpetras.filler -p2 ../resources/players/champely.filler -q | tail -n2 >> champely_map00.result
echo "===============================" >> champely_map00.result
sed -i orig 's/O/fpetras.filler     /g' champely_map00.result
sed -i orig 's/X/champely.filler    /g' champely_map00.result
rm champely_map00.resultorig
