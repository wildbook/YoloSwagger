using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct MatchmakingLcdsFailedJoinPlayer
    {
        [DataMember(Name = "reasonFailed")]
        string ReasonFailed { get; set; }

        [DataMember(Name = "summoner")]
        MatchmakingLcdsSummoner Summoner { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MatchmakingLcdsFailedJoinPlayer {\n");
            sb.Append("  ReasonFailed: ").Append(ReasonFailed).Append("\n");
            sb.Append("  Summoner: ").Append(Summoner).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}