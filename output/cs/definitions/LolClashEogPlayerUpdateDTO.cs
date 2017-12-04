using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolClashEogPlayerUpdateDTO {
    [DataMember(Name = "gameId")]
    long GameId {get; set;}

    [DataMember(Name = "rewardProgress")]
    ClashRewardDefinition[] RewardProgress {get; set;}

    [DataMember(Name = "seasonVp")]
    int SeasonVp {get; set;}

    [DataMember(Name = "earnedRewards")]
    ClashRewardDefinition[] EarnedRewards {get; set;}

    [DataMember(Name = "winner")]
    bool Winner {get; set;}

    [DataMember(Name = "themeVp")]
    int ThemeVp {get; set;}

    [DataMember(Name = "tournamentId")]
    long TournamentId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolClashEogPlayerUpdateDTO {\n");
      sb.Append("  GameId: ").Append(GameId).Append("\n");
      sb.Append("  RewardProgress: ").Append(RewardProgress).Append("\n");
      sb.Append("  SeasonVp: ").Append(SeasonVp).Append("\n");
      sb.Append("  EarnedRewards: ").Append(EarnedRewards).Append("\n");
      sb.Append("  Winner: ").Append(Winner).Append("\n");
      sb.Append("  ThemeVp: ").Append(ThemeVp).Append("\n");
      sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}