echo "===============================" >> hcao_map02.result
../resources/filler_vm -f ../resources/maps/map01 -p2 ../resources/players/hcao.filler -p1 ../fpetras.filler -q | tail -n2 >> hcao_map02.result
echo "===============================" >> hcao_map02.result
sed -i orig 's/O/fpetras.filler     /g' hcao_map02.result
sed -i orig 's/X/hcao.filler        /g' hcao_map02.result
rm hcao_map02.resultorig
