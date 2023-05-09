export default function urlrequest(url){
    fetch(`${url}`).then((data) => {
        return JSON.stringify(data);
     });
}
export default function writeurltodb(url){}

export default function deletefromdb(url){}
export default function editxfactor(url){
}