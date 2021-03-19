function readTextFile(file, callback) {
    var rawFile = new XMLHttpRequest();
    rawFile.overrideMimeType("application/json");
    rawFile.open("GET", file, true);
    rawFile.onreadystatechange = function() {
        if (rawFile.readyState === 4 && rawFile.status == "200") {
            callback(rawFile.responseText);
        }
    }
    rawFile.send(null);
}

function show(pData)
{

    //window.addEventListener('load', ( )=>{
        var circulo = document.getElementById('circulo');
        let ctx = circulo.getContext('2d');
    
        var high = pData["Large"];
        var large = pData["High"];
        circulo.setAttribute("width", large);
        circulo.setAttribute("height", high);
    
        ctx.beginPath();
        var points = pData["points"];
        for (var i = 0;  i<points.length; i++)
        {
            
           if(points[i][2] > 0){
                
                ctx.arc(points[i][0],points[i][1],points[i][2],0,2*Math.PI,true);
            }
            
        }
      //ctx.arc(0,348,1,0,2*Math.PI,true);
      //ctx.arc(0,349,2,0,2*Math.PI,true);
      //ctx.arc(0,351,1,0,2*Math.PI,true);
      //ctx.arc(0,350,2,0,2*Math.PI,true);
      // ctx.fill();
        ctx.stroke();

   // });


}

//usage:
readTextFile("data.json", function(text){
    var data = JSON.parse(text);
    show(data)
});