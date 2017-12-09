using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPurchaseWidgetSale
    {
        [DataMember(Name = "endDate")]
        public string EndDate { get; set; }

        [DataMember(Name = "prices")]
        public LolPurchaseWidgetItemPrice[] Prices { get; set; }

        [DataMember(Name = "startDate")]
        public string StartDate { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPurchaseWidgetSale {\n");
            sb.Append("  EndDate: ").Append(EndDate).Append("\n");
            sb.Append("  Prices: ").Append(Prices).Append("\n");
            sb.Append("  StartDate: ").Append(StartDate).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}