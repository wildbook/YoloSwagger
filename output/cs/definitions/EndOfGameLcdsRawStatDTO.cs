using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct EndOfGameLcdsRawStatDTO
    {
        [DataMember(Name = "value")]
        long Value { get; set; }

        [DataMember(Name = "statTypeName")]
        string StatTypeName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class EndOfGameLcdsRawStatDTO {\n");
            sb.Append("  Value: ").Append(Value).Append("\n");
            sb.Append("  StatTypeName: ").Append(StatTypeName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}