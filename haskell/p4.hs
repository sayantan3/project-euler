main = putStrLn (show answer)
answer = foldl1 max [a * b | a <- [100..999], b <- [100..999], isPalindrome (a * b)]

reverseInt = revInt 0 where
	revInt acc 0 = acc
	revInt acc n = revInt (acc * 10 + (mod n 10)) (div n 10)

isPalindrome n = n == (reverseInt n)
