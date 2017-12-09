using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLootContextMenu
    {
        [DataMember(Name = "actionType")]
        public string ActionType { get; set; }

        [DataMember(Name = "enabled")]
        public bool Enabled { get; set; }

        [DataMember(Name = "essenceQuantity")]
        public int EssenceQuantity { get; set; }

        [DataMember(Name = "essenceType")]
        public string EssenceType { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "requiredOthers")]
        public string RequiredOthers { get; set; }

        [DataMember(Name = "requiredOthersCount")]
        public int RequiredOthersCount { get; set; }

        [DataMember(Name = "requiredOthersName")]
        public string RequiredOthersName { get; set; }

        [DataMember(Name = "requiredTokens")]
        public string RequiredTokens { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootContextMenu {\n");
            sb.Append("  ActionType: ").Append(ActionType).Append("\n");
            sb.Append("  Enabled: ").Append(Enabled).Append("\n");
            sb.Append("  EssenceQuantity: ").Append(EssenceQuantity).Append("\n");
            sb.Append("  EssenceType: ").Append(EssenceType).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  RequiredOthers: ").Append(RequiredOthers).Append("\n");
            sb.Append("  RequiredOthersCount: ").Append(RequiredOthersCount).Append("\n");
            sb.Append("  RequiredOthersName: ").Append(RequiredOthersName).Append("\n");
            sb.Append("  RequiredTokens: ").Append(RequiredTokens).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}