import Foundation

let n = Int(readLine()!)!
let arr: [Int] = readLine()!.split(separator: " ").map { Int(String($0))! }
let hoge = cal(n: n, arr: arr)
print(hoge)

func cal(n: Int, arr: [Int]) -> Int {
    var counter: Int = 0
    var rArr: [Int] = []
    var kabu: [Int: Int] = [:]

    for i in arr {
        if rArr.contains(i) {
            if kabu[i] == nil {
                kabu[i] = 1
            } else {
                kabu[i] = kabu[i]! + 1
            }
        } else {
            rArr.append(i)
        }
    }

    for i in 0 ..< rArr.count {
        for j in 0 ..< rArr.count {
            let a = rArr[i] / rArr[j]
            if rArr[i] % rArr[j] == 0 {
                if rArr.contains(a) {
                    var val = 1
                    if let a1 = kabu[a] {
                        val *= a1
                    } else if let a2 = kabu[rArr[i]] {
                        val *= a2
                    } else if let a3 = kabu[rArr[j]] {
                        val *= a3
                    }
                    counter += val
                }
            }
        }
    }

    return counter
}
