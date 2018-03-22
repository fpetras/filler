echo "===============================" >> carli_map01.result
../resources/filler_vm -f ../resources/maps/map01 -p2 ../fpetras.filler -p1 ../resources/players/carli.filler -q | tail -n2 >> carli_map01.result
echo "===============================" >> carli_map01.result
sed -i orig 's/O/carli.filler       /g' carli_map01.result
sed -i orig 's/X/fpetras.filler     /g' carli_map01.result
rm carli_map01.resultorig
