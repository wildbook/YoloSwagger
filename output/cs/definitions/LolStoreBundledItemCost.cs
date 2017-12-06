using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolStoreBundledItemCost
    {
        [DataMember(Name = "cost")]
        long Cost { get; set; }

        [DataMember(Name = "costType")]
        string CostType { get; set; }

        [DataMember(Name = "currency")]
        string Currency { get; set; }

        [DataMember(Name = "discount")]
        float? Discount { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolStoreBundledItemCost {\n");
            sb.Append("  Cost: ").Append(Cost).Append("\n");
            sb.Append("  CostType: ").Append(CostType).Append("\n");
            sb.Append("  Currency: ").Append(Currency).Append("\n");
            sb.Append("  Discount: ").Append(Discount).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}