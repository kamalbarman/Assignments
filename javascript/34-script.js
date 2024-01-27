
<!--    id="output">Click anywhere on the page</p> -->

    var p = document.getElementById("output");
    document.addEventListener("click", function (event) {

      var x = event.clientX;
      var y = event.clientY;

      p.innerHTML = "Mouse clicked (" + x + ", " + y + ")";
    });

