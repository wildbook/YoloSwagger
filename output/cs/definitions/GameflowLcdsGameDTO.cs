using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct GameflowLcdsGameDTO {
    [DataMember(Name = "maxNumPlayers")]
    int MaxNumPlayers {get; set;}

    [DataMember(Name = "gameTypeConfigId")]
    int GameTypeConfigId {get; set;}

    [DataMember(Name = "teamOne")]
    dynamic[] TeamOne {get; set;}

    [DataMember(Name = "queueTypeName")]
    string QueueTypeName {get; set;}

    [DataMember(Name = "gameMode")]
    string GameMode {get; set;}

    [DataMember(Name = "mapId")]
    int MapId {get; set;}

    [DataMember(Name = "gameType")]
    string GameType {get; set;}

    [DataMember(Name = "gameState")]
    string GameState {get; set;}

    [DataMember(Name = "spectatorDelay")]
    int SpectatorDelay {get; set;}

    [DataMember(Name = "teamTwo")]
    dynamic[] TeamTwo {get; set;}

    [DataMember(Name = "playerChampionSelections")]
    dynamic[] PlayerChampionSelections {get; set;}

    [DataMember(Name = "id")]
    ulong Id {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class GameflowLcdsGameDTO {\n");
      sb.Append("  MaxNumPlayers: ").Append(MaxNumPlayers).Append("\n");
      sb.Append("  GameTypeConfigId: ").Append(GameTypeConfigId).Append("\n");
      sb.Append("  TeamOne: ").Append(TeamOne).Append("\n");
      sb.Append("  QueueTypeName: ").Append(QueueTypeName).Append("\n");
      sb.Append("  GameMode: ").Append(GameMode).Append("\n");
      sb.Append("  MapId: ").Append(MapId).Append("\n");
      sb.Append("  GameType: ").Append(GameType).Append("\n");
      sb.Append("  GameState: ").Append(GameState).Append("\n");
      sb.Append("  SpectatorDelay: ").Append(SpectatorDelay).Append("\n");
      sb.Append("  TeamTwo: ").Append(TeamTwo).Append("\n");
      sb.Append("  PlayerChampionSelections: ").Append(PlayerChampionSelections).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}