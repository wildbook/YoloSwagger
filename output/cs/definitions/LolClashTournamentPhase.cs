using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashTournamentPhase
    {
        [DataMember(Name = "id")]
        public long Id { get; set; }

        [DataMember(Name = "lockinStartTime")]
        public long LockinStartTime { get; set; }

        [DataMember(Name = "period")]
        public int Period { get; set; }

        [DataMember(Name = "scoutingStartTime")]
        public long ScoutingStartTime { get; set; }

        [DataMember(Name = "tournamentId")]
        public long TournamentId { get; set; }

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