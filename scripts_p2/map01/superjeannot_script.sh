echo "===============================" >> superjeannot_map01.result
../resources/filler_vm -f ../resources/maps/map01 -p2 ../fpetras.filler -p1 ../resources/players/superjeannot.filler -q | tail -n2 >> superjeannot_map01.result
echo "===============================" >> superjeannot_map01.result
sed -i orig 's/O/superjeannot.filler/g' superjeannot_map01.result
sed -i orig 's/X/fpetras.filler     /g' superjeannot_map01.result
rm superjeannot_map01.resultorig
