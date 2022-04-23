import Foundation

fuga()

func fuga() {
    var hoge: [Int] = readLine()!.split(separator: " ").map { Int(String($0))! }
    let n = hoge[0]
    let k = hoge[1]
    var arr: [String] = []
    var dic: [Character: [Int]] = [:]

    for _ in 0 ..< n {
        arr.append(readLine()!)
    }

    for i in 0 ..< arr.count {
        for a in arr.flatMap { Array($0) } {
            if dic[a] == nil {
                dic[a] = [i]
            } else {
                dic[a] = dic[a]!.append(i)
            }
        }
    }

    var boo = true
    var total: Int = 0
    for key in dic.keys {
        var count = dic[key]!.count
        if count > k {
            boo = false
        } else if count == k {
            total += 1
        }
    }

    print(total)
//    if boo {
//        print(total)
//        return
//    } else {
//
//    }
}

