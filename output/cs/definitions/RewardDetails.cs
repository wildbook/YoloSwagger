using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RewardDetails
    {
        [DataMember(Name = "rosterId")]
        public long RosterId { get; set; }

        [DataMember(Name = "teamMemberIds")]
        public long[] TeamMemberIds { get; set; }

        [DataMember(Name = "tournamentId")]
        public long TournamentId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RewardDetails {\n");
            sb.Append("  RosterId: ").Append(RosterId).Append("\n");
            sb.Append("  TeamMemberIds: ").Append(TeamMemberIds).Append("\n");
            sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}