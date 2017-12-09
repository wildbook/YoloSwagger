using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    // Describes an event.
    [DataContract]
    public struct BindingFullEventHelp
    {
        [DataMember(Name = "description")]
        public string Description { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "nameSpace")]
        public string NameSpace { get; set; }

        [DataMember(Name = "tags")]
        public string[] Tags { get; set; }

        [DataMember(Name = "type")]
        public BindingFullTypeIdentifier Type { get; set; }

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