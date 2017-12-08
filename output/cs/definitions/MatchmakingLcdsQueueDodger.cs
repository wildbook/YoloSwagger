using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct MatchmakingLcdsQueueDodger
    {
        [DataMember(Name = "summoner")]
        MatchmakingLcdsSummoner Summoner { get; set; }

        [DataMember(Name = "dodgePenaltyRemainingTime")]
        ulong DodgePenaltyRemainingTime { get; set; }

        [DataMember(Name = "reasonFailed")]
        string ReasonFailed { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MatchmakingLcdsQueueDodger {\n");
            sb.Append("  Summoner: ").Append(Summoner).Append("\n");
            sb.Append("  DodgePenaltyRemainingTime: ").Append(DodgePenaltyRemainingTime).Append("\n");
            sb.Append("  ReasonFailed: ").Append(ReasonFailed).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}