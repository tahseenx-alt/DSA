#!/bin/zsh

FILE="$1"

if [[ -z "$FILE" ]]; then
    echo "❌ No C++ file specified"
    exit 1
fi

NAME="${FILE:t:r}"
ROOT="/Users/tahseenanwer/Documents/Personal/DSA"
OUTPUT="$ROOT/Trash/$NAME"

mkdir -p "$ROOT/Trash"

echo "🔨 Compiling $NAME..."

g++ -std=c++17 "$FILE" -o "$OUTPUT"

if [[ $? -ne 0 ]]; then
    echo "❌ Compilation failed"
    exit 1
fi

echo "▶ Running $NAME..."
echo "--------------------------------"

"$OUTPUT" < "$ROOT/Input.txt" > "$ROOT/Output.txt"

echo "--------------------------------"
echo "✅ Output saved to $ROOT/Output.txt"
