using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LootLcdsRecipeMetadata
    {
        [DataMember(Name = "bonusDescriptions")]
        public LootLcdsLootDescriptionDTO[] BonusDescriptions { get; set; }

        [DataMember(Name = "guaranteedDescriptions")]
        public LootLcdsLootDescriptionDTO[] GuaranteedDescriptions { get; set; }

        [DataMember(Name = "tooltipsDisabled")]
        public bool TooltipsDisabled { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LootLcdsRecipeMetadata {\n");
            sb.Append("  BonusDescriptions: ").Append(BonusDescriptions).Append("\n");
            sb.Append("  GuaranteedDescriptions: ").Append(GuaranteedDescriptions).Append("\n");
            sb.Append("  TooltipsDisabled: ").Append(TooltipsDisabled).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}