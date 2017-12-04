using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLobbyLobbyCustomGameLobby {
    [DataMember(Name = "gameId")]
    ulong GameId {get; set;}

    [DataMember(Name = "spectators")]
    LolLobbyLobbyMember[] Spectators {get; set;}

    [DataMember(Name = "teamOne")]
    LolLobbyLobbyMember[] TeamOne {get; set;}

    [DataMember(Name = "lobbyName")]
    string LobbyName {get; set;}

    [DataMember(Name = "teamTwo")]
    LolLobbyLobbyMember[] TeamTwo {get; set;}

    [DataMember(Name = "lobbyPassword")]
    string LobbyPassword {get; set;}

    [DataMember(Name = "practiceGameRewardsDisabledReasons")]
    string[] PracticeGameRewardsDisabledReasons {get; set;}

    [DataMember(Name = "configuration")]
    LolLobbyLobbyCustomGameConfiguration Configuration {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLobbyLobbyCustomGameLobby {\n");
      sb.Append("  GameId: ").Append(GameId).Append("\n");
      sb.Append("  Spectators: ").Append(Spectators).Append("\n");
      sb.Append("  TeamOne: ").Append(TeamOne).Append("\n");
      sb.Append("  LobbyName: ").Append(LobbyName).Append("\n");
      sb.Append("  TeamTwo: ").Append(TeamTwo).Append("\n");
      sb.Append("  LobbyPassword: ").Append(LobbyPassword).Append("\n");
      sb.Append("  PracticeGameRewardsDisabledReasons: ").Append(PracticeGameRewardsDisabledReasons).Append("\n");
      sb.Append("  Configuration: ").Append(Configuration).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}