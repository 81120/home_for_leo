let component = ReasonReact.statelessComponent "Icon";
let make = fun ::iconUrl ::homeUrl _children => {
  ...component,
  render: fun _self => {
    <a 
      href=homeUrl
      style=(
        ReactDOMRe.Style.make 
          height::"56px" 
          display::"inline-block" 
          verticalAlign::"middle"
          ()
      )>
      <img 
        src=iconUrl
        style=(
          ReactDOMRe.Style.make width::"56px" height::"56px" ()
        ) />
    </a>
  }
};