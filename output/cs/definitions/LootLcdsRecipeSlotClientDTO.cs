using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LootLcdsRecipeSlotClientDTO
    {
        [DataMember(Name = "quantityExpression")]
        public string QuantityExpression { get; set; }

        [DataMember(Name = "query")]
        public string Query { get; set; }

        [DataMember(Name = "slotNumber")]
        public int SlotNumber { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LootLcdsRecipeSlotClientDTO {\n");
            sb.Append("  QuantityExpression: ").Append(QuantityExpression).Append("\n");
            sb.Append("  Query: ").Append(Query).Append("\n");
            sb.Append("  SlotNumber: ").Append(SlotNumber).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}