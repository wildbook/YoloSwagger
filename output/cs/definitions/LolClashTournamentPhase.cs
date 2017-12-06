using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolClashTournamentPhase
    {
        [DataMember(Name = "id")]
        long Id { get; set; }

        [DataMember(Name = "lockinStartTime")]
        long LockinStartTime { get; set; }

        [DataMember(Name = "period")]
        int Period { get; set; }

        [DataMember(Name = "scoutingStartTime")]
        long ScoutingStartTime { get; set; }

        [DataMember(Name = "tournamentId")]
        long TournamentId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashTournamentPhase {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  LockinStartTime: ").Append(LockinStartTime).Append("\n");
            sb.Append("  Period: ").Append(Period).Append("\n");
            sb.Append("  ScoutingStartTime: ").Append(ScoutingStartTime).Append("\n");
            sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}