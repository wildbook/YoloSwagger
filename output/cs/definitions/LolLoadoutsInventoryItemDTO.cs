using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLoadoutsInventoryItemDTO
    {
        [DataMember(Name = "eneitlementTypeId")]
        string EneitlementTypeId { get; set; }

        [DataMember(Name = "entitlementId")]
        string EntitlementId { get; set; }

        [DataMember(Name = "expirationDate")]
        string ExpirationDate { get; set; }

        [DataMember(Name = "f2p")]
        bool F2p { get; set; }

        [DataMember(Name = "instanceId")]
        string InstanceId { get; set; }

        [DataMember(Name = "instanceTypeId")]
        string InstanceTypeId { get; set; }

        [DataMember(Name = "inventoryType")]
        string InventoryType { get; set; }

        [DataMember(Name = "itemId")]
        int ItemId { get; set; }

        [DataMember(Name = "lsb")]
        bool Lsb { get; set; }

        [DataMember(Name = "purchaseDate")]
        string PurchaseDate { get; set; }

        [DataMember(Name = "quantity")]
        ulong Quantity { get; set; }

        [DataMember(Name = "rental")]
        bool Rental { get; set; }

        [DataMember(Name = "usedInGameDate")]
        string UsedInGameDate { get; set; }

        [DataMember(Name = "wins")]
        ulong Wins { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLoadoutsInventoryItemDTO {\n");
            sb.Append("  EneitlementTypeId: ").Append(EneitlementTypeId).Append("\n");
            sb.Append("  EntitlementId: ").Append(EntitlementId).Append("\n");
            sb.Append("  ExpirationDate: ").Append(ExpirationDate).Append("\n");
            sb.Append("  F2p: ").Append(F2p).Append("\n");
            sb.Append("  InstanceId: ").Append(InstanceId).Append("\n");
            sb.Append("  InstanceTypeId: ").Append(InstanceTypeId).Append("\n");
            sb.Append("  InventoryType: ").Append(InventoryType).Append("\n");
            sb.Append("  ItemId: ").Append(ItemId).Append("\n");
            sb.Append("  Lsb: ").Append(Lsb).Append("\n");
            sb.Append("  PurchaseDate: ").Append(PurchaseDate).Append("\n");
            sb.Append("  Quantity: ").Append(Quantity).Append("\n");
            sb.Append("  Rental: ").Append(Rental).Append("\n");
            sb.Append("  UsedInGameDate: ").Append(UsedInGameDate).Append("\n");
            sb.Append("  Wins: ").Append(Wins).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}