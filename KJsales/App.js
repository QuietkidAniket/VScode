import { StatusBar } from 'expo-status-bar';
import { useState } from 'react';
import { Alert, Button, StyleSheet, Text, TextInput, View } from 'react-native';

  
export default function App() {
  
  // X factor = max time interval between each requests
  
  const [x, setx] = useState(1);
  const [url, seturl] = useState('');
  if(x <= 0){
    return(
       <Alert> Enter a number greater than 0 for x factor</Alert>
    )
    }

  return (
    <View style={styles.container}>
      <Text> Url</Text>
      <Button style={styles.addbutton} title="Add URL" onPress={() => submitx()}></Button>
      <Text>edit x</Text>
      <TextInput style={styles.input} onChangeText={(value) => setx(value)} placeholder = {"more than 0"}></TextInput>
      <StatusBar style="auto" />
    </View>
  );
}
function submitx(){
  return (
    <View>
      <Text >Submitted x </Text>
    </View>
  )
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#fff',
    alignItems: 'center',
    justifyContent: 'center',
  },  
  input :{
    borderColor : "black",
    borderRadius : 25,
    borderStyle : "solid",
    borderWidth : 1,
  },
  addbutton : {
    backgroundColor : "green",
  }
});
