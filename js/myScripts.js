window.onload = function () {
  let myName = document.getElementById("myName");
  let helloworld = document.getElementById("helloworld");
  let myPic = document.getElementById("myPic");
  let myTagline = document.getElementById("myTagline");

  let nameTexts = [
    { main: "In Code We Trust", hello: "" },
    { main: "Dreaming Digital", hello: "I stay 1010 0101" },
    { main: "Software Visionary", hello: "A true" },
    { main: "Software Engineer", hello: "I am a" },
    { main: "Computer Science Major", hello: "I am a" },
    { main: "Web Developer", hello: "I am a" },
    { main: "Dad", hello: "A proud" },
    { main: "Success, against all odds", hello: "I have achieved" },
    { main: "Bioinformatics", hello: "I Work in" },
  ];

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

  let images = [
    "images/me1.jpg",
    "images/me2.jpg",
    "images/me3.jpg",
    "images/me4.jpg",
    "images/me5.jpg",
    "images/ryderandme.jpg",
  ];

  function toggleTagLine(show) {
    myTagLine.style.display = show ? 'block' : 'none';
  }

  myName.addEventListener("mouseover", function () {
    let randomIndex = Math.floor(Math.random() * nameTexts.length);
    myName.style.color = colors[Math.floor(Math.random() * colors.length)];

    // Randomly change text with a certain probability, e.g., 50%
    if (Math.random() < 0.75) {
      helloworld.textContent = nameTexts[randomIndex].hello;
      myName.textContent = nameTexts[randomIndex].main;
      toggleTagLine(false);
    }

    myName.style.fontSize = "1.5em";
    myName.style.fontFamily = "cursive";
  });

  myName.addEventListener("mouseout", function () {
    helloworld.textContent = "Hello World! My name is,";

    myName.textContent = "Ryan Zurrin";
    myName.style.color = "white";
    myName.style.fontSize = "33px";
    myName.style.fontFamily = "Montserrat, sans-serif";
    toggleTagLine(true);
  });

  myPic.addEventListener("mouseover", function () {
    myPic.src = images[Math.floor(Math.random() * images.length)];
  });

  myPic.addEventListener("mouseout", function () {
    myPic.src = "images/ryanaboutme.jpg";
  });
};
