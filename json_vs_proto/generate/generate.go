package generate

import (
	. "../pb"
	r "math/rand"
	// "strconv"
)

const charset = "abcdefghijklmnopqrstuvwxyz" +
	"ABCDEFGHIJKLMNOPQRSTUVWXYZ"

func stringWithCharset(length int) []byte {
	b := make([]byte, length)
	for i := range b {
		b[i] = charset[r.Intn(len(charset))]
	}
	return b
}

func Init(numObj int, numMap int) ObjectList {
	var temp []*Object
	for i := 0; i < numObj; i++ {
		var mapping []uint32
		for j := 0; j < numMap; j++ {
			// mapping = append(mapping, strconv.Itoa(r.Intn(256))+"."+strconv.Itoa(r.Intn(256))+"."+strconv.Itoa(r.Intn(256))+"."+strconv.Itoa(r.Intn(256)))
			mapping = append(mapping, r.Uint32())
		}
		obj := &Object{
			Name:     stringWithCharset(10),
			Mappings: mapping,
		}
		temp = append(temp, obj)
	}
	list := ObjectList{
		List: temp,
	}
	return list

}
