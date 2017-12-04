using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPftPFTEndOfGameTeam {
    [DataMember(Name = "stats")]
    dynamic Stats {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    [DataMember(Name = "tag")]
    string Tag {get; set;}

    [DataMember(Name = "memberStatusString")]
    string MemberStatusString {get; set;}

    [DataMember(Name = "isWinningTeam")]
    bool IsWinningTeam {get; set;}

    [DataMember(Name = "isPlayerTeam")]
    bool IsPlayerTeam {get; set;}

    [DataMember(Name = "players")]
    LolPftPFTEndOfGamePlayer[] Players {get; set;}

    [DataMember(Name = "teamId")]
    int TeamId {get; set;}

    [DataMember(Name = "championBans")]
    int[] ChampionBans {get; set;}

    [DataMember(Name = "fullId")]
    string FullId {get; set;}

    [DataMember(Name = "isBottomTeam")]
    bool IsBottomTeam {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPftPFTEndOfGameTeam {\n");
      sb.Append("  Stats: ").Append(Stats).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  Tag: ").Append(Tag).Append("\n");
      sb.Append("  MemberStatusString: ").Append(MemberStatusString).Append("\n");
      sb.Append("  IsWinningTeam: ").Append(IsWinningTeam).Append("\n");
      sb.Append("  IsPlayerTeam: ").Append(IsPlayerTeam).Append("\n");
      sb.Append("  Players: ").Append(Players).Append("\n");
      sb.Append("  TeamId: ").Append(TeamId).Append("\n");
      sb.Append("  ChampionBans: ").Append(ChampionBans).Append("\n");
      sb.Append("  FullId: ").Append(FullId).Append("\n");
      sb.Append("  IsBottomTeam: ").Append(IsBottomTeam).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}