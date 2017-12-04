using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct GameflowLcdsReconnectInfoDto {
    [DataMember(Name = "game")]
    GameflowLcdsGameDTO Game {get; set;}

    [DataMember(Name = "playerCredentials")]
    GameflowLcdsPlayerCredentialsDto PlayerCredentials {get; set;}

    [DataMember(Name = "reconnectDelay")]
    uint ReconnectDelay {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class GameflowLcdsReconnectInfoDto {\n");
      sb.Append("  Game: ").Append(Game).Append("\n");
      sb.Append("  PlayerCredentials: ").Append(PlayerCredentials).Append("\n");
      sb.Append("  ReconnectDelay: ").Append(ReconnectDelay).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}