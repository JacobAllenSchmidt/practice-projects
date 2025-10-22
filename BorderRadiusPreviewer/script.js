const box = document.getElementById("border-radius-display");
const topLeftInput = document.getElementByName("top-left");
const topRightInput = document.getElementByName("top-right");
const bottomRightInput = document.getElementByName("bottom-right");
const bottomLeftInput = document.getElementByName("bottom-left");




	topLeftInput.addEventListener('input', function() {
		box.style.borderTopLeftRadius = `${topLeftInput.value}%`;
	});
	topRightInput.addEventListener('input', function() {
		box.style.borderTopRightRadius = `${topRightInput.value}%`;
	});
	bottomRightInput.addEventListener('input', function() {
		box.style.borderBottomRightRadius = `${bottomRightInput.value}%`;
	});
	bottomLeftInput.addEventListener('input', function() {
		box.style.borderBottomLeftRadius = `${bottomLeftInput.value}%`;
	});
