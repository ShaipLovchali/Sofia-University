main :: IO()
main = do
    print $ powRec 2 5
    print $ powRec 15 3
    print $ powIter 2 5
    print $ powIter 15 3

powRec :: Double -> Int -> Double
powRec x 1 = x
powRec x n
 | n < 1 = error "n must be positive"
 | otherwise = x * powRec x (n - 1)

powIter :: Double -> Int -> Double
powIter x n
 | n < 1 = error "n must be positive"
 | otherwise = helper n x
  where 
      helper :: Int -> Double -> Double
      helper 1 result = result
      helper leftOver result = helper (leftOver - 1) (result * x)