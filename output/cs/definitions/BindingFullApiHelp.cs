using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    // Describes the exposed native API.
    [DataContract]
    struct BindingFullApiHelp
    {
        [DataMember(Name = "functions")]
        BindingFullFunctionHelp[] Functions { get; set; }

        [DataMember(Name = "events")]
        BindingFullEventHelp[] Events { get; set; }

        [DataMember(Name = "types")]
        BindingFullTypeHelp[] Types { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BindingFullApiHelp {\n");
            sb.Append("  Functions: ").Append(Functions).Append("\n");
            sb.Append("  Events: ").Append(Events).Append("\n");
            sb.Append("  Types: ").Append(Types).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}