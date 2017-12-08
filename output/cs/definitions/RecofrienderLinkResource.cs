using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct RecofrienderLinkResource
    {
        [DataMember(Name = "reason")]
        string Reason { get; set; }

        [DataMember(Name = "linked")]
        bool Linked { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RecofrienderLinkResource {\n");
            sb.Append("  Reason: ").Append(Reason).Append("\n");
            sb.Append("  Linked: ").Append(Linked).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}