//declarative programming
/* function MainContent(){
    return(<h1 className="header">Mi nombre es Aniket. Estoy aprendiendo React.</h1>)
} */
// vs "traditional" imperative JS programming
/* const h1 = document.createElement("h1")
h1.textContent = "This is an imperative way to program"
h1.className = "header"
document.getElementById("root").append(h1)
 */


//composite programming
/* ReactDOM.render(
    <div>
        <MainContent />
    </div>,
    document.querySelector("#root")
) */
// JSX -- "JavaScript XML", makes React more declarative
/* 
const navbar = (
    <nav>
        <h1>Bob's bistro</h1>
        <ul>
            <li>Pricing</li>
            <li>About</li>
            <li>Contact</li>
        </ul>
    </nav>
) */
//ReactDOM.render(navbar, document.querySelector("#root"))
//our JSX
/* const page = (
    <ol>
        <li>This is the first element</li>
        <li>Second element</li>    
        <li>Third element</li>
        <li>Fourth element</li>
    </ol>
) */
//document.getElementById("root").append(JSON.stringify(element))
//this shows that JSX is simply treated as JavaScript objects
/* 
const image=(
    <img src="./react-1.svg" width="45px"></img>
)
ReactDOM.render(page, document.querySelector("#root"))
ReactDOM.render(image, document.querySelector("#image"))
 */

import MainContent from "MainContent"
import Header from "Header"
import Footer from "Footer"

function Page(){
    return (
        <div>
        <Header />
        <MainContent />       
        <Footer />
        </div>
    )
}
ReactDOM.render(<Page />, document.getElementById("custompage"))