echo "===============================" >> champely_map00.result
../resources/filler_vm -f ../resources/maps/map00 -p2 ../fpetras.filler -p1 ../resources/players/champely.filler -q | tail -n2 >> champely_map00.result
echo "===============================" >> champely_map00.result
sed -i orig 's/O/champely.filler    /g' champely_map00.result
sed -i orig 's/X/fpetras.filler     /g' champely_map00.result
rm champely_map00.resultorig
