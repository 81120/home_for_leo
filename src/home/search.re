let component = ReasonReact.statefulComponent "Search";
let make _children => {
  let handleChange = fun event {ReasonReact.state} => {
    ReasonReact.Update (ReactDOMRe.domElementToObj (ReactEventRe.Form.target event))##value;
  };
  let handleClick = fun _event {ReasonReact.state} => {
    Js.log state;
    ReasonReact.Update state;
  };
  {
    ...component,
    initialState: fun () => "",
    render: fun self => {
      <div style=(
        ReactDOMRe.Style.make 
          display::"inline-block"
          ()
      )>
        <input 
        style=(
          ReactDOMRe.Style.make 
            width::"304px" 
            height::"28px"
            border::"1px solid #aaa"
            borderRadius::"2px"
            fontSize::"12px"
            verticalAlign::"middle"
            marginLeft::"28px"
            paddingLeft::"8px"
            ()
        )
        onChange=(self.update handleChange)
        value=self.state
        placeholder="Explore the Unknown World"/>
        <button style=(
          ReactDOMRe.Style.make 
            height::"32px"
            width::"58px"
            marginLeft::"12px"
            border::"none"
            backgroundColor::"#0f88eb"
            color::"#fff"
            borderRadius::"2px"
            cursor::"pointer"
            ()
        )
        onClick=(self.update handleClick)>("Explore" |> ReasonReact.stringToElement)</button>
      </div>
    }
  }
};