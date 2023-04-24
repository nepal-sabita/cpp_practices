
    // JavaScript code for validation
    // Selecting the form element
const bookingForm = document.querySelector('#booking-form');

// Selecting form fields
const nameInput = bookingForm.querySelector('#name');
const emailInput = bookingForm.querySelector('#email');
const phoneInput = bookingForm.querySelector('#phone');
const checkinInput = bookingForm.querySelector('#checkin');
const checkoutInput = bookingForm.querySelector('#checkout');

// Error messages
const errors = {
  name: 'Please enter your name',
  email: 'Please enter a valid email address',
  phone: 'Please enter a valid phone number',
  checkin: 'Please select a check-in date',
  checkout: 'Please select a check-out date'
};

// Form validation function
function validateForm(event) {
  // Preventing form submission
  event.preventDefault();

  // Validating name
  if (nameInput.value === '') {
    showError(nameInput, errors.name);
  } else {
    removeError(nameInput);
  }

  // Validating email
  if (!isValidEmail(emailInput.value)) {
    showError(emailInput, errors.email);
  } else {
    removeError(emailInput);
  }

  // Validating phone number
  if (!isValidPhone(phoneInput.value)) {
    showError(phoneInput, errors.phone);
  } else {
    removeError(phoneInput);
  }

  // Validating check-in date
  if (checkinInput.value === '') {
    showError(checkinInput, errors.checkin);
  } else {
    removeError(checkinInput);
  }

  // Validating check-out date
  if (checkoutInput.value === '') {
    showError(checkoutInput, errors.checkout);
  } else {
    removeError(checkoutInput);
  }

  // If all fields are valid, submit the form
  if (bookingForm.checkValidity()) {
    bookingForm.submit();
  }
}

// Helper function to display error message
function showError(input, message) {
  const formGroup = input.parentElement;
  const errorMessage = formGroup.querySelector('.error-message');
  errorMessage.innerText = message;
  formGroup.classList.add('error');
}

// Helper function to remove error message
function removeError(input) {
  const formGroup = input.parentElement;
  const errorMessage = formGroup.querySelector('.error-message');
  errorMessage.innerText = '';
  formGroup.classList.remove('error');
}

// Helper function to validate email address
function isValidEmail(email) {
  const regex = /^\S+@\S+\.\S+$/;
  return regex.test(email);
}

// Helper function to validate phone number
function isValidPhone(phone) {
  const regex = /^[0-9]{10}$/;
  return regex.test(phone);
}

// Adding event listener to the form
bookingForm.addEventListener('submit', validateForm);

  