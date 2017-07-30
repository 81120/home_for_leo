module Item = {
  let component = ReasonReact.statelessComponent "Item";
  let make = fun ::url ::text _children => {
    ...component,
    render: fun _self => {
      <li style=(
        ReactDOMRe.Style.make 
          display::"inline-block" 
          width::"80px"
          height::"32px"
          ()
        )>
        <a 
          href=url 
          style=(
            ReactDOMRe.Style.make 
              display::"inline-block"
              height::"100%"
              fontSize::"15px"
              color::"#333"
              textDecoration::"none"
              lineHeight::"32px"
              fontWeight::"bold"
              ()
          )>
          (text |> ReasonReact.stringToElement)
        </a>
      </li>
    }
  }
};

let component = ReasonReact.statelessComponent "Navigation";
let make = fun _children => {
  ...component,
  render: fun _self => {
    <ul style=(
      ReactDOMRe.Style.make 
        display::"inline-block" 
        listStyle::"none" 
        verticalAlign::"middle"
        ()
      )>
      <Item url="#" text="Articles" />
      <Item url="#" text="Pictures" />
      <Item url="#" text="Favorite" />
    </ul>
  }
};