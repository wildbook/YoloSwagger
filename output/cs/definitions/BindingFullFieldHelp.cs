using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    // Describes a member of a struct.
    [DataContract]
    public struct BindingFullFieldHelp
    {
        [DataMember(Name = "description")]
        public string Description { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "offset")]
        public uint Offset { get; set; }

        [DataMember(Name = "optional")]
        public bool Optional { get; set; }

        [DataMember(Name = "type")]
        public BindingFullTypeIdentifier Type { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BindingFullFieldHelp {\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Offset: ").Append(Offset).Append("\n");
            sb.Append("  Optional: ").Append(Optional).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}