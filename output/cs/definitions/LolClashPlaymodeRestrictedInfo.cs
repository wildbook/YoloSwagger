using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashPlaymodeRestrictedInfo
    {
        [DataMember(Name = "isRestricted")]
        public bool IsRestricted { get; set; }

        [DataMember(Name = "presenceState")]
        public LolClashPresenceState PresenceState { get; set; }

        [DataMember(Name = "tournamentId")]
        public long TournamentId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashPlaymodeRestrictedInfo {\n");
            sb.Append("  IsRestricted: ").Append(IsRestricted).Append("\n");
            sb.Append("  PresenceState: ").Append(PresenceState).Append("\n");
            sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}