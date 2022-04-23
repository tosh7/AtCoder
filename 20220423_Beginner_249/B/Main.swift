import Foundation

let input: String = readLine()!
let arr: [Character] = Array(input)
var uc: Bool = false
var lc: Bool = false
var uni: Bool = true
var dic: [Character] = []

for i in 0 ..< arr.count {
    if !uc {
        uc = !arr[i].isLowercase
    }
    if !lc {
        lc = arr[i].isLowercase
    }


    if dic.contains(arr[i]) {
        uni = false
    } else {
        dic.append(arr[i])
    }
}

//print(uc)
//print(lc)
//print(uni)
if uc && lc && uni {
    print("Yes")
} else {
    print("No")
}
