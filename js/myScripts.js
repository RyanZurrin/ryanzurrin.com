let images = [
  "images/me2.jpg",
  "images/me3.jpg",
  "images/me4.jpg",
  "images/me5.jpg",
];

window.onload = function () {
  // Get the element with id="defaultOpen" and click on it
  myName = document.getElementById("myName");
  myPic = document.getElementById("myPic");
  console.log(myPic);

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

  myPic.addEventListener("mouseover", function () {
    // change the picture to a different one
    path = Math.floor(Math.random() * images.length);
    myPic.src = images[path];
  });

  myPic.addEventListener("mouseout", function () {
    myPic.src = "images/ryanzaboutme.jpg";
  });
};
