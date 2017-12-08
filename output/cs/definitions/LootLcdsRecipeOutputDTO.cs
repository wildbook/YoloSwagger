using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LootLcdsRecipeOutputDTO
    {
        [DataMember(Name = "quantityExpression")]
        string QuantityExpression { get; set; }

        [DataMember(Name = "lootName")]
        string LootName { get; set; }

        [DataMember(Name = "probability")]
        double Probability { get; set; }

        [DataMember(Name = "allowDuplicates")]
        bool AllowDuplicates { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LootLcdsRecipeOutputDTO {\n");
            sb.Append("  QuantityExpression: ").Append(QuantityExpression).Append("\n");
            sb.Append("  LootName: ").Append(LootName).Append("\n");
            sb.Append("  Probability: ").Append(Probability).Append("\n");
            sb.Append("  AllowDuplicates: ").Append(AllowDuplicates).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}