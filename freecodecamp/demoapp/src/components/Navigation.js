import React from "react"
import logo from "../images/react-1.svg"

export default function Navigation(){
    return (
        
        <nav className="nav">
            <div style={{ paddingRight:"10px"}}>
            <img src={logo} alt="react-logo" className="nav-logo" />
            </div>
            <div id="header" >
            <h3>ReactFacts</h3>
            </div>
            <div style= {{color:"white"}}>
                <h4 style={{marginRight:"10px"}}>React Course - 1 </h4>
            </div>
        </nav>
        
    )
}