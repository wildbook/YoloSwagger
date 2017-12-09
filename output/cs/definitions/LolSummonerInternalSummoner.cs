using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolSummonerInternalSummoner
    {
        [DataMember(Name = "accountId")]
        public ulong AccountId { get; set; }

        [DataMember(Name = "advancedTutorialFlag")]
        public bool AdvancedTutorialFlag { get; set; }

        [DataMember(Name = "displayEloQuestionaireFlag")]
        public bool DisplayEloQuestionaireFlag { get; set; }

        [DataMember(Name = "displayName")]
        public string DisplayName { get; set; }

        [DataMember(Name = "helpFlag")]
        public bool HelpFlag { get; set; }

        [DataMember(Name = "internalName")]
        public string InternalName { get; set; }

        [DataMember(Name = "lastSeasonHighestRank")]
        public string LastSeasonHighestRank { get; set; }

        [DataMember(Name = "nameChangeFlag")]
        public bool NameChangeFlag { get; set; }

        [DataMember(Name = "profileIconId")]
        public int ProfileIconId { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        [DataMember(Name = "tutorialFlag")]
        public bool TutorialFlag { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolSummonerInternalSummoner {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  AdvancedTutorialFlag: ").Append(AdvancedTutorialFlag).Append("\n");
            sb.Append("  DisplayEloQuestionaireFlag: ").Append(DisplayEloQuestionaireFlag).Append("\n");
            sb.Append("  DisplayName: ").Append(DisplayName).Append("\n");
            sb.Append("  HelpFlag: ").Append(HelpFlag).Append("\n");
            sb.Append("  InternalName: ").Append(InternalName).Append("\n");
            sb.Append("  LastSeasonHighestRank: ").Append(LastSeasonHighestRank).Append("\n");
            sb.Append("  NameChangeFlag: ").Append(NameChangeFlag).Append("\n");
            sb.Append("  ProfileIconId: ").Append(ProfileIconId).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  TutorialFlag: ").Append(TutorialFlag).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}