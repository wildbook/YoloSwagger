using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct RosterMatchAggregatedStatsDTO
    {
        [DataMember(Name = "duration")]
        long Duration { get; set; }

        [DataMember(Name = "gameId")]
        long GameId { get; set; }

        [DataMember(Name = "loserBracket")]
        bool LoserBracket { get; set; }

        [DataMember(Name = "opponentLogo")]
        int OpponentLogo { get; set; }

        [DataMember(Name = "opponentLogoColor")]
        int OpponentLogoColor { get; set; }

        [DataMember(Name = "opponentShortName")]
        string OpponentShortName { get; set; }

        [DataMember(Name = "playerChampionIds")]
        Dictionary<string, int> PlayerChampionIds { get; set; }

        [DataMember(Name = "round")]
        int Round { get; set; }

        [DataMember(Name = "win")]
        bool Win { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RosterMatchAggregatedStatsDTO {\n");
            sb.Append("  Duration: ").Append(Duration).Append("\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  LoserBracket: ").Append(LoserBracket).Append("\n");
            sb.Append("  OpponentLogo: ").Append(OpponentLogo).Append("\n");
            sb.Append("  OpponentLogoColor: ").Append(OpponentLogoColor).Append("\n");
            sb.Append("  OpponentShortName: ").Append(OpponentShortName).Append("\n");
            sb.Append("  PlayerChampionIds: ").Append(PlayerChampionIds).Append("\n");
            sb.Append("  Round: ").Append(Round).Append("\n");
            sb.Append("  Win: ").Append(Win).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}