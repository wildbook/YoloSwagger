using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolClashRosterMatchAggregatedStats
    {
        [DataMember(Name = "loserBracket")]
        bool LoserBracket { get; set; }

        [DataMember(Name = "gameId")]
        long GameId { get; set; }

        [DataMember(Name = "win")]
        bool Win { get; set; }

        [DataMember(Name = "durationMs")]
        long DurationMs { get; set; }

        [DataMember(Name = "round")]
        int Round { get; set; }

        [DataMember(Name = "opponentIconId")]
        int OpponentIconId { get; set; }

        [DataMember(Name = "opponentShortName")]
        string OpponentShortName { get; set; }

        [DataMember(Name = "playerChampionIds")]
        Dictionary<string, int> PlayerChampionIds { get; set; }

        [DataMember(Name = "opponentIconColorId")]
        int OpponentIconColorId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashRosterMatchAggregatedStats {\n");
            sb.Append("  LoserBracket: ").Append(LoserBracket).Append("\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  Win: ").Append(Win).Append("\n");
            sb.Append("  DurationMs: ").Append(DurationMs).Append("\n");
            sb.Append("  Round: ").Append(Round).Append("\n");
            sb.Append("  OpponentIconId: ").Append(OpponentIconId).Append("\n");
            sb.Append("  OpponentShortName: ").Append(OpponentShortName).Append("\n");
            sb.Append("  PlayerChampionIds: ").Append(PlayerChampionIds).Append("\n");
            sb.Append("  OpponentIconColorId: ").Append(OpponentIconColorId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}