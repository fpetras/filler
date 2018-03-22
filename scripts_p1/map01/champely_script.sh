echo "===============================" >> champely_map01.result
../resources/filler_vm -f ../resources/maps/map01 -p1 ../fpetras.filler -p2 ../resources/players/champely.filler -q | tail -n2 >> champely_map01.result
echo "===============================" >> champely_map01.result
sed -i orig 's/O/fpetras.filler     /g' champely_map01.result
sed -i orig 's/X/champely.filler    /g' champely_map01.result
rm champely_map01.resultorig
