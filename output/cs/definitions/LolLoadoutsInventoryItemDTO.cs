using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLoadoutsInventoryItemDTO
    {
        [DataMember(Name = "eneitlementTypeId")]
        public string EneitlementTypeId { get; set; }

        [DataMember(Name = "entitlementId")]
        public string EntitlementId { get; set; }

        [DataMember(Name = "expirationDate")]
        public string ExpirationDate { get; set; }

        [DataMember(Name = "f2p")]
        public bool F2p { get; set; }

        [DataMember(Name = "instanceId")]
        public string InstanceId { get; set; }

        [DataMember(Name = "instanceTypeId")]
        public string InstanceTypeId { get; set; }

        [DataMember(Name = "inventoryType")]
        public string InventoryType { get; set; }

        [DataMember(Name = "itemId")]
        public int ItemId { get; set; }

        [DataMember(Name = "lsb")]
        public bool Lsb { get; set; }

        [DataMember(Name = "purchaseDate")]
        public string PurchaseDate { get; set; }

        [DataMember(Name = "quantity")]
        public ulong Quantity { get; set; }

        [DataMember(Name = "rental")]
        public bool Rental { get; set; }

        [DataMember(Name = "usedInGameDate")]
        public string UsedInGameDate { get; set; }

        [DataMember(Name = "wins")]
        public ulong Wins { get; set; }

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