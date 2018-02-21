echo "===============================" >> carli_map00.result
../resources/filler_vm -f ../resources/maps/map00 -p1 ../fpetras.filler -p2 ../resources/players/carli.filler -q | tail -n2 >> carli_map00.result
echo "===============================" >> carli_map00.result
sed -i orig 's/O/fpetras.filler     /g' carli_map00.result
sed -i orig 's/X/carli.filler       /g' carli_map00.result
rm carli_map00.resultorig
