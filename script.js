let data = {
    balance: 0,
    transactions: []
  };
  
  // Load data from localStorage
  function loadData() {
    const savedData = localStorage.getItem("accountData");
    if (savedData) {
      data = JSON.parse(savedData);
      updateBalanceDisplay();
    }
  }
  
  // Save data to localStorage
  function saveData() {
    localStorage.setItem("accountData", JSON.stringify(data));
  }
  
  // Update balance display
  function updateBalanceDisplay() {
    document.getElementById("balance").innerText = "Your current balance is: ₹" + data.balance;
  }
  
  // Deposit function
  function deposit() {
    const amount = parseInt(document.getElementById("deposit").value);
    if (isNaN(amount) || amount <= 0) {
      alert("Please enter a valid deposit amount.");
      return;
    }
    data.balance += amount;
    data.transactions.push({ id: generateUUID(), type: "deposit", amount: amount });
    saveData();
    updateBalanceDisplay();
    document.getElementById("deposit").value = '';
  }
  
  // Withdraw function
  function withdraw() {
    const amount = parseInt(document.getElementById("withdraw").value);
    if (isNaN(amount) || amount <= 0 || amount > data.balance) {
      alert("Invalid withdrawal amount.");
      return;
    }
    data.balance -= amount;
    data.transactions.push({ id: generateUUID(), type: "withdrawal", amount: amount });
    saveData();
    updateBalanceDisplay();
    document.getElementById("withdraw").value = '';
  }
  
  // Deposit button click event
  document.getElementById("btn-deposit").addEventListener("click", deposit);
  
  // Withdraw button click event
  document.getElementById("btn-withdraw").addEventListener("click", withdraw);
  
  // Enter key event for deposit input
  document.getElementById("deposit").addEventListener("keydown", function(e) {
    if (e.key === "Enter") {
      deposit();
    }
  });
  
  // Enter key event for withdraw input
  document.getElementById("withdraw").addEventListener("keydown", function(e) {
    if (e.key === "Enter") {
      withdraw();
    }
  });
  
  // View transactions
  document.getElementById("btn-view-transactions").addEventListener("click", function() {
    const modal = document.getElementById("transaction-modal");
    const transactionList = document.getElementById("transaction-list");
    transactionList.innerHTML = '';
    data.transactions.forEach(transaction => {
      const li = document.createElement("li");
      li.innerText = `${transaction.id} - ${transaction.type} - ₹${transaction.amount}`;
      li.setAttribute("data-id", transaction.id);
      transactionList.appendChild(li);
    });
    modal.style.display = "block";
  });
  
  // Close modal
  document.querySelector(".close").addEventListener("click", function() {
    document.getElementById("transaction-modal").style.display = "none";
  });
  
  // Delete selected transaction
  document.getElementById("btn-delete-transaction").addEventListener("click", function() {
    const selected = document.querySelector("#transaction-list li.selected");
    if (!selected) {
      alert("Please select a transaction to delete.");
      return;
    }
    const transactionId = selected.getAttribute("data-id");
    data.transactions = data.transactions.filter(t => t.id !== transactionId);
    saveData();
    updateBalanceDisplay();
    selected.remove();
  });
  
  // Select transaction
  document.getElementById("transaction-list").addEventListener("click", function(e) {
    const items = document.querySelectorAll("#transaction-list li");
    items.forEach(item => item.classList.remove("selected"));
    if (e.target.tagName === "LI") {
      e.target.classList.add("selected");
    }
  });
  
  // Exit function
  document.getElementById("btn-exit").addEventListener("click", function() {
    if (confirm("Are you sure you want to exit?")) {
      window.close();
    }
  });
  
  // Generate UUID
  function generateUUID() {
    return 'xxxxxxxx-xxxx-4xxx-yxxx-xxxxxxxxxxxx'.replace(/[xy]/g, function(c) {
      const r = Math.random() * 16 | 0, v = c === 'x' ? r : (r & 0x3 | 0x8);
      return v.toString(16);
    });
  }
  
  // Initialize application
  loadData();