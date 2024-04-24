package main

import (
	"fmt"
	"math/big"
)

func sqrt(n *big.Int) *big.Int {
	var l, r, mid, sq, one big.Int
	one.SetInt64(1)
	r.Set(n)
	for l.Cmp(&r) <= 0 {
		mid.Add(&l, &r)
		mid.Rsh(&mid, 1)
		sq.Mul(&mid, &mid)
		switch sq.Cmp(n) {
		case -1:
			l.Add(&mid, &one)
		case 0:
			return &mid
		case 1:
			r.Sub(&mid, &one)
		}
	}
	return &r
}

func main() {
	var n big.Int
	fmt.Scan(&n)
	fmt.Println(sqrt(&n))
}
