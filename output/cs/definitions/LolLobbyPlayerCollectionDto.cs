using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLobbyPlayerCollectionDto {
    [DataMember(Name = "players")]
    LolLobbyPlayerDto[] Players {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLobbyPlayerCollectionDto {\n");
      sb.Append("  Players: ").Append(Players).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}