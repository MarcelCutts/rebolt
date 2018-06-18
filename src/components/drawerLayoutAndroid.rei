let make:
  (
    ~renderNavigationView: unit => ReasonReact.reactElement=?,
    array(ReasonReact.reactElement),
  ) =>

  ReasonReact.component(ReasonReact.stateless, ReasonReact.noRetainedProps, unit);
