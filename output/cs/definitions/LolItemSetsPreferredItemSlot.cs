using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolItemSetsPreferredItemSlot
    {
        [DataMember(Name = "id")]
        public string Id { get; set; }

        [DataMember(Name = "preferredItemSlot")]
        public short PreferredItemSlot { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolItemSetsPreferredItemSlot {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  PreferredItemSlot: ").Append(PreferredItemSlot).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}