object multi_boolean {
  var a
  var b
  var c
  var d
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
