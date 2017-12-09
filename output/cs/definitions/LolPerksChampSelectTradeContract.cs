using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPerksChampSelectTradeContract
    {
        [DataMember(Name = "cellId")]
        public long CellId { get; set; }

        [DataMember(Name = "id")]
        public long Id { get; set; }

        [DataMember(Name = "state")]
        public LolPerksChampSelectTradeState State { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPerksChampSelectTradeContract {\n");
            sb.Append("  CellId: ").Append(CellId).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}