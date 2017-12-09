using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolItemSetsItemSetItem
    {
        [DataMember(Name = "count")]
        public ushort Count { get; set; }

        [DataMember(Name = "id")]
        public string Id { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolItemSetsItemSetItem {\n");
            sb.Append("  Count: ").Append(Count).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}