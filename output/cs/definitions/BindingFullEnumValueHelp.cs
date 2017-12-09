using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    // Describes an enumerator.
    [DataContract]
    public struct BindingFullEnumValueHelp
    {
        [DataMember(Name = "description")]
        public string Description { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "value")]
        public int Value { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BindingFullEnumValueHelp {\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Value: ").Append(Value).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}