using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolStoreItemCost
    {
        [DataMember(Name = "currency")]
        string Currency { get; set; }

        [DataMember(Name = "cost")]
        long Cost { get; set; }

        [DataMember(Name = "discount")]
        float? Discount { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolStoreItemCost {\n");
            sb.Append("  Currency: ").Append(Currency).Append("\n");
            sb.Append("  Cost: ").Append(Cost).Append("\n");
            sb.Append("  Discount: ").Append(Discount).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}