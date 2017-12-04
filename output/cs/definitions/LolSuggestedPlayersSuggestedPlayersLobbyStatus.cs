using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersLobbyStatus {
    [DataMember(Name = "queueId")]
    int QueueId {get; set;}

    [DataMember(Name = "invitedSummonerIds")]
    ulong[] InvitedSummonerIds {get; set;}

    [DataMember(Name = "memberSummonerIds")]
    ulong[] MemberSummonerIds {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolSuggestedPlayersSuggestedPlayersLobbyStatus {\n");
      sb.Append("  QueueId: ").Append(QueueId).Append("\n");
      sb.Append("  InvitedSummonerIds: ").Append(InvitedSummonerIds).Append("\n");
      sb.Append("  MemberSummonerIds: ").Append(MemberSummonerIds).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}