using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PrivateSummonerDTO
    {
        [DataMember(Name = "acctId")]
        public ulong AcctId { get; set; }

        [DataMember(Name = "advancedTutorialFlag")]
        public bool AdvancedTutorialFlag { get; set; }

        [DataMember(Name = "displayEloQuestionaire")]
        public bool DisplayEloQuestionaire { get; set; }

        [DataMember(Name = "internalName")]
        public string InternalName { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "nameChangeFlag")]
        public bool NameChangeFlag { get; set; }

        [DataMember(Name = "previousSeasonHighestTier")]
        public string PreviousSeasonHighestTier { get; set; }

        [DataMember(Name = "profileIconId")]
        public int ProfileIconId { get; set; }

        [DataMember(Name = "sumId")]
        public ulong SumId { get; set; }

        [DataMember(Name = "tutorialFlag")]
        public bool TutorialFlag { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PrivateSummonerDTO {\n");
            sb.Append("  AcctId: ").Append(AcctId).Append("\n");
            sb.Append("  AdvancedTutorialFlag: ").Append(AdvancedTutorialFlag).Append("\n");
            sb.Append("  DisplayEloQuestionaire: ").Append(DisplayEloQuestionaire).Append("\n");
            sb.Append("  InternalName: ").Append(InternalName).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  NameChangeFlag: ").Append(NameChangeFlag).Append("\n");
            sb.Append("  PreviousSeasonHighestTier: ").Append(PreviousSeasonHighestTier).Append("\n");
            sb.Append("  ProfileIconId: ").Append(ProfileIconId).Append("\n");
            sb.Append("  SumId: ").Append(SumId).Append("\n");
            sb.Append("  TutorialFlag: ").Append(TutorialFlag).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}