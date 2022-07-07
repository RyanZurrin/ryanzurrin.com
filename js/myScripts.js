"use strict";
// when someone hovers over id=myName, change to random colors every 2 seconds
myName = document.getElementById("myName");
console.log(myName);

myName.addEventListener("mouseover", function () {
  // create a list of light colors to randomly choose from
  let colors = [
    "#00adef",
    "#e15ff5",
    "#f9a825",
    "#6eff7d",
    "#2de3b0",
    "#d43d4c",
    "#f0f55b",
    "#f5b914",
    "#f252a2",
    "#68f545",
  ];
  myName.style.color = colors[Math.floor(Math.random() * colors.length)];
  myName.style.fontSize = "1.5em";
  myName.style.fontFamily = "cursive";
});

// reset the color back to white when not hovering over
myName.addEventListener("mouseout", function () {
  myName.style.color = "white";
  myName.style.fontSize = "33px";
  myName.style.fontFamily = "Montserrat, sans-serif";
});
