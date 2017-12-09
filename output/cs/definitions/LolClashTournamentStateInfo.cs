using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashTournamentStateInfo
    {
        [DataMember(Name = "currentPhaseId")]
        public long CurrentPhaseId { get; set; }

        [DataMember(Name = "nextPhaseId")]
        public long NextPhaseId { get; set; }

        [DataMember(Name = "nextStateChangeTime")]
        public long NextStateChangeTime { get; set; }

        [DataMember(Name = "numRemainingPeriods")]
        public int NumRemainingPeriods { get; set; }

        [DataMember(Name = "state")]
        public LolClashTournamentState State { get; set; }

        [DataMember(Name = "tournamentId")]
        public long TournamentId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashTournamentStateInfo {\n");
            sb.Append("  CurrentPhaseId: ").Append(CurrentPhaseId).Append("\n");
            sb.Append("  NextPhaseId: ").Append(NextPhaseId).Append("\n");
            sb.Append("  NextStateChangeTime: ").Append(NextStateChangeTime).Append("\n");
            sb.Append("  NumRemainingPeriods: ").Append(NumRemainingPeriods).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}