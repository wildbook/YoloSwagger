using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    // Describes the exposed native API.
    [DataContract]
    public struct BindingFullApiHelp
    {
        [DataMember(Name = "events")]
        public BindingFullEventHelp[] Events { get; set; }

        [DataMember(Name = "functions")]
        public BindingFullFunctionHelp[] Functions { get; set; }

        [DataMember(Name = "types")]
        public BindingFullTypeHelp[] Types { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BindingFullApiHelp {\n");
            sb.Append("  Events: ").Append(Events).Append("\n");
            sb.Append("  Functions: ").Append(Functions).Append("\n");
            sb.Append("  Types: ").Append(Types).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}