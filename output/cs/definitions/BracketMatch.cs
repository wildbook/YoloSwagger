using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct BracketMatch
    {
        [DataMember(Name = "status")]
        ClientBracketMatchStatus Status { get; set; }

        [DataMember(Name = "loserBracket")]
        bool LoserBracket { get; set; }

        [DataMember(Name = "gameId")]
        long GameId { get; set; }

        [DataMember(Name = "gameStartTime")]
        long GameStartTime { get; set; }

        [DataMember(Name = "winnerId")]
        long WinnerId { get; set; }

        [DataMember(Name = "roundStartTime")]
        long RoundStartTime { get; set; }

        [DataMember(Name = "order")]
        int Order { get; set; }

        [DataMember(Name = "rosterId2")]
        long RosterId2 { get; set; }

        [DataMember(Name = "rosterId1")]
        long RosterId1 { get; set; }

        [DataMember(Name = "id")]
        long Id { get; set; }

        [DataMember(Name = "round")]
        int Round { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BracketMatch {\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("  LoserBracket: ").Append(LoserBracket).Append("\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  GameStartTime: ").Append(GameStartTime).Append("\n");
            sb.Append("  WinnerId: ").Append(WinnerId).Append("\n");
            sb.Append("  RoundStartTime: ").Append(RoundStartTime).Append("\n");
            sb.Append("  Order: ").Append(Order).Append("\n");
            sb.Append("  RosterId2: ").Append(RosterId2).Append("\n");
            sb.Append("  RosterId1: ").Append(RosterId1).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Round: ").Append(Round).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}