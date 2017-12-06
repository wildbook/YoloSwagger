using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct DynamicCelebrationMessagingNotificationResource
    {
        [DataMember(Name = "celebrationBody")]
        string CelebrationBody { get; set; }

        [DataMember(Name = "celebrationMessage")]
        string CelebrationMessage { get; set; }

        [DataMember(Name = "celebrationTitle")]
        string CelebrationTitle { get; set; }

        [DataMember(Name = "celebrationType")]
        string CelebrationType { get; set; }

        [DataMember(Name = "id")]
        int Id { get; set; }

        [DataMember(Name = "inventoryType")]
        string InventoryType { get; set; }

        [DataMember(Name = "itemId")]
        string ItemId { get; set; }

        [DataMember(Name = "itemQuantity")]
        string ItemQuantity { get; set; }

        [DataMember(Name = "msgId")]
        string MsgId { get; set; }

        [DataMember(Name = "status")]
        int Status { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class DynamicCelebrationMessagingNotificationResource {\n");
            sb.Append("  CelebrationBody: ").Append(CelebrationBody).Append("\n");
            sb.Append("  CelebrationMessage: ").Append(CelebrationMessage).Append("\n");
            sb.Append("  CelebrationTitle: ").Append(CelebrationTitle).Append("\n");
            sb.Append("  CelebrationType: ").Append(CelebrationType).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  InventoryType: ").Append(InventoryType).Append("\n");
            sb.Append("  ItemId: ").Append(ItemId).Append("\n");
            sb.Append("  ItemQuantity: ").Append(ItemQuantity).Append("\n");
            sb.Append("  MsgId: ").Append(MsgId).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}