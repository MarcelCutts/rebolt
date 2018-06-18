open Rebolt;

open Utils;

let onButtonPress = () => Alert.alert(~title="Button has been pressed!", ());

let exampleType = FullScreen;

let displayName = "DrawerLayoutAndroid";

let title = "<DrawerLayoutAndroid>";

let description = "DrawerLayoutAndroid component (supported only on Android).";

let examples: array(Example.t) = [|
  {
    title: "DrawerLayoutAndroid",
    description: Some("Basic DrawerLayoutAndroid"),
    render: () =>
      <DrawerLayoutAndroid
        renderNavigationView=(
          () => <Text> (ReasonReact.string("Drawer")) </Text>
        )
      />
  }
|];