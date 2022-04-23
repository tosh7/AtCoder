import Foundation

main()

func main() {

}


// MARK: for inputs
func reads()->String{readLine()!}
func readi()->Int{Int(reads())!}
func readd()->Double{Double(reads())!}
func readAs()->[String]{reads().split(separator:" ").map{String($0)}}
func readAi()->[Int]{readAs().map{Int($0)!}}
func readAd()->[Double]{readAs().map {Double($0)!}}
func readi2() -> (Int,Int){let arr=readAi();return (arr[0],arr[1]) }
func readi3() -> (Int,Int,Int) {let arr=readAi();return (arr[0],arr[1],arr[2])}
