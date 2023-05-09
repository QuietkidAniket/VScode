import React from "react"
import { StatusBar } from 'expo-status-bar';
import { StyleSheet, Dimensions, Text, View, SafeAreaView, Alert, Platform, Button} from 'react-native';

export default function App() {
  console.log(Dimensions.get("screen"))
  const handlePress = () => {console.log("Text was clicked on.")}
  return (
    <SafeAreaView style={styles.container}>
      <StatusBar style="auto" />
      <Text onPress={handlePress}>This is my First Native App. Making this text as long as possible. Part of this text would have been truncated in order to fit the rest part in a single 
      line on screen if we had set the numberOfLines property to 1. </Text>
      <Button color="orange" title="Click me" onPress={() => Alert.prompt("My title", "My message", (text) => console.log(text)   )} />
      
    </SafeAreaView>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#fff',
    paddingTop : Platform.OS === 'android' ? 20 : 0
  },
  image : {
    width: 300,
    height : 200
  }
});
