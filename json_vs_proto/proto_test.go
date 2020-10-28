package main

import (
	g "./generate"
	"./pb"
	"fmt"
	jsoniter "github.com/json-iterator/go"
	// "encoding/json"
	"github.com/golang/protobuf/proto"
	"testing"
)

var json = jsoniter.ConfigCompatibleWithStandardLibrary

var (
	PBSmall  = g.Init(1, 5)
	PBMedium = g.Init(10, 10)
	PBLarge  = g.Init(100, 100)
)

func TestDataAllocationsSmall(_ *testing.T) {
	fmt.Printf("Small ---------\n")
	bs := PBSmall
	j, _ := json.Marshal(&bs)
	p, _ := proto.Marshal(&bs)

	printInfo(j, "json")
	printInfo(p, "protobuf")
	fmt.Printf("\n")
}

func TestDataAllocations(_ *testing.T) {
	fmt.Printf("Medium ---------\n")
	bs := PBMedium
	j, _ := json.Marshal(&bs)
	p, _ := proto.Marshal(&bs)

	printInfo(j, "json")
	printInfo(p, "protobuf")
	fmt.Printf("\n")
}

func TestDataAllocationsLarge(_ *testing.T) {
	fmt.Printf("Large ---------\n")
	bs := PBLarge
	j, _ := json.Marshal(&bs)
	p, _ := proto.Marshal(&bs)

	printInfo(j, "json")
	printInfo(p, "protobuf")
	fmt.Printf("\n")
}

// func BenchmarkJSONMarshal(b *testing.B) {
// 	s := PBSmall
// 	m := PBMedium
// 	l := PBLarge

// 	b.ResetTimer()

// 	b.Run("SmallData", func(b *testing.B) {
// 		b.ReportAllocs()
// 		for n := 0; n < b.N; n++ {
// 			d, _ := json.Marshal(&s)
// 			_ = d
// 		}
// 	})
// 	b.Run("MediumData", func(b *testing.B) {
// 		b.ReportAllocs()
// 		for n := 0; n < b.N; n++ {
// 			d, _ := json.Marshal(&m)
// 			_ = d
// 		}
// 	})
// 	b.Run("LargeData", func(b *testing.B) {
// 		b.ReportAllocs()
// 		for n := 0; n < b.N; n++ {
// 			d, _ := json.Marshal(&l)
// 			_ = d
// 		}
// 	})
// 	fmt.Printf("\n")
// }

// func BenchmarkProtobufMarshal(b *testing.B) {
// 	s := PBSmall
// 	m := PBMedium
// 	l := PBLarge

// 	b.ResetTimer()

// 	b.Run("SmallData", func(b *testing.B) {
// 		b.ReportAllocs()
// 		for n := 0; n < b.N; n++ {
// 			d, _ := proto.Marshal(&s)
// 			_ = d
// 		}
// 	})
// 	b.Run("MediumData", func(b *testing.B) {
// 		b.ReportAllocs()
// 		for n := 0; n < b.N; n++ {
// 			d, _ := proto.Marshal(&m)
// 			_ = d
// 		}
// 	})
// 	b.Run("LargeData", func(b *testing.B) {
// 		b.ReportAllocs()
// 		for n := 0; n < b.N; n++ {
// 			d, _ := proto.Marshal(&l)
// 			_ = d
// 		}
// 	})
// 	fmt.Printf("\n")
// }

func BenchmarkJSONUnmarshal(b *testing.B) {
	s := PBSmall
	m := PBMedium
	l := PBLarge

	sd, _ := json.Marshal(&s)
	md, _ := json.Marshal(&m)
	ld, _ := json.Marshal(&l)

	var sf pb.ObjectList
	var mf pb.ObjectList
	var lf pb.ObjectList

	b.ResetTimer()

	b.Run("SmallData", func(b *testing.B) {
		b.ReportAllocs()
		for n := 0; n < b.N; n++ {
			_ = json.Unmarshal(sd, &sf)
		}
	})
	b.Run("MediumData", func(b *testing.B) {
		b.ReportAllocs()
		for n := 0; n < b.N; n++ {
			_ = json.Unmarshal(md, &mf)
		}
	})
	b.Run("LargeData", func(b *testing.B) {
		b.ReportAllocs()
		for n := 0; n < b.N; n++ {
			_ = json.Unmarshal(ld, &lf)
		}
	})
	fmt.Printf("\n")
}

func BenchmarkProtobufUnmarshal(b *testing.B) {
	s := PBSmall
	m := PBMedium
	l := PBLarge

	sd, _ := proto.Marshal(&s)
	md, _ := proto.Marshal(&m)
	ld, _ := proto.Marshal(&l)

	var sf pb.ObjectList
	var mf pb.ObjectList
	var lf pb.ObjectList

	b.ResetTimer()

	b.Run("SmallData", func(b *testing.B) {
		b.ReportAllocs()
		for n := 0; n < b.N; n++ {
			_ = proto.Unmarshal(sd, &sf)
		}
	})
	b.Run("MediumData", func(b *testing.B) {
		b.ReportAllocs()
		for n := 0; n < b.N; n++ {
			_ = proto.Unmarshal(md, &mf)
		}
	})
	b.Run("LargeData", func(b *testing.B) {
		b.ReportAllocs()
		for n := 0; n < b.N; n++ {
			_ = proto.Unmarshal(ld, &lf)
		}
	})
}

func printInfo(d []byte, ser string) {
	used := len(d)
	allocated := cap(d)
	fmt.Printf("Type: %s \t\tData size: %d \t\tTotal Allocated: %d \t\t Used/Allocated: %.2f%%\n", ser, used, allocated, percentUsed(used, allocated)*100)
}

func percentUsed(used, allocated int) float32 {
	return float32(used) / float32(allocated)
}
