// Merge Sorting Algorithm
void main() {
  List<int> sampleList = [12, 2, 52, 5, 8, 63];
  print(mergeSort(sampleList));
}

// Devide and conquer
List<int> mergeSort(List<int> list) {
  if (list.length <= 1) return list;
  int middleIndex = (list.length / 2).floor();
  // recursion
  List<int> leftList = mergeSort(list.sublist(0, middleIndex));
  List<int> rightList = mergeSort(list.sublist(middleIndex));
  return merge(leftList, rightList);
}

List<int> merge(List<int> list1, List<int> list2) {
  List<int> mergedList = [];
  int i = 0;
  int j = 0;
  while (i < list1.length && j < list2.length) {
    if (list1[i] < list2[j]) {
      mergedList.add(list1[i]);
      i++;
    } else {
      mergedList.add(list2[j]);
      j++;
    }
  }
  while (i < list1.length) {
    mergedList.add(list1[i]);
    i++;
  }
  while (j < list2.length) {
    mergedList.add(list2[j]);
    j++;
  }
  return mergedList;
}
