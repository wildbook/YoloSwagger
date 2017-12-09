using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPurchaseWidgetTransaction
    {
        [DataMember(Name = "iconUrl")]
        public string IconUrl { get; set; }

        [DataMember(Name = "itemKey")]
        public LolPurchaseWidgetItemKey ItemKey { get; set; }

        [DataMember(Name = "itemName")]
        public string ItemName { get; set; }

        [DataMember(Name = "transactionId")]
        public string TransactionId { get; set; }

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