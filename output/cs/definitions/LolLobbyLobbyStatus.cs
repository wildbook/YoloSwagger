using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLobbyLobbyStatus {
    [DataMember(Name = "lobbyId")]
    string LobbyId {get; set;}

    [DataMember(Name = "queueId")]
    int QueueId {get; set;}

    [DataMember(Name = "invitedSummonerIds")]
    ulong[] InvitedSummonerIds {get; set;}

    [DataMember(Name = "allowedPlayAgain")]
    bool AllowedPlayAgain {get; set;}

    [DataMember(Name = "customSpectatorPolicy")]
    LolLobbyQueueCustomGameSpectatorPolicy CustomSpectatorPolicy {get; set;}

    [DataMember(Name = "isSpectator")]
    bool IsSpectator {get; set;}

    [DataMember(Name = "isPracticeTool")]
    bool IsPracticeTool {get; set;}

    [DataMember(Name = "isCustom")]
    bool IsCustom {get; set;}

    [DataMember(Name = "isLeader")]
    bool IsLeader {get; set;}

    [DataMember(Name = "memberSummonerIds")]
    ulong[] MemberSummonerIds {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLobbyLobbyStatus {\n");
      sb.Append("  LobbyId: ").Append(LobbyId).Append("\n");
      sb.Append("  QueueId: ").Append(QueueId).Append("\n");
      sb.Append("  InvitedSummonerIds: ").Append(InvitedSummonerIds).Append("\n");
      sb.Append("  AllowedPlayAgain: ").Append(AllowedPlayAgain).Append("\n");
      sb.Append("  CustomSpectatorPolicy: ").Append(CustomSpectatorPolicy).Append("\n");
      sb.Append("  IsSpectator: ").Append(IsSpectator).Append("\n");
      sb.Append("  IsPracticeTool: ").Append(IsPracticeTool).Append("\n");
      sb.Append("  IsCustom: ").Append(IsCustom).Append("\n");
      sb.Append("  IsLeader: ").Append(IsLeader).Append("\n");
      sb.Append("  MemberSummonerIds: ").Append(MemberSummonerIds).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}