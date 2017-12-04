using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LcdsGameMap {
    [DataMember(Name = "displayName")]
    string DisplayName {get; set;}

    [DataMember(Name = "description")]
    string Description {get; set;}

    [DataMember(Name = "mapId")]
    int MapId {get; set;}

    [DataMember(Name = "minCustomPlayers")]
    int MinCustomPlayers {get; set;}

    [DataMember(Name = "totalPlayers")]
    int TotalPlayers {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LcdsGameMap {\n");
      sb.Append("  DisplayName: ").Append(DisplayName).Append("\n");
      sb.Append("  Description: ").Append(Description).Append("\n");
      sb.Append("  MapId: ").Append(MapId).Append("\n");
      sb.Append("  MinCustomPlayers: ").Append(MinCustomPlayers).Append("\n");
      sb.Append("  TotalPlayers: ").Append(TotalPlayers).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}