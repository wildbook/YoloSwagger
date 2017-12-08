using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    // Describes a member of a struct.
    [DataContract]
    struct BindingFullFieldHelp
    {
        [DataMember(Name = "type")]
        BindingFullTypeIdentifier Type { get; set; }

        [DataMember(Name = "offset")]
        uint Offset { get; set; }

        [DataMember(Name = "optional")]
        bool Optional { get; set; }

        [DataMember(Name = "description")]
        string Description { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BindingFullFieldHelp {\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Offset: ").Append(Offset).Append("\n");
            sb.Append("  Optional: ").Append(Optional).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}