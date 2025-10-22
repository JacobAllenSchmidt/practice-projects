const box = document.getElementById("border-radius-display");
const topLeftInput = document.getElementById("top-left");
const topRightInput = document.getElementById("top-right");
const bottomRightInput = document.getElementById("bottom-right");
const bottomLeftInput = document.getElementById("bottom-left");
const copyButton = document.getElementById("copy-button");



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

copyButton.addEventListener('onclick', () => writeClipboardText("hello!"));



async function writeClipboardText(text) {
  try {
    await navigator.clipboard.writeText(text);
  } catch (error) {
    console.error(error.message);
  }
}
