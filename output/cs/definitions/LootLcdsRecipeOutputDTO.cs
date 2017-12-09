using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LootLcdsRecipeOutputDTO
    {
        [DataMember(Name = "allowDuplicates")]
        public bool AllowDuplicates { get; set; }

        [DataMember(Name = "lootName")]
        public string LootName { get; set; }

        [DataMember(Name = "probability")]
        public double Probability { get; set; }

        [DataMember(Name = "quantityExpression")]
        public string QuantityExpression { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LootLcdsRecipeOutputDTO {\n");
            sb.Append("  AllowDuplicates: ").Append(AllowDuplicates).Append("\n");
            sb.Append("  LootName: ").Append(LootName).Append("\n");
            sb.Append("  Probability: ").Append(Probability).Append("\n");
            sb.Append("  QuantityExpression: ").Append(QuantityExpression).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}