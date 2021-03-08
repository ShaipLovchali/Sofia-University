main :: IO()
main = do
    print $ min 5 6 == 5
    print $ minIf (-60) (-15) == (-60)
    print $ minIf 15 60 == 15
    print $ minIf 60 15 == 15
    print $ minGuard 15 60 == 15
    print $ minGuard 60 15 == 15
    print $ lastDigit 154 == 4

    print $ quotientWhole 64 2 == 32
    print $ divWhole 154 17 == 9.058823529411764

    print $ removeLastDigit 154 == 15    

    print $ divReal 154 10 == 15.4
    print $ quotientReal 154.21 17.17 == 9

    print $ averageWhole 5 1542 == 773.5

minIf :: Int -> Int -> Int -- declaration
minIf n m = if n < m then n else m -- definition

minGuard :: Int -> Int -> Int
minGuard x y
 | x < y = x
 | otherwise = y

lastDigit :: Int -> Int
lastDigit x = mod x 10

quotientWhole :: Int -> Int -> Int
quotientWhole n m = if m == 0 then error "m was 0" else div n m

divWhole :: Int -> Int -> Double
divWhole x y = if y == 0 then error "y was 0" else (fromIntegral x) / (fromIntegral y)

removeLastDigit :: Int -> Int
removeLastDigit x = div x 10

divReal :: Double -> Double -> Double
divReal x y = x / y

quotientReal :: Double -> Double -> Int
quotientReal x y = div (round x) (round y)

averageWhole :: Int -> Int -> Double
averageWhole x y = fromIntegral (x + y) / 2.0






