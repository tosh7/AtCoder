import Foundation

let arr: [Int] = readLine()!.split(separator: " ").map { Int(String($0))! }

let taka = cul(t: arr[0], v: arr[1], r: arr[2], wt: arr[6])
let ao = cul(t: arr[3], v: arr[4], r: arr[5], wt: arr[6])

if taka > ao {
    print("Takahashi")
} else if ao > taka {
    print("Aoki")
} else {
    print("Draw")
}

func cul(t: Int, v: Int, r: Int, wt: Int) -> Int {
    var val: Int = 0

    var times: Int = wt / (t + r)
    var restTimes: Int = wt % (t + r)

    val += times * v * t
    if restTimes > t {
        val += v * t
    } else {
        val += restTimes * v
    }

    return val
}
