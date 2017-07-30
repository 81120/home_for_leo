let component = ReasonReact.statelessComponent "Header";
let make = fun _children => {
  ...component,
  render: fun _self => {
    <div style=(
      ReactDOMRe.Style.make 
        height::"56px" 
        borderBottom::"1px solid rgba(30,35,42,0.06)"
        boxShadow::"0 1px 3px 0 rgba(0,34,77,0.05)"
        zIndex::"100"
        ()
      )>
      <div
        style=(ReactDOMRe.Style.make width::"1000px" margin::"0 auto" ()) >
        <Icon 
          iconUrl="http://localhost:9999/test-reason-react/view/icon.png"
          homeUrl="http://localhost:9999/test-reason-react/view/home.html" />
        <Navigation />
        <Search />
      </div>
    </div>
  }
};