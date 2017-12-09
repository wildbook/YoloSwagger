using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLootLootDescription
    {
        [DataMember(Name = "childLootTableNames")]
        public string[] ChildLootTableNames { get; set; }

        [DataMember(Name = "localizationLongDescriptionMap")]
        public Dictionary<string, string> LocalizationLongDescriptionMap { get; set; }

        [DataMember(Name = "localizationMap")]
        public Dictionary<string, string> LocalizationMap { get; set; }

        [DataMember(Name = "lootName")]
        public string LootName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootLootDescription {\n");
            sb.Append("  ChildLootTableNames: ").Append(ChildLootTableNames).Append("\n");
            sb.Append("  LocalizationLongDescriptionMap: ").Append(LocalizationLongDescriptionMap).Append("\n");
            sb.Append("  LocalizationMap: ").Append(LocalizationMap).Append("\n");
            sb.Append("  LootName: ").Append(LootName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}