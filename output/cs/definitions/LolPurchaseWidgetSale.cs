using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolPurchaseWidgetSale
    {
        [DataMember(Name = "prices")]
        LolPurchaseWidgetItemPrice[] Prices { get; set; }

        [DataMember(Name = "startDate")]
        string StartDate { get; set; }

        [DataMember(Name = "endDate")]
        string EndDate { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPurchaseWidgetSale {\n");
            sb.Append("  Prices: ").Append(Prices).Append("\n");
            sb.Append("  StartDate: ").Append(StartDate).Append("\n");
            sb.Append("  EndDate: ").Append(EndDate).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}