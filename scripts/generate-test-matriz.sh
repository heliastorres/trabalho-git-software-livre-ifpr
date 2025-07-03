#!/usr/bin/env bash
set -e
N=$((RANDOM % 3 + 2))
OPS=(a s m)
OP=${OPS[RANDOM % 3]}
A=(); B=()
for ((i=0;i<N*N;i++)); do A+=($((RANDOM % 11))); done
for ((i=0;i<N*N;i++)); do B+=($((RANDOM % 11))); done
mkdir -p ../testes/matriz
IN=../testes/matriz/entrada.txt
OUT=../testes/matriz/saida.txt
{
  echo "$N"
  for ((i=0;i<N;i++)); do printf '%s ' "${A[@]:i*N:N}"; echo; done
  for ((i=0;i<N;i++)); do printf '%s ' "${B[@]:i*N:N}"; echo; done
  echo "$OP"
} > "$IN"
../matriz < "$IN" > "$OUT"
echo "[OK] Teste MATRIZ ${N}x${N} (op '$OP') → entrada: $IN | saída: $OUT"
