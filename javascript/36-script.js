<!-- write this code under html body -->

<!-- <form id="myForm">
  <label for="userId">User ID:</label>
  <input type="text" id="userId" name="userId"><br><br>

  <label for="password">Password:</label>
  <input type="password" id="password" name="password"><br><br>

  <input type="submit" value="Submit">
</form> -->

// after write this html codes now write the js code given below

  function validateForm(event) {
    event.preventDefault(); 
    let userId = document.getElementById('userId').value;
    let password = document.getElementById('password').value;
    if (userId === '' || password === '') {
      alert('User ID and password are required.');
      return false;
    } else if (userId.length < 6) {
      alert('User ID must be at least 6 characters long.');
      return false;
    } else if (password.length < 8) {
      alert('Password must be at least 8 characters long.');
      return false;
    }
    alert('Form submitted successfully!');
    return true;
  }
let form = document.getElementById('myForm');
  form.addEventListener('submit', validateForm);

