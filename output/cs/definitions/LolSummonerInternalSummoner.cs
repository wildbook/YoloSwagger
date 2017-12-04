using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolSummonerInternalSummoner {
    [DataMember(Name = "displayEloQuestionaireFlag")]
    bool DisplayEloQuestionaireFlag {get; set;}

    [DataMember(Name = "internalName")]
    string InternalName {get; set;}

    [DataMember(Name = "displayName")]
    string DisplayName {get; set;}

    [DataMember(Name = "tutorialFlag")]
    bool TutorialFlag {get; set;}

    [DataMember(Name = "lastSeasonHighestRank")]
    string LastSeasonHighestRank {get; set;}

    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    [DataMember(Name = "profileIconId")]
    int ProfileIconId {get; set;}

    [DataMember(Name = "helpFlag")]
    bool HelpFlag {get; set;}

    [DataMember(Name = "nameChangeFlag")]
    bool NameChangeFlag {get; set;}

    [DataMember(Name = "advancedTutorialFlag")]
    bool AdvancedTutorialFlag {get; set;}

    [DataMember(Name = "accountId")]
    ulong AccountId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolSummonerInternalSummoner {\n");
      sb.Append("  DisplayEloQuestionaireFlag: ").Append(DisplayEloQuestionaireFlag).Append("\n");
      sb.Append("  InternalName: ").Append(InternalName).Append("\n");
      sb.Append("  DisplayName: ").Append(DisplayName).Append("\n");
      sb.Append("  TutorialFlag: ").Append(TutorialFlag).Append("\n");
      sb.Append("  LastSeasonHighestRank: ").Append(LastSeasonHighestRank).Append("\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("  ProfileIconId: ").Append(ProfileIconId).Append("\n");
      sb.Append("  HelpFlag: ").Append(HelpFlag).Append("\n");
      sb.Append("  NameChangeFlag: ").Append(NameChangeFlag).Append("\n");
      sb.Append("  AdvancedTutorialFlag: ").Append(AdvancedTutorialFlag).Append("\n");
      sb.Append("  AccountId: ").Append(AccountId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}