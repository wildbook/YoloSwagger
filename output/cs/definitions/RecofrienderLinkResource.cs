using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RecofrienderLinkResource
    {
        [DataMember(Name = "linked")]
        public bool Linked { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "reason")]
        public string Reason { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RecofrienderLinkResource {\n");
            sb.Append("  Linked: ").Append(Linked).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Reason: ").Append(Reason).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}