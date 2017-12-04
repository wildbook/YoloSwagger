using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLobbyLobbyCustomGameConfiguration {
    [DataMember(Name = "spectatorPolicy")]
    LolLobbyQueueCustomGameSpectatorPolicy SpectatorPolicy {get; set;}

    [DataMember(Name = "maxPlayerCount")]
    uint MaxPlayerCount {get; set;}

    [DataMember(Name = "tournamentGameMode")]
    string TournamentGameMode {get; set;}

    [DataMember(Name = "gameMode")]
    string GameMode {get; set;}

    [DataMember(Name = "mapId")]
    int MapId {get; set;}

    [DataMember(Name = "gameServerRegion")]
    string GameServerRegion {get; set;}

    [DataMember(Name = "teamSize")]
    int TeamSize {get; set;}

    [DataMember(Name = "gameMutator")]
    string GameMutator {get; set;}

    [DataMember(Name = "tournamentPassbackDataPacket")]
    string TournamentPassbackDataPacket {get; set;}

    [DataMember(Name = "mutators")]
    LolLobbyQueueGameTypeConfig Mutators {get; set;}

    [DataMember(Name = "gameTypeConfig")]
    LolLobbyQueueGameTypeConfig GameTypeConfig {get; set;}

    [DataMember(Name = "tournamentPassbackUrl")]
    string TournamentPassbackUrl {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLobbyLobbyCustomGameConfiguration {\n");
      sb.Append("  SpectatorPolicy: ").Append(SpectatorPolicy).Append("\n");
      sb.Append("  MaxPlayerCount: ").Append(MaxPlayerCount).Append("\n");
      sb.Append("  TournamentGameMode: ").Append(TournamentGameMode).Append("\n");
      sb.Append("  GameMode: ").Append(GameMode).Append("\n");
      sb.Append("  MapId: ").Append(MapId).Append("\n");
      sb.Append("  GameServerRegion: ").Append(GameServerRegion).Append("\n");
      sb.Append("  TeamSize: ").Append(TeamSize).Append("\n");
      sb.Append("  GameMutator: ").Append(GameMutator).Append("\n");
      sb.Append("  TournamentPassbackDataPacket: ").Append(TournamentPassbackDataPacket).Append("\n");
      sb.Append("  Mutators: ").Append(Mutators).Append("\n");
      sb.Append("  GameTypeConfig: ").Append(GameTypeConfig).Append("\n");
      sb.Append("  TournamentPassbackUrl: ").Append(TournamentPassbackUrl).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}