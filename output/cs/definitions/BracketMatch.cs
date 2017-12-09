using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct BracketMatch
    {
        [DataMember(Name = "gameId")]
        public long GameId { get; set; }

        [DataMember(Name = "gameStartTime")]
        public long GameStartTime { get; set; }

        [DataMember(Name = "id")]
        public long Id { get; set; }

        [DataMember(Name = "loserBracket")]
        public bool LoserBracket { get; set; }

        [DataMember(Name = "order")]
        public int Order { get; set; }

        [DataMember(Name = "rosterId1")]
        public long RosterId1 { get; set; }

        [DataMember(Name = "rosterId2")]
        public long RosterId2 { get; set; }

        [DataMember(Name = "round")]
        public int Round { get; set; }

        [DataMember(Name = "roundStartTime")]
        public long RoundStartTime { get; set; }

        [DataMember(Name = "status")]
        public ClientBracketMatchStatus Status { get; set; }

        [DataMember(Name = "winnerId")]
        public long WinnerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BracketMatch {\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  GameStartTime: ").Append(GameStartTime).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  LoserBracket: ").Append(LoserBracket).Append("\n");
            sb.Append("  Order: ").Append(Order).Append("\n");
            sb.Append("  RosterId1: ").Append(RosterId1).Append("\n");
            sb.Append("  RosterId2: ").Append(RosterId2).Append("\n");
            sb.Append("  Round: ").Append(Round).Append("\n");
            sb.Append("  RoundStartTime: ").Append(RoundStartTime).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("  WinnerId: ").Append(WinnerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}