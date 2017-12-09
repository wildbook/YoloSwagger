using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    // Describes a struct or enum type.
    [DataContract]
    public struct BindingFullTypeHelp
    {
        [DataMember(Name = "description")]
        public string Description { get; set; }

        [DataMember(Name = "fields")]
        public BindingFullFieldHelp[] Fields { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "nameSpace")]
        public string NameSpace { get; set; }

        [DataMember(Name = "size")]
        public uint Size { get; set; }

        [DataMember(Name = "tags")]
        public string[] Tags { get; set; }

        [DataMember(Name = "values")]
        public BindingFullEnumValueHelp[] Values { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BindingFullTypeHelp {\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  Fields: ").Append(Fields).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  NameSpace: ").Append(NameSpace).Append("\n");
            sb.Append("  Size: ").Append(Size).Append("\n");
            sb.Append("  Tags: ").Append(Tags).Append("\n");
            sb.Append("  Values: ").Append(Values).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}