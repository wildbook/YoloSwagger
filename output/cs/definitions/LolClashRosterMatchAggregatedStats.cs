using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashRosterMatchAggregatedStats
    {
        [DataMember(Name = "durationMs")]
        public long DurationMs { get; set; }

        [DataMember(Name = "gameId")]
        public long GameId { get; set; }

        [DataMember(Name = "loserBracket")]
        public bool LoserBracket { get; set; }

        [DataMember(Name = "opponentIconColorId")]
        public int OpponentIconColorId { get; set; }

        [DataMember(Name = "opponentIconId")]
        public int OpponentIconId { get; set; }

        [DataMember(Name = "opponentShortName")]
        public string OpponentShortName { get; set; }

        [DataMember(Name = "playerChampionIds")]
        public Dictionary<string, int> PlayerChampionIds { get; set; }

        [DataMember(Name = "round")]
        public int Round { get; set; }

        [DataMember(Name = "win")]
        public bool Win { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashRosterMatchAggregatedStats {\n");
            sb.Append("  DurationMs: ").Append(DurationMs).Append("\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  LoserBracket: ").Append(LoserBracket).Append("\n");
            sb.Append("  OpponentIconColorId: ").Append(OpponentIconColorId).Append("\n");
            sb.Append("  OpponentIconId: ").Append(OpponentIconId).Append("\n");
            sb.Append("  OpponentShortName: ").Append(OpponentShortName).Append("\n");
            sb.Append("  PlayerChampionIds: ").Append(PlayerChampionIds).Append("\n");
            sb.Append("  Round: ").Append(Round).Append("\n");
            sb.Append("  Win: ").Append(Win).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}