import React, { useEffect, useState } from "react"
import axios from "axios"

export default function Home(){
    const [raw,setraw]=useState([]);
    
    useEffect(()=>{
        let promise=axios.get("https://jsonplaceholder.typicode.com/users");
        
        promise.then((res)=>{
            setraw(res.data);
        })
    })

    return(
        <>  
        <div align="center">
        <div>
            {raw.map((e)=>{
                return(
                    <>
                    id= {e.id}<br></br>
                    Name= {e.name}<br></br>
                    Username= {e.username}<br></br>
                    Email= {e.email}<br></br>
                    Phone= {e.phone}<br></br>
                    Website= {e.website}<br></br>
                    Address= 
                    <span>{e.address.street}<br></br></span>
                    <span>{e.address.suite}<br></br></span>
                    <span>{e.address.city}<br></br></span>
                    <span>{e.address.zipcode}<br></br></span>
                    <dl>
                        <dt>Company: </dt>
                        <dd >name- {e.company.name}</dd>
                        <dd >catchPhrase- {e.company.catchPhrase}</dd>
                        <dd >bs- {e.company.bs}</dd>
                    </dl>
                    <img src="" alt="Image not found" width={200} height={200}></img>
                    <hr></hr>
                    </>
                )
            })}
        </div>
        </div>
        </>
    )
}