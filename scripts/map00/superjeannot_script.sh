echo "===============================" >> superjeannot_map00.result
../resources/filler_vm -f ../resources/maps/map00 -p1 ../fpetras.filler -p2 ../resources/players/superjeannot.filler -q | tail -n2 >> superjeannot_map00.result
echo "===============================" >> superjeannot_map00.result
sed -i orig 's/O/fpetras.filler     /g' superjeannot_map00.result
sed -i orig 's/X/superjeannot.filler/g' superjeannot_map00.result
rm superjeannot_map00.resultorig
