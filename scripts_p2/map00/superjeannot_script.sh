echo "===============================" >> superjeannot_map00.result
../resources/filler_vm -f ../resources/maps/map00 -p2 ../fpetras.filler -p1 ../resources/players/superjeannot.filler -q | tail -n2 >> superjeannot_map00.result
echo "===============================" >> superjeannot_map00.result
sed -i orig 's/O/superjeannot.filler/g' superjeannot_map00.result
sed -i orig 's/X/fpetras.filler     /g' superjeannot_map00.result
rm superjeannot_map00.resultorig
