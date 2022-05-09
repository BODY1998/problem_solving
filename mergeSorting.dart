void main() {
  List<int> fisrtList = [1, 3, 5, 8];
  List<int> secondList = [2, 4, 7, 11];
  print(merge(fisrtList, secondList));
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
