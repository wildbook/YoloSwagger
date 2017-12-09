using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolStorePageGroupingDTO
    {
        [DataMember(Name = "grouped")]
        public bool Grouped { get; set; }

        [DataMember(Name = "hidden")]
        public bool Hidden { get; set; }

        [DataMember(Name = "items")]
        public LolStoreItemKey[] Items { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolStorePageGroupingDTO {\n");
            sb.Append("  Grouped: ").Append(Grouped).Append("\n");
            sb.Append("  Hidden: ").Append(Hidden).Append("\n");
            sb.Append("  Items: ").Append(Items).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}