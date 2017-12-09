using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ClubTag
    {
        [DataMember(Name = "tag")]
        public string Tag { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ClubTag {\n");
            sb.Append("  Tag: ").Append(Tag).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}