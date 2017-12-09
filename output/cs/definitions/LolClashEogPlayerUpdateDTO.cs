using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashEogPlayerUpdateDTO
    {
        [DataMember(Name = "earnedRewards")]
        public ClashRewardDefinition[] EarnedRewards { get; set; }

        [DataMember(Name = "gameId")]
        public long GameId { get; set; }

        [DataMember(Name = "rewardProgress")]
        public ClashRewardDefinition[] RewardProgress { get; set; }

        [DataMember(Name = "seasonVp")]
        public int SeasonVp { get; set; }

        [DataMember(Name = "themeVp")]
        public int ThemeVp { get; set; }

        [DataMember(Name = "tournamentId")]
        public long TournamentId { get; set; }

        [DataMember(Name = "winner")]
        public bool Winner { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashEogPlayerUpdateDTO {\n");
            sb.Append("  EarnedRewards: ").Append(EarnedRewards).Append("\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  RewardProgress: ").Append(RewardProgress).Append("\n");
            sb.Append("  SeasonVp: ").Append(SeasonVp).Append("\n");
            sb.Append("  ThemeVp: ").Append(ThemeVp).Append("\n");
            sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
            sb.Append("  Winner: ").Append(Winner).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}