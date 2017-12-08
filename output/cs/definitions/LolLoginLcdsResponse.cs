using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLoginLcdsResponse
    {
        [DataMember(Name = "body")]
        dynamic Body { get; set; }

        [DataMember(Name = "typeName")]
        string TypeName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLoginLcdsResponse {\n");
            sb.Append("  Body: ").Append(Body).Append("\n");
            sb.Append("  TypeName: ").Append(TypeName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}