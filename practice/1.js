function countOccurrences(arr) {
  let freq = {};

  for (let i = 0; i < arr.length; i++) {
    let element = arr[i];

    if (freq[element]) {
      freq[element]++;
    } else {
      freq[element] = 1;
    }
  }

  return freq;
}

// Example
let arr = [1, 2, 2, 3, 1, 4, 2, 3];

console.log(countOccurrences(arr));
