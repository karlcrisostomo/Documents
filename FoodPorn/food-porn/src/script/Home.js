import axios from axios

export default{
    setup (){
        axios.get('https://api.example.com/data')
            .then(response =>{

                console.log(response.data);

            })    
            .catch(error =>{
                

                console.log('Error', error);
            })


    }

}