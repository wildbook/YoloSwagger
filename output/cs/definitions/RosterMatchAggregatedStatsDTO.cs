using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RosterMatchAggregatedStatsDTO
    {
        [DataMember(Name = "duration")]
        public long Duration { get; set; }

        [DataMember(Name = "gameId")]
        public long GameId { get; set; }

        [DataMember(Name = "loserBracket")]
        public bool LoserBracket { get; set; }

        [DataMember(Name = "opponentLogo")]
        public int OpponentLogo { get; set; }

        [DataMember(Name = "opponentLogoColor")]
        public int OpponentLogoColor { get; set; }

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