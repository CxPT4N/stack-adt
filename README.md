# **Stack ADT Implementations 📚**

## **Table of Contents 📑**

1. [Project Description](#project-description)
2. [Function Documentation](#function-documentation)
   * [push](#push)
   * [pop](#pop)
   * [top](#top)
   * [isFull](#isFull)
   * [isEmpty](#isEmpty)
   * [insertBottom](#insertBottom)
3. [Contribution Guide](#contribution-guide)
4. [Contributors](#contributors)
5. [Instructor](#instructor)

## **Project Description**

This is a Data Structures and Algorithms (DSA) collaboration project that implements the **Stack Abstract Data Type (ADT)** in three different ways:

1. **Array-based Stack**
2. **Linked List-based Stack**
3. **Cursor-based Stack**

Each implementation provides the basic stack operations such as `push`, `pop`, `top`, `isFull`, `isEmpty`, and an additional `insertBottom` operation (which inserts an element at the bottom of the stack). This project showcases the flexibility of the Stack ADT and provides hands-on experience in implementing it in multiple ways.

## **Function Documentation**

Here are the functions implemented in the stack ADT, documented in Javadoc format:

---
## push

### `void push(Stack *S, char x)`

**Purpose:**
Adds a value `x` to the top of the stack.

**Parameters:**

* `stack`: The stack where the value will be pushed.
* `x`: The value to be added to the stack.

**Return:**

* None.

**Example:**

```c
push(&S, 'C');
```

---

## pop

### `void pop(Stack *S);`

**Purpose:**
Removes the value from the top of the stack.

**Parameters:**

* `S`: The stack from which the value will be popped.

**Return:**

* The value removed from the top of the stack.

**Example:**

```c
pop(&S);
```

---

## top

### `int top(Stack *S);`

**Purpose:**
Returns the value at the top of the stack.

**Parameters:**

* `S`: The stack from which the value at the top will be retrieved.

**Return:**

* The value at the top of the stack.
* If the stack is empty, returns `-1`.

**Example:**

```c
int topValue = top(&stack);  // topValue will be 'C' if 'C' is at the top of the stack
```

---

## isFull

### `int isFull(Stack S);`

**Purpose:**
Checks if the stack is full (i.e., unable to accept more elements).

**Parameters:**

* `S`: The stack to be checked.

**Return:**

* `1` if the stack is full.
* `0` if the stack is not full.

**Example:**

```c
if (isFull(S)) {
    printf("Stack is full\n");
}
```

---

## isEmpty

### `int isEmpty(Stack S);`

**Purpose:**
Checks if the stack is empty (i.e., no elements are present).

**Parameters:**

* `S`: The stack to be checked.

**Return:**

* `1` if the stack is empty.
* `0` if the stack is not empty.

**Example:**

```c
if (isEmpty(&stack)) {
    printf("Stack is empty\n");
}
```

---

## insertBottom

### `void insertBottom(Stack *S, char x);`

**Purpose:**
Inserts a value `x` at the bottom of the stack, shifting other elements up.

**Parameters:**

* `S`: The stack where the value will be inserted.
* `x`: The value to be inserted at the bottom.

**Return:**

* None.

**Example:**

```c
insertBottom(&stack, 'U');  // Inserts 'U' at the bottom of the stack
```

---

## **Contribution Guide**

To contribute, please follow these steps:

Contributing to a repository through forking is a common and straightforward process in GitHub and other version control platforms. Here’s a step-by-step guide to help you:

### 1. **Fork the Repository**

* **Navigate to the Repository**: Go to the GitHub page of the repository or [click here](https://github.com/npeteros/stack-adt).
* **Fork the Repo**: On the top-right corner of the page, you’ll see a “Fork” button. Click it, and GitHub will create a copy of the repository in your own GitHub account.

### 2. **Clone Your Fork**

* **Clone Locally**: After forking, you'll have a personal copy of the repo. Now, you need to clone it to your local machine. Use the following command:

  ```bash
  git clone https://github.com/your-username/repository-name.git
  ```
* This copies the entire repository to your local machine so you can make changes.

### 3. **Set Up the Upstream Remote**

* **Configure the Original Repo as Upstream**: It’s important to keep your fork synced with the original repository. You’ll do this by setting up an "upstream" remote.

  ```bash
  cd repository-name
  git remote add upstream https://github.com/npeteros/stack-adt
  ```

### 4. **Create a New Branch**

* **Always Work on a New Branch**: Before making any changes, it’s a good practice to create a new branch for your work.

  ```bash
  git checkout -b your-feature-branch
  ```
* This keeps your changes isolated and helps with clean pull requests.

### 5. **Make Your Changes**

* **Edit Files**: Modify, add, or delete the files you want to change.
* **Stage and Commit**: After making changes, stage and commit them to your branch:

  ```bash
  git add .
  git commit -m "Description of your changes"
  ```

### 6. **Push Changes to Your Fork**

* **Push to Your Fork**: After committing, push your changes to your fork on GitHub:

  ```bash
  git push origin your-feature-branch
  ```

### 7. **Create a Pull Request (PR)**

* **Open a Pull Request**: Go to your fork on GitHub and you should see an option to create a pull request (PR). Choose the branch you just pushed to, and compare it with the original repo’s main branch.
* **Fill Out PR Details**: Provide a clear and concise description of the changes you made in the PR template.
* **Submit the PR**: Once you're ready, submit the PR. Your changes will be reviewed and further changes may be requested before approval.

### 8. **Keep Your Fork Updated**

* **Sync with Upstream**: To avoid merge conflicts, periodically fetch and merge changes from the original repository into your fork:

  ```bash
  git fetch upstream
  git checkout main
  git merge upstream/main
  ```

### 9. **Respond to PR Feedback**

* **Address Feedback**: After submitting your PR, the repo maintainer might provide feedback. You can make the necessary changes, commit them, and push again to your fork, and they will automatically be reflected in your open PR.

### Summary

* Fork → Clone → Create Branch → Make Changes → Commit → Push → Create Pull Request.
* Keeping your fork updated with the upstream repository ensures a smooth contribution process.

---

## **Contributors**

* **Chrislyr John Tan** ([@CxPT4N](https://github.com/CxPT4N))
* **Maverick Moses Alier**
* **Neal Andrew Peteros** ([@npeteros](https://github.com/npeteros))

---

## **Instructor**

* **Christine Peña**