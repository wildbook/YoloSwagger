using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct PlayerGameStats {
    [DataMember(Name = "userId")]
    ulong UserId {get; set;}

    [DataMember(Name = "createDate")]
    ulong CreateDate {get; set;}

    [DataMember(Name = "gameId")]
    ulong GameId {get; set;}

    [DataMember(Name = "fellowPlayers")]
    FellowPlayerInfo[] FellowPlayers {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class PlayerGameStats {\n");
      sb.Append("  UserId: ").Append(UserId).Append("\n");
      sb.Append("  CreateDate: ").Append(CreateDate).Append("\n");
      sb.Append("  GameId: ").Append(GameId).Append("\n");
      sb.Append("  FellowPlayers: ").Append(FellowPlayers).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}