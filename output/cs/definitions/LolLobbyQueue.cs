using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLobbyQueue {
    [DataMember(Name = "queueAvailability")]
    LolLobbyQueueAvailability QueueAvailability {get; set;}

    [DataMember(Name = "gameMode")]
    string GameMode {get; set;}

    [DataMember(Name = "mapId")]
    int MapId {get; set;}

    [DataMember(Name = "areFreeChampionsAllowed")]
    bool AreFreeChampionsAllowed {get; set;}

    [DataMember(Name = "gameTypeConfig")]
    LolLobbyQueueGameTypeConfig GameTypeConfig {get; set;}

    [DataMember(Name = "id")]
    int Id {get; set;}

    [DataMember(Name = "category")]
    LolLobbyQueueGameCategory Category {get; set;}

    [DataMember(Name = "queueRewards")]
    LolLobbyQueueReward QueueRewards {get; set;}

    [DataMember(Name = "maxSummonerLevelForFirstWinOfTheDay")]
    uint MaxSummonerLevelForFirstWinOfTheDay {get; set;}

    [DataMember(Name = "isTeamOnly")]
    bool IsTeamOnly {get; set;}

    [DataMember(Name = "maximumParticipantListSize")]
    int MaximumParticipantListSize {get; set;}

    [DataMember(Name = "detailedDescription")]
    string DetailedDescription {get; set;}

    [DataMember(Name = "type")]
    string Type {get; set;}

    [DataMember(Name = "description")]
    string Description {get; set;}

    [DataMember(Name = "minLevel")]
    uint MinLevel {get; set;}

    [DataMember(Name = "gameMutator")]
    string GameMutator {get; set;}

    [DataMember(Name = "isRanked")]
    bool IsRanked {get; set;}

    [DataMember(Name = "shortName")]
    string ShortName {get; set;}

    [DataMember(Name = "numPlayersPerTeam")]
    int NumPlayersPerTeam {get; set;}

    [DataMember(Name = "spectatorEnabled")]
    bool SpectatorEnabled {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    [DataMember(Name = "allowablePremadeSizes")]
    int[] AllowablePremadeSizes {get; set;}

    [DataMember(Name = "showPositionSelector")]
    bool ShowPositionSelector {get; set;}

    [DataMember(Name = "minimumParticipantListSize")]
    int MinimumParticipantListSize {get; set;}

    [DataMember(Name = "isTeamBuilderManaged")]
    bool IsTeamBuilderManaged {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLobbyQueue {\n");
      sb.Append("  QueueAvailability: ").Append(QueueAvailability).Append("\n");
      sb.Append("  GameMode: ").Append(GameMode).Append("\n");
      sb.Append("  MapId: ").Append(MapId).Append("\n");
      sb.Append("  AreFreeChampionsAllowed: ").Append(AreFreeChampionsAllowed).Append("\n");
      sb.Append("  GameTypeConfig: ").Append(GameTypeConfig).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  Category: ").Append(Category).Append("\n");
      sb.Append("  QueueRewards: ").Append(QueueRewards).Append("\n");
      sb.Append("  MaxSummonerLevelForFirstWinOfTheDay: ").Append(MaxSummonerLevelForFirstWinOfTheDay).Append("\n");
      sb.Append("  IsTeamOnly: ").Append(IsTeamOnly).Append("\n");
      sb.Append("  MaximumParticipantListSize: ").Append(MaximumParticipantListSize).Append("\n");
      sb.Append("  DetailedDescription: ").Append(DetailedDescription).Append("\n");
      sb.Append("  Type: ").Append(Type).Append("\n");
      sb.Append("  Description: ").Append(Description).Append("\n");
      sb.Append("  MinLevel: ").Append(MinLevel).Append("\n");
      sb.Append("  GameMutator: ").Append(GameMutator).Append("\n");
      sb.Append("  IsRanked: ").Append(IsRanked).Append("\n");
      sb.Append("  ShortName: ").Append(ShortName).Append("\n");
      sb.Append("  NumPlayersPerTeam: ").Append(NumPlayersPerTeam).Append("\n");
      sb.Append("  SpectatorEnabled: ").Append(SpectatorEnabled).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  AllowablePremadeSizes: ").Append(AllowablePremadeSizes).Append("\n");
      sb.Append("  ShowPositionSelector: ").Append(ShowPositionSelector).Append("\n");
      sb.Append("  MinimumParticipantListSize: ").Append(MinimumParticipantListSize).Append("\n");
      sb.Append("  IsTeamBuilderManaged: ").Append(IsTeamBuilderManaged).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}