using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolSuggestedPlayersSuggestedPlayersLobbyStatus
    {
        [DataMember(Name = "invitedSummonerIds")]
        public ulong[] InvitedSummonerIds { get; set; }

        [DataMember(Name = "memberSummonerIds")]
        public ulong[] MemberSummonerIds { get; set; }

        [DataMember(Name = "queueId")]
        public int QueueId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolSuggestedPlayersSuggestedPlayersLobbyStatus {\n");
            sb.Append("  InvitedSummonerIds: ").Append(InvitedSummonerIds).Append("\n");
            sb.Append("  MemberSummonerIds: ").Append(MemberSummonerIds).Append("\n");
            sb.Append("  QueueId: ").Append(QueueId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}