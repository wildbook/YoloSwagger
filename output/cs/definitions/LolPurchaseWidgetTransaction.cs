using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolPurchaseWidgetTransaction
    {
        [DataMember(Name = "iconUrl")]
        string IconUrl { get; set; }

        [DataMember(Name = "itemKey")]
        LolPurchaseWidgetItemKey ItemKey { get; set; }

        [DataMember(Name = "itemName")]
        string ItemName { get; set; }

        [DataMember(Name = "transactionId")]
        string TransactionId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPurchaseWidgetTransaction {\n");
            sb.Append("  IconUrl: ").Append(IconUrl).Append("\n");
            sb.Append("  ItemKey: ").Append(ItemKey).Append("\n");
            sb.Append("  ItemName: ").Append(ItemName).Append("\n");
            sb.Append("  TransactionId: ").Append(TransactionId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}