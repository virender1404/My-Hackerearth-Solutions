x = 0
t=gets.chomp.to_i
while t>0
a=gets.chomp.to_i
  if a%3 == 0
    x+=1    
  end
t=t-1
end
puts x
