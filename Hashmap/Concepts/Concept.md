
# 📘 Complete Guide to HashMaps in C++ (`unordered_map`)

---

## 🔹 What is a HashMap?

A **HashMap** is a data structure that stores **key-value pairs**.  
It allows you to:
- 🚀 Insert and access elements in **O(1)** average time
- 🔍 Efficiently search for values
- ❌ Delete elements quickly

### 🔑 Real-Life Analogy:
Like a **phonebook** – use a name (key) to find the phone number (value).

---

## 🔧 Basic Syntax in C++

```cpp
#include <unordered_map>
using namespace std;

unordered_map<int, string> mp;

mp[1] = "Harsh";     // insert
mp[2] = "Naagar";    // insert

cout << mp[1];       // access => Harsh

// Check if a key exists
if (mp.find(3) != mp.end()) {
    cout << "Exists";
} else {
    cout << "Doesn't exist";
}

// Loop through map
for (auto it : mp) {
    cout << it.first << " -> " << it.second << endl;
}
```

---

## 🧠 How Does It Work Internally?

- HashMap uses a **hash function** to map keys to indices in a bucket array.
- If two keys hash to the same bucket → **Collision**
- Collisions are handled using:
  - **Chaining** (linked list in each bucket)
  - **Open addressing**

Note: `unordered_map` does **not guarantee order** of keys.

---

## 🧮 Time Complexities

| Operation | Average Case | Worst Case |
|-----------|---------------|------------|
| Insert    | O(1)          | O(n)       |
| Search    | O(1)          | O(n)       |
| Delete    | O(1)          | O(n)       |

> ⚠️ Worst case occurs with many hash collisions (rare in practice)

---

## 📋 Common Use Cases

| Use Case                      | Example Problems                         |
|-------------------------------|------------------------------------------|
| Frequency Count               | Valid Anagram, Majority Element          |
| Fast Lookup                   | Two Sum, Intersection of Arrays          |
| Detect Duplicates             | Contains Duplicate, Happy Number         |
| Grouping by value             | Group Anagrams, Isomorphic Strings       |
| Sliding Window Optimization   | Longest Substring Without Repeat         |
| Prefix/Suffix Matching        | Subarray Sum Equals K, Count Distinct    |

---

## 🚀 Real Interview Patterns

1. **Frequency Map**
```cpp
unordered_map<char, int> freq;
for (char c : s) freq[c]++;
```

2. **Value to Index**
```cpp
unordered_map<int, int> indexMap;
for (int i = 0; i < nums.size(); i++) {
    indexMap[nums[i]] = i;
}
```

3. **Detect Duplicates**
```cpp
unordered_map<int, bool> seen;
for (int num : nums) {
    if (seen[num]) return true;
    seen[num] = true;
}
```

---

## 🛠 Tips for Using HashMaps

- Use `unordered_map` for O(1) operations.
- Use `map` (ordered) when order matters (O(log n) operations).
- Prefer `unordered_set` if you only care about keys (no values).

---

## 📌 Pro Tip

If you're solving problems involving:
- Counting frequency
- Quick value lookups
- Avoiding brute-force nested loops

✅ Use a HashMap!

---

🧠 Mastering HashMaps early will **save you hours** and help you crack 30–40% of LeetCode problems.
