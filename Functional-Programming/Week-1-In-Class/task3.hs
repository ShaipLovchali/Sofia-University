main :: IO() 
main = do
    print $ factPM 11 == 39916800

    print $ factGuards 5 == 39916800
    print $ factIter 5 == 39916800
factPM :: Int -> Int
factPM 0 = 1
factPM x = if x < 0 then error "x is equal to 0" else x * factPM (x - 1)

factGuards :: Int -> Int

factGuards x 
 | x < 0 = error "x was negative"
 | x == 0 = 1
 | otherwise = x * factGuards (x - 1)

factIter :: Int -> Int
factIter n = helper n 1
 where 
     helper :: Int -> Int -> Int
     helper 0 result = result
     helper n result
      | n < 0 = error "n was negative"
      | otherwise = helper (n - 1) (result * n)
