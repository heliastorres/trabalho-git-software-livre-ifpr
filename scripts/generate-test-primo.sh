#!/usr/bin/env bash
set -e
NUM=$((RANDOM % 100 + 1))
mkdir -p ../testes/primo
IN=../testes/primo/entrada.txt
OUT=../testes/primo/saida.txt
echo "$NUM" > "$IN"
../primo < "$IN" > "$OUT"
echo "[OK] Teste PRIMO → entrada: $IN | saída: $OUT"
