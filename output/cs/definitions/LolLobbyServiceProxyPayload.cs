using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLobbyServiceProxyPayload {
    [DataMember(Name = "body")]
    string Body {get; set;}

    [DataMember(Name = "url")]
    string Url {get; set;}

    [DataMember(Name = "method")]
    string Method {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLobbyServiceProxyPayload {\n");
      sb.Append("  Body: ").Append(Body).Append("\n");
      sb.Append("  Url: ").Append(Url).Append("\n");
      sb.Append("  Method: ").Append(Method).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}