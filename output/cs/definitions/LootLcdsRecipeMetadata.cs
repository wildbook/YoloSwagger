using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LootLcdsRecipeMetadata
    {
        [DataMember(Name = "tooltipsDisabled")]
        bool TooltipsDisabled { get; set; }

        [DataMember(Name = "bonusDescriptions")]
        LootLcdsLootDescriptionDTO[] BonusDescriptions { get; set; }

        [DataMember(Name = "guaranteedDescriptions")]
        LootLcdsLootDescriptionDTO[] GuaranteedDescriptions { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LootLcdsRecipeMetadata {\n");
            sb.Append("  TooltipsDisabled: ").Append(TooltipsDisabled).Append("\n");
            sb.Append("  BonusDescriptions: ").Append(BonusDescriptions).Append("\n");
            sb.Append("  GuaranteedDescriptions: ").Append(GuaranteedDescriptions).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}