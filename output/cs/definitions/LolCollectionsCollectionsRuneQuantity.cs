using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolCollectionsCollectionsRuneQuantity
    {
        [DataMember(Name = "quantity")]
        public int Quantity { get; set; }

        [DataMember(Name = "runeId")]
        public uint RuneId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolCollectionsCollectionsRuneQuantity {\n");
            sb.Append("  Quantity: ").Append(Quantity).Append("\n");
            sb.Append("  RuneId: ").Append(RuneId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}