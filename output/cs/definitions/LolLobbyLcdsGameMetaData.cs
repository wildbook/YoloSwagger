using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLobbyLcdsGameMetaData {
    [DataMember(Name = "gameId")]
    ulong GameId {get; set;}

    [DataMember(Name = "mapId")]
    int MapId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLobbyLcdsGameMetaData {\n");
      sb.Append("  GameId: ").Append(GameId).Append("\n");
      sb.Append("  MapId: ").Append(MapId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}