using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    // Describes an event.
    [DataContract]
    struct BindingFullEventHelp
    {
        [DataMember(Name = "description")]
        string Description { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "nameSpace")]
        string NameSpace { get; set; }

        [DataMember(Name = "tags")]
        string[] Tags { get; set; }

        [DataMember(Name = "type")]
        BindingFullTypeIdentifier Type { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BindingFullEventHelp {\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  NameSpace: ").Append(NameSpace).Append("\n");
            sb.Append("  Tags: ").Append(Tags).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}