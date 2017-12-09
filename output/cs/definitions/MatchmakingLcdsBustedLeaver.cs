using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct MatchmakingLcdsBustedLeaver
    {
        [DataMember(Name = "accessToken")]
        public string AccessToken { get; set; }

        [DataMember(Name = "leaverPenaltyMillisRemaining")]
        public ulong LeaverPenaltyMillisRemaining { get; set; }

        [DataMember(Name = "reasonFailed")]
        public string ReasonFailed { get; set; }

        [DataMember(Name = "summoner")]
        public MatchmakingLcdsSummoner Summoner { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MatchmakingLcdsBustedLeaver {\n");
            sb.Append("  AccessToken: ").Append(AccessToken).Append("\n");
            sb.Append("  LeaverPenaltyMillisRemaining: ").Append(LeaverPenaltyMillisRemaining).Append("\n");
            sb.Append("  ReasonFailed: ").Append(ReasonFailed).Append("\n");
            sb.Append("  Summoner: ").Append(Summoner).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}