const form = document.getElementById('registrationForm');
const submitButton = document.getElementById('submitButton');


submitButton.disabled = true;

function validateForm() {
    const requiredFields = document.querySelectorAll('input[required]');
    let isValid = true;

    requiredFields.forEach(field => {
        if (field.value.trim() === '') {
            isValid = false;
        }
    });

    return isValid;
}

form.addEventListener('input', () => {
    const isValid = validateForm();
    submitButton.disabled = !isValid;
});