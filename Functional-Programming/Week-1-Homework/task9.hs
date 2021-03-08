main :: IO()
main = do
    print $ rev 1 == 1
    print $ rev 123 == 321
    print $ rev 987654321 == 123456789
    print $ rev (-1)
       
rev :: Int -> Int
rev n
 | n < 0 = error "You have enterned a negative number"
 | otherwise = helper n 0
   where
       helper :: Int -> Int -> Int
       helper x y
        | x <= 0 = y
        | otherwise = helper (div x 10) (10 * y + mod x 10)