using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolStoreBundled
    {
        [DataMember(Name = "flexible")]
        public bool Flexible { get; set; }

        [DataMember(Name = "items")]
        public LolStoreBundledItem[] Items { get; set; }

        [DataMember(Name = "minimumPrices")]
        public LolStoreBundledItemCost[] MinimumPrices { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolStoreBundled {\n");
            sb.Append("  Flexible: ").Append(Flexible).Append("\n");
            sb.Append("  Items: ").Append(Items).Append("\n");
            sb.Append("  MinimumPrices: ").Append(MinimumPrices).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}