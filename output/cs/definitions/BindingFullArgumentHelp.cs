using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    // Describes a function parameter.
    [DataContract]
    public struct BindingFullArgumentHelp
    {
        [DataMember(Name = "description")]
        public string Description { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "optional")]
        public bool Optional { get; set; }

        [DataMember(Name = "type")]
        public BindingFullTypeIdentifier Type { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BindingFullArgumentHelp {\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Optional: ").Append(Optional).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}