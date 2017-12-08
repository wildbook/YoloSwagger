using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct MatchmakingLcdsBustedLeaver
    {
        [DataMember(Name = "summoner")]
        MatchmakingLcdsSummoner Summoner { get; set; }

        [DataMember(Name = "leaverPenaltyMillisRemaining")]
        ulong LeaverPenaltyMillisRemaining { get; set; }

        [DataMember(Name = "accessToken")]
        string AccessToken { get; set; }

        [DataMember(Name = "reasonFailed")]
        string ReasonFailed { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MatchmakingLcdsBustedLeaver {\n");
            sb.Append("  Summoner: ").Append(Summoner).Append("\n");
            sb.Append("  LeaverPenaltyMillisRemaining: ").Append(LeaverPenaltyMillisRemaining).Append("\n");
            sb.Append("  AccessToken: ").Append(AccessToken).Append("\n");
            sb.Append("  ReasonFailed: ").Append(ReasonFailed).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}