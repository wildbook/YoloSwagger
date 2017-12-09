using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyLobbyMatchmakingSearchErrorResource
    {
        [DataMember(Name = "errorType")]
        public string ErrorType { get; set; }

        [DataMember(Name = "id")]
        public int Id { get; set; }

        [DataMember(Name = "message")]
        public string Message { get; set; }

        [DataMember(Name = "penalizedSummonerId")]
        public ulong PenalizedSummonerId { get; set; }

        [DataMember(Name = "penaltyTimeRemaining")]
        public double PenaltyTimeRemaining { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLobbyMatchmakingSearchErrorResource {\n");
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