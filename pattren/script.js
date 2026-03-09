function sendMessage() {
    let input = document.getElementById("user-input").value;
    let chatBox = document.getElementById("chat-box");

    if(input === "") return;

    chatBox.innerHTML += "<p><b>You:</b> " + input + "</p>";

    let reply = getBotReply(input);
    chatBox.innerHTML += "<p><b>Nova:</b> " + reply + "</p>";

    document.getElementById("user-input").value = "";
}

function getBotReply(input) {
    input = input.toLowerCase();

    if(input.includes("hello"))
        return "Hello! I am Nova 🤖";
    else if(input.includes("name"))
        return "My name is Nova.";
    else if(input.includes("how are you"))
        return "I am just code, but I'm working perfectly!";
    else
        return "Sorry, I don't understand that yet.";
}
