using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    // Describes the type of a value.
    [DataContract]
    public struct BindingFullTypeIdentifier
    {
        [DataMember(Name = "elementType")]
        public string ElementType { get; set; }

        [DataMember(Name = "type")]
        public string Type { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BindingFullTypeIdentifier {\n");
            sb.Append("  ElementType: ").Append(ElementType).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}