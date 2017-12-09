using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPurchaseWidgetPurchaseRequest
    {
        [DataMember(Name = "items")]
        public LolPurchaseWidgetPurchaseItem[] Items { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPurchaseWidgetPurchaseRequest {\n");
            sb.Append("  Items: ").Append(Items).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}