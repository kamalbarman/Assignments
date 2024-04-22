let h1 = document.querySelector("h1");

function colorChange(color, delay) {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            h1.style.color = color;
            console.log(`this is color ${color}`);
            resolve("color changed");
        }, delay);
    });
}


async function demo() {
    await colorChange("blue", 1000);
    await colorChange("yellow", 1000);
    await colorChange("green", 1000);
    await colorChange("red", 1000);
    await colorChange("violet", 1000);


}

// colorChange("blue",1000)
// .then(()=>{
//     console.log("color changed");
//     return colorChange("red", 1000);
// })
// .then(()=>{
//     console.log("color changed");
//     return colorChange("green", 1000);
// })
// .then(()=>{
//     console.log("color changed");
//     return colorChange("violet", 1000);
// })
// .catch((error)=>{
//     console.log(error);
//     console.log("something went error");
// })
// .finally((uff)=>{
//     console.log("something is sucessful && soemthing is going worng");
// });

