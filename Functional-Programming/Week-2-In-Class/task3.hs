main :: IO()
main = do
    print $ fibIter 0 == 0
    print $ fibIter 1 == 1
    print $ fibIter 2 == 1
    print $ fibIter 3 == 2
    print $ fibIter 11 == 89
    print $ fibIter 110 == 43566776258854844738105



fibIter :: Integer -> Integer
fibIter i 
 | i < 0 = error "n was negative"
 | otherwise = helper 0 1 i
  where
      helper :: Integer -> Integer -> Integer -> Integer
      helper i _ 0 = i -- wildcard
      helper _ iNext 1 = iNext
      helper i iNext leftOver = helper iNext (i + iNext) (leftOver - 1)