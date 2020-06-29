/* Sigma.scala
 *
 * Compute sum = 1 + 2 + ... + n
 */

object For
{
  // constants and variables
  var sum: int
  var index: int

  def main () {
    sum = 0
    
    for (index <- 0 to 100) {
      sum = sum + index
    }
    print ("The sum1 is ")
    println (sum)

    for (index <- 100 to 0) {
      sum = sum - index
    }
    print ("The sum2 is ")
    println (sum)
  }
}
