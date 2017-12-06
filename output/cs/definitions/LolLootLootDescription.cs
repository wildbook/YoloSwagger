using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLootLootDescription
    {
        [DataMember(Name = "childLootTableNames")]
        string[] ChildLootTableNames { get; set; }

        [DataMember(Name = "localizationLongDescriptionMap")]
        Dictionary<string, string> LocalizationLongDescriptionMap { get; set; }

        [DataMember(Name = "localizationMap")]
        Dictionary<string, string> LocalizationMap { get; set; }

        [DataMember(Name = "lootName")]
        string LootName { get; set; }

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