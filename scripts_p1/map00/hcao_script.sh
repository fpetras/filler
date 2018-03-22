echo "===============================" >> hcao_map00.result
../resources/filler_vm -f ../resources/maps/map00 -p1 ../fpetras.filler -p2 ../resources/players/hcao.filler -q | tail -n2 >> hcao_map00.result
echo "===============================" >> hcao_map00.result
sed -i orig 's/O/fpetras.filler     /g' hcao_map00.result
sed -i orig 's/X/hcao.filler        /g' hcao_map00.result
rm hcao_map00.resultorig
