using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct MatchmakingLcdsMatchMakerParams
    {
        [DataMember(Name = "botDifficulty")]
        string BotDifficulty { get; set; }

        [DataMember(Name = "invitationId")]
        string InvitationId { get; set; }

        [DataMember(Name = "languages")]
        string Languages { get; set; }

        [DataMember(Name = "lastMaestroMessage")]
        string LastMaestroMessage { get; set; }

        [DataMember(Name = "queueIds")]
        int[] QueueIds { get; set; }

        [DataMember(Name = "team")]
        ulong[] Team { get; set; }

        [DataMember(Name = "teamId")]
        ulong TeamId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MatchmakingLcdsMatchMakerParams {\n");
            sb.Append("  BotDifficulty: ").Append(BotDifficulty).Append("\n");
            sb.Append("  InvitationId: ").Append(InvitationId).Append("\n");
            sb.Append("  Languages: ").Append(Languages).Append("\n");
            sb.Append("  LastMaestroMessage: ").Append(LastMaestroMessage).Append("\n");
            sb.Append("  QueueIds: ").Append(QueueIds).Append("\n");
            sb.Append("  Team: ").Append(Team).Append("\n");
            sb.Append("  TeamId: ").Append(TeamId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}