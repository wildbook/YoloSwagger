using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLootRecipeMetadata
    {
        [DataMember(Name = "bonusDescriptions")]
        public LolLootLootDescription[] BonusDescriptions { get; set; }

        [DataMember(Name = "guaranteedDescriptions")]
        public LolLootLootDescription[] GuaranteedDescriptions { get; set; }

        [DataMember(Name = "tooltipsDisabled")]
        public bool TooltipsDisabled { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootRecipeMetadata {\n");
            sb.Append("  BonusDescriptions: ").Append(BonusDescriptions).Append("\n");
            sb.Append("  GuaranteedDescriptions: ").Append(GuaranteedDescriptions).Append("\n");
            sb.Append("  TooltipsDisabled: ").Append(TooltipsDisabled).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}