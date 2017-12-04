using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolGameQueuesPlatformConfigEnabledMap {
    [DataMember(Name = "minPlayers")]
    int MinPlayers {get; set;}

    [DataMember(Name = "gameMapId")]
    int GameMapId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolGameQueuesPlatformConfigEnabledMap {\n");
      sb.Append("  MinPlayers: ").Append(MinPlayers).Append("\n");
      sb.Append("  GameMapId: ").Append(GameMapId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}