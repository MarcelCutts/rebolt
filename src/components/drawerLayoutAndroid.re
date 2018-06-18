[@bs.module "react-native"] external view : ReasonReact.reactClass = "DrawerLayoutAndroid";

let make =
    (
      ~renderNavigationView=?,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=view,
    ~props=
      Props.extendView(
        Js.Undefined.(
          {
            "renderNavigationView": fromOption(renderNavigationView),
          }
        ),
      ),
  );
