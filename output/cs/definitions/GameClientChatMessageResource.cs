using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct GameClientChatMessageResource {
    [DataMember(Name = "body")]
    string Body {get; set;}

    [DataMember(Name = "fromSummonerName")]
    string FromSummonerName {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class GameClientChatMessageResource {\n");
      sb.Append("  Body: ").Append(Body).Append("\n");
      sb.Append("  FromSummonerName: ").Append(FromSummonerName).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}