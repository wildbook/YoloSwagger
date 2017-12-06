using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolMatchmakingMatchmakingSearchErrorResource
    {
        [DataMember(Name = "errorType")]
        string ErrorType { get; set; }

        [DataMember(Name = "id")]
        int Id { get; set; }

        [DataMember(Name = "message")]
        string Message { get; set; }

        [DataMember(Name = "penalizedSummonerId")]
        ulong PenalizedSummonerId { get; set; }

        [DataMember(Name = "penaltyTimeRemaining")]
        double PenaltyTimeRemaining { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchmakingMatchmakingSearchErrorResource {\n");
            sb.Append("  ErrorType: ").Append(ErrorType).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Message: ").Append(Message).Append("\n");
            sb.Append("  PenalizedSummonerId: ").Append(PenalizedSummonerId).Append("\n");
            sb.Append("  PenaltyTimeRemaining: ").Append(PenaltyTimeRemaining).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}