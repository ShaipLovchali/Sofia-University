main :: IO() 
main = do
    print $ snail 3 2 1 == 2
    print $ snail 10 3 1 == 5
    print $ snail 10 3 2 == 8
    print $ snail 100 20 5 == 7
    print $ snail 5 10 3 == 1

snail :: Int -> Int -> Int -> Int

snail h d n = helper d
    where 
        helper :: Int -> Int 
        helper result
         | result >= h = 1
         | otherwise = 1 + helper (result - n + d)