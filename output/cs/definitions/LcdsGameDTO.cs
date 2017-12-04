using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LcdsGameDTO {
    [DataMember(Name = "optimisticLock")]
    long OptimisticLock {get; set;}

    [DataMember(Name = "maxNumPlayers")]
    int MaxNumPlayers {get; set;}

    [DataMember(Name = "gameTypeConfigId")]
    int GameTypeConfigId {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    [DataMember(Name = "teamOne")]
    LcdsPlayerParticipant[] TeamOne {get; set;}

    [DataMember(Name = "ownerSummary")]
    LcdsPlayerParticipant OwnerSummary {get; set;}

    [DataMember(Name = "teamTwo")]
    LcdsPlayerParticipant[] TeamTwo {get; set;}

    [DataMember(Name = "gameMode")]
    string GameMode {get; set;}

    [DataMember(Name = "mapId")]
    int MapId {get; set;}

    [DataMember(Name = "gameType")]
    string GameType {get; set;}

    [DataMember(Name = "observers")]
    LcdsPlayerParticipant[] Observers {get; set;}

    [DataMember(Name = "practiceGameRewardsDisabledReasons")]
    string[] PracticeGameRewardsDisabledReasons {get; set;}

    [DataMember(Name = "spectatorsAllowed")]
    string SpectatorsAllowed {get; set;}

    [DataMember(Name = "gameState")]
    string GameState {get; set;}

    [DataMember(Name = "passbackUrl")]
    string PassbackUrl {get; set;}

    [DataMember(Name = "gameMutators")]
    string[] GameMutators {get; set;}

    [DataMember(Name = "passbackDataPacket")]
    string PassbackDataPacket {get; set;}

    [DataMember(Name = "roomName")]
    string RoomName {get; set;}

    [DataMember(Name = "roomPassword")]
    string RoomPassword {get; set;}

    [DataMember(Name = "id")]
    long Id {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LcdsGameDTO {\n");
      sb.Append("  OptimisticLock: ").Append(OptimisticLock).Append("\n");
      sb.Append("  MaxNumPlayers: ").Append(MaxNumPlayers).Append("\n");
      sb.Append("  GameTypeConfigId: ").Append(GameTypeConfigId).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  TeamOne: ").Append(TeamOne).Append("\n");
      sb.Append("  OwnerSummary: ").Append(OwnerSummary).Append("\n");
      sb.Append("  TeamTwo: ").Append(TeamTwo).Append("\n");
      sb.Append("  GameMode: ").Append(GameMode).Append("\n");
      sb.Append("  MapId: ").Append(MapId).Append("\n");
      sb.Append("  GameType: ").Append(GameType).Append("\n");
      sb.Append("  Observers: ").Append(Observers).Append("\n");
      sb.Append("  PracticeGameRewardsDisabledReasons: ").Append(PracticeGameRewardsDisabledReasons).Append("\n");
      sb.Append("  SpectatorsAllowed: ").Append(SpectatorsAllowed).Append("\n");
      sb.Append("  GameState: ").Append(GameState).Append("\n");
      sb.Append("  PassbackUrl: ").Append(PassbackUrl).Append("\n");
      sb.Append("  GameMutators: ").Append(GameMutators).Append("\n");
      sb.Append("  PassbackDataPacket: ").Append(PassbackDataPacket).Append("\n");
      sb.Append("  RoomName: ").Append(RoomName).Append("\n");
      sb.Append("  RoomPassword: ").Append(RoomPassword).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}