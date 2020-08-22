## Randomized algorithms 

### Hiring problem
   for each canidate we interview, we hire if the interviewee is better than the current assistant.\
   we interview all n canidates regardless\

   We know we will always have n interviews but what about hirings?
   at worst it would be n hirings.  O(cn)

   ### probalistic analysis
   we can determine an average case runtime if we know something about the distrobution of applicants.  Our applicants come in a random permutation of rankings or a **uniform random permutation**\
   By changing our algorithm from interviewing in order to a random pick from the list, we have randomized its behavior.  By taking the expectation of this new algorithm we can find the expected running time, which is equivelent to a non-randomized algorithms avg case.