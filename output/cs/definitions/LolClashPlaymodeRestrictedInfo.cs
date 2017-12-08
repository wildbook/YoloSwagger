using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolClashPlaymodeRestrictedInfo
    {
        [DataMember(Name = "presenceState")]
        LolClashPresenceState PresenceState { get; set; }

        [DataMember(Name = "tournamentId")]
        long TournamentId { get; set; }

        [DataMember(Name = "isRestricted")]
        bool IsRestricted { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashPlaymodeRestrictedInfo {\n");
            sb.Append("  PresenceState: ").Append(PresenceState).Append("\n");
            sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
            sb.Append("  IsRestricted: ").Append(IsRestricted).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}