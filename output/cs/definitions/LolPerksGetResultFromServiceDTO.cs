using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolPerksGetResultFromServiceDTO
    {
        [DataMember(Name = "error")]
        string Error { get; set; }

        [DataMember(Name = "result")]
        string Result { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPerksGetResultFromServiceDTO {\n");
            sb.Append("  Error: ").Append(Error).Append("\n");
            sb.Append("  Result: ").Append(Result).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}