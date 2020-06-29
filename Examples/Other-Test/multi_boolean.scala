object multi_boolean {
  var a: int
  var b: int
  var c: int
  var d: int
  def main()
  {
    a = 1
    b = 5
    c = 3
    d = 1
    if (b < c || a == d)
      println(a)
    if (a < b && c >= d)
      println(b)
    else
      println(d)
    if (!(a != d))
      println(c)
  }
}
