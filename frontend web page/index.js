const canvas = document.querySelector(".gCanvas");
const ctx = canvas.getContext("2d");

const testArray = [35,103,76,210,184,120];
const scale = 20;

function Viewer() {
    this.myPos.x = 190;
    this.myPos.y = 300;

    this.draw = function() {
        ctx.beginPath();    
        
        // start at point x=5 y=10      
        ctx.moveTo( 5, 10 );     
        // create line from point x=5 y=10 to x=45 y=50     
        ctx.lineTo( 45, 50 );     
        // draw path to canvas      
        ctx.stroke();   

        /*function updateScreen() {
            var degrees = 15;
            length
            for (let i = 1; i < 5; i++) {
                
                degrees + 30;
            }
        }*/

        ctx.fillStyle = "#32CD32"
        ctx.fillRect(myPos.x, myPos.y, scale, scale);
    }
    main();
}
viewer = new Viewer();
viewer.draw();