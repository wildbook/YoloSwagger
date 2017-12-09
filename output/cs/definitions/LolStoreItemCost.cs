using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolStoreItemCost
    {
        [DataMember(Name = "cost")]
        public long Cost { get; set; }

        [DataMember(Name = "currency")]
        public string Currency { get; set; }

        [DataMember(Name = "discount")]
        public float? Discount { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolStoreItemCost {\n");
            sb.Append("  Cost: ").Append(Cost).Append("\n");
            sb.Append("  Currency: ").Append(Currency).Append("\n");
            sb.Append("  Discount: ").Append(Discount).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}